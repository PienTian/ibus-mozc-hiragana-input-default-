// Copyright 2010, Google Inc.
// Copyright (c) 2010-2012 uim Project http://code.google.com/p/uim/
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of authors nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "unix/uim/key_translator.h"

#include <uim.h>

#include "base/logging.h"

namespace {

const struct SpecialKeyMap {
  unsigned int from;
  mozc::commands::KeyEvent::SpecialKey to;
} special_key_map[] = {
  {0x20, mozc::commands::KeyEvent::SPACE},
  {UKey_Return, mozc::commands::KeyEvent::ENTER},
  {UKey_Left, mozc::commands::KeyEvent::LEFT},
  {UKey_Right, mozc::commands::KeyEvent::RIGHT},
  {UKey_Up, mozc::commands::KeyEvent::UP},
  {UKey_Down, mozc::commands::KeyEvent::DOWN},
  {UKey_Escape, mozc::commands::KeyEvent::ESCAPE},
  {UKey_Delete, mozc::commands::KeyEvent::DEL},
  {UKey_Backspace, mozc::commands::KeyEvent::BACKSPACE},
  {UKey_Insert, mozc::commands::KeyEvent::INSERT},
  {UKey_Henkan, mozc::commands::KeyEvent::HENKAN},
  {UKey_Muhenkan, mozc::commands::KeyEvent::MUHENKAN},
  {UKey_Hiragana, mozc::commands::KeyEvent::KANA},
  {UKey_Katakana, mozc::commands::KeyEvent::KANA},
  {UKey_Eisu_toggle, mozc::commands::KeyEvent::EISU},
  {UKey_Home, mozc::commands::KeyEvent::HOME},
  {UKey_End, mozc::commands::KeyEvent::END},
  {UKey_Tab, mozc::commands::KeyEvent::TAB},
  {UKey_F1, mozc::commands::KeyEvent::F1},
  {UKey_F2, mozc::commands::KeyEvent::F2},
  {UKey_F3, mozc::commands::KeyEvent::F3},
  {UKey_F4, mozc::commands::KeyEvent::F4},
  {UKey_F5, mozc::commands::KeyEvent::F5},
  {UKey_F6, mozc::commands::KeyEvent::F6},
  {UKey_F7, mozc::commands::KeyEvent::F7},
  {UKey_F8, mozc::commands::KeyEvent::F8},
  {UKey_F9, mozc::commands::KeyEvent::F9},
  {UKey_F10, mozc::commands::KeyEvent::F10},
  {UKey_F11, mozc::commands::KeyEvent::F11},
  {UKey_F12, mozc::commands::KeyEvent::F12},
  {UKey_F13, mozc::commands::KeyEvent::F13},
  {UKey_F14, mozc::commands::KeyEvent::F14},
  {UKey_F15, mozc::commands::KeyEvent::F15},
  {UKey_F16, mozc::commands::KeyEvent::F16},
  {UKey_F17, mozc::commands::KeyEvent::F17},
  {UKey_F18, mozc::commands::KeyEvent::F18},
  {UKey_F19, mozc::commands::KeyEvent::F19},
  {UKey_F20, mozc::commands::KeyEvent::F20},
  {UKey_F21, mozc::commands::KeyEvent::F21},
  {UKey_F22, mozc::commands::KeyEvent::F22},
  {UKey_F23, mozc::commands::KeyEvent::F23},
  {UKey_F24, mozc::commands::KeyEvent::F24},
  {UKey_Prior, mozc::commands::KeyEvent::PAGE_UP},
  {UKey_Next, mozc::commands::KeyEvent::PAGE_DOWN},
};

const struct ModifierKeyMap {
  unsigned int from;
  mozc::commands::KeyEvent::ModifierKey to;
} modifier_key_map[] = {
  {UKey_Shift, mozc::commands::KeyEvent::SHIFT},
  {UKey_Control, mozc::commands::KeyEvent::CTRL},
  {UKey_Alt, mozc::commands::KeyEvent::ALT},
};

const struct ModifierMaskMap {
  unsigned int from;
  mozc::commands::KeyEvent::ModifierKey to;
} modifier_mask_map[] = {
  {UMod_Shift, mozc::commands::KeyEvent::SHIFT},
  {UMod_Control, mozc::commands::KeyEvent::CTRL},
  {UMod_Alt, mozc::commands::KeyEvent::ALT},
};

// TODO:Add kana_map_dv to support Dvoraklayout.
const struct KanaMap {
  unsigned int code;
  const char *no_shift;
  const char *shift;
} kana_map_jp[] = {
  { '1' , "\xe3\x81\xac", "\xe3\x81\xac" },  // "???", "???"
  { '!' , "\xe3\x81\xac", "\xe3\x81\xac" },  // "???", "???"
  { '2' , "\xe3\x81\xb5", "\xe3\x81\xb5" },  // "???", "???"
  { '\"', "\xe3\x81\xb5", "\xe3\x81\xb5" },  // "???", "???"
  { '3' , "\xe3\x81\x82", "\xe3\x81\x81" },  // "???", "???"
  { '#' , "\xe3\x81\x81", "\xe3\x81\x81" },  // "???", "???"
  { '4' , "\xe3\x81\x86", "\xe3\x81\x85" },  // "???", "???"
  { '$' , "\xe3\x81\x85", "\xe3\x81\x85" },  // "???", "???"
  { '5' , "\xe3\x81\x88", "\xe3\x81\x87" },  // "???", "???"
  { '%' , "\xe3\x81\x87", "\xe3\x81\x87" },  // "???", "???"
  { '6' , "\xe3\x81\x8a", "\xe3\x81\x89" },  // "???", "???"
  { '&' , "\xe3\x81\x89", "\xe3\x81\x89" },  // "???", "???"
  { '7' , "\xe3\x82\x84", "\xe3\x82\x83" },  // "???", "???"
  { '\'', "\xe3\x82\x83", "\xe3\x82\x83" },  // "???", "???"
  { '8' , "\xe3\x82\x86", "\xe3\x82\x85" },  // "???", "???"
  { '(' , "\xe3\x82\x85", "\xe3\x82\x85" },  // "???", "???"
  { '9' , "\xe3\x82\x88", "\xe3\x82\x87" },  // "???", "???"
  { ')' , "\xe3\x82\x87", "\xe3\x82\x87" },  // "???", "???"
  { '0' , "\xe3\x82\x8f", "\xe3\x82\x92" },  // "???", "???"
  { '-' , "\xe3\x81\xbb", "\xe3\x81\xbb" },  // "???", "???"
  { '=' , "\xe3\x81\xbb", "\xe3\x81\xbb" },  // "???", "???"
  { '^' , "\xe3\x81\xb8", "\xe3\x81\xb8" },  // "???", "???"
  { '~' , "\xe3\x82\x92", "\xe3\x82\x92" },  // "???", "???"
  { '|' , "\xe3\x83\xbc", "\xe3\x83\xbc" },  // "???", "???"
  { 'q' , "\xe3\x81\x9f", "\xe3\x81\x9f" },  // "???", "???"
  { 'Q' , "\xe3\x81\x9f", "\xe3\x81\x9f" },  // "???", "???"
  { 'w' , "\xe3\x81\xa6", "\xe3\x81\xa6" },  // "???", "???"
  { 'W' , "\xe3\x81\xa6", "\xe3\x81\xa6" },  // "???", "???"
  { 'e' , "\xe3\x81\x84", "\xe3\x81\x83" },  // "???", "???"
  { 'E' , "\xe3\x81\x83", "\xe3\x81\x83" },  // "???", "???"
  { 'r' , "\xe3\x81\x99", "\xe3\x81\x99" },  // "???", "???"
  { 'R' , "\xe3\x81\x99", "\xe3\x81\x99" },  // "???", "???"
  { 't' , "\xe3\x81\x8b", "\xe3\x81\x8b" },  // "???", "???"
  { 'T' , "\xe3\x81\x8b", "\xe3\x81\x8b" },  // "???", "???"
  { 'y' , "\xe3\x82\x93", "\xe3\x82\x93" },  // "???", "???"
  { 'Y' , "\xe3\x82\x93", "\xe3\x82\x93" },  // "???", "???"
  { 'u' , "\xe3\x81\xaa", "\xe3\x81\xaa" },  // "???", "???"
  { 'U' , "\xe3\x81\xaa", "\xe3\x81\xaa" },  // "???", "???"
  { 'i' , "\xe3\x81\xab", "\xe3\x81\xab" },  // "???", "???"
  { 'I' , "\xe3\x81\xab", "\xe3\x81\xab" },  // "???", "???"
  { 'o' , "\xe3\x82\x89", "\xe3\x82\x89" },  // "???", "???"
  { 'O' , "\xe3\x82\x89", "\xe3\x82\x89" },  // "???", "???"
  { 'p' , "\xe3\x81\x9b", "\xe3\x81\x9b" },  // "???", "???"
  { 'P' , "\xe3\x81\x9b", "\xe3\x81\x9b" },  // "???", "???"
  { '@' , "\xe3\x82\x9b", "\xe3\x82\x9b" },  // "???", "???"
  { '`' , "\xe3\x82\x9b", "\xe3\x82\x9b" },  // "???", "???"
  { '[' , "\xe3\x82\x9c", "\xe3\x80\x8c" },  // "???", "???"
  { '{' , "\xe3\x82\x9c", "\xe3\x80\x8c" },  // "???", "???"
  { 'a' , "\xe3\x81\xa1", "\xe3\x81\xa1" },  // "???", "???"
  { 'A' , "\xe3\x81\xa1", "\xe3\x81\xa1" },  // "???", "???"
  { 's' , "\xe3\x81\xa8", "\xe3\x81\xa8" },  // "???", "???"
  { 'S' , "\xe3\x81\xa8", "\xe3\x81\xa8" },  // "???", "???"
  { 'd' , "\xe3\x81\x97", "\xe3\x81\x97" },  // "???", "???"
  { 'D' , "\xe3\x81\x97", "\xe3\x81\x97" },  // "???", "???"
  { 'f' , "\xe3\x81\xaf", "\xe3\x81\xaf" },  // "???", "???"
  { 'F' , "\xe3\x81\xaf", "\xe3\x81\xaf" },  // "???", "???"
  { 'g' , "\xe3\x81\x8d", "\xe3\x81\x8d" },  // "???", "???"
  { 'G' , "\xe3\x81\x8d", "\xe3\x81\x8d" },  // "???", "???"
  { 'h' , "\xe3\x81\x8f", "\xe3\x81\x8f" },  // "???", "???"
  { 'H' , "\xe3\x81\x8f", "\xe3\x81\x8f" },  // "???", "???"
  { 'j' , "\xe3\x81\xbe", "\xe3\x81\xbe" },  // "???", "???"
  { 'J' , "\xe3\x81\xbe", "\xe3\x81\xbe" },  // "???", "???"
  { 'k' , "\xe3\x81\xae", "\xe3\x81\xae" },  // "???", "???"
  { 'K' , "\xe3\x81\xae", "\xe3\x81\xae" },  // "???", "???"
  { 'l' , "\xe3\x82\x8a", "\xe3\x82\x8a" },  // "???", "???"
  { 'L' , "\xe3\x82\x8a", "\xe3\x82\x8a" },  // "???", "???"
  { ';' , "\xe3\x82\x8c", "\xe3\x82\x8c" },  // "???", "???"
  { '+' , "\xe3\x82\x8c", "\xe3\x82\x8c" },  // "???", "???"
  { ':' , "\xe3\x81\x91", "\xe3\x81\x91" },  // "???", "???"
  { '*' , "\xe3\x81\x91", "\xe3\x81\x91" },  // "???", "???"
  { ']' , "\xe3\x82\x80", "\xe3\x80\x8d" },  // "???", "???"
  { '}' , "\xe3\x80\x8d", "\xe3\x80\x8d" },  // "???", "???"
  { 'z' , "\xe3\x81\xa4", "\xe3\x81\xa3" },  // "???", "???"
  { 'Z' , "\xe3\x81\xa3", "\xe3\x81\xa3" },  // "???", "???"
  { 'x' , "\xe3\x81\x95", "\xe3\x81\x95" },  // "???", "???"
  { 'X' , "\xe3\x81\x95", "\xe3\x81\x95" },  // "???", "???"
  { 'c' , "\xe3\x81\x9d", "\xe3\x81\x9d" },  // "???", "???"
  { 'C' , "\xe3\x81\x9d", "\xe3\x81\x9d" },  // "???", "???"
  { 'v' , "\xe3\x81\xb2", "\xe3\x81\xb2" },  // "???", "???"
  { 'V' , "\xe3\x81\xb2", "\xe3\x81\xb2" },  // "???", "???"
  { 'b' , "\xe3\x81\x93", "\xe3\x81\x93" },  // "???", "???"
  { 'B' , "\xe3\x81\x93", "\xe3\x81\x93" },  // "???", "???"
  { 'n' , "\xe3\x81\xbf", "\xe3\x81\xbf" },  // "???", "???"
  { 'N' , "\xe3\x81\xbf", "\xe3\x81\xbf" },  // "???", "???"
  { 'm' , "\xe3\x82\x82", "\xe3\x82\x82" },  // "???", "???"
  { 'M' , "\xe3\x82\x82", "\xe3\x82\x82" },  // "???", "???"
  { ',' , "\xe3\x81\xad", "\xe3\x80\x81" },  // "???", "???"
  { '<' , "\xe3\x80\x81", "\xe3\x80\x81" },  // "???", "???"
  { '.' , "\xe3\x82\x8b", "\xe3\x80\x82" },  // "???", "???"
  { '>' , "\xe3\x80\x82", "\xe3\x80\x82" },  // "???", "???"
  { '/' , "\xe3\x82\x81", "\xe3\x83\xbb" },  // "???", "???"
  { '?' , "\xe3\x83\xbb", "\xe3\x83\xbb" },  // "???", "???"
  { '_' , "\xe3\x82\x8d", "\xe3\x82\x8d" },  // "???", "???"
  // uim distinguishes backslash key and yen key
  { '\\', "\xe3\x82\x8d", "\xe3\x82\x8d" },  // "???", "???"
  { UKey_Yen, "\xe3\x83\xbc", "\xe3\x83\xbc" }, // "???", "???"
}, kana_map_us[] = {
  { '`' , "\xe3\x82\x8d", "\xe3\x82\x8d" },  // "???", "???"
  { '~' , "\xe3\x82\x8d", "\xe3\x82\x8d" },  // "???", "???"
  { '1' , "\xe3\x81\xac", "\xe3\x81\xac" },  // "???", "???"
  { '!' , "\xe3\x81\xac", "\xe3\x81\xac" },  // "???", "???"
  { '2' , "\xe3\x81\xb5", "\xe3\x81\xb5" },  // "???", "???"
  { '@' , "\xe3\x81\xb5", "\xe3\x81\xb5" },  // "???", "???"
  { '3' , "\xe3\x81\x82", "\xe3\x81\x81" },  // "???", "???"
  { '#' , "\xe3\x81\x81", "\xe3\x81\x81" },  // "???", "???"
  { '4' , "\xe3\x81\x86", "\xe3\x81\x85" },  // "???", "???"
  { '$' , "\xe3\x81\x85", "\xe3\x81\x85" },  // "???", "???"
  { '5' , "\xe3\x81\x88", "\xe3\x81\x87" },  // "???", "???"
  { '%' , "\xe3\x81\x87", "\xe3\x81\x87" },  // "???", "???"
  { '6' , "\xe3\x81\x8a", "\xe3\x81\x89" },  // "???", "???"
  { '^' , "\xe3\x81\x89", "\xe3\x81\x89" },  // "???", "???"
  { '7' , "\xe3\x82\x84", "\xe3\x82\x83" },  // "???", "???"
  { '&' , "\xe3\x82\x83", "\xe3\x82\x83" },  // "???", "???"
  { '8' , "\xe3\x82\x86", "\xe3\x82\x85" },  // "???", "???"
  { '*' , "\xe3\x82\x85", "\xe3\x82\x85" },  // "???", "???"
  { '9' , "\xe3\x82\x88", "\xe3\x82\x87" },  // "???", "???"
  { '(' , "\xe3\x82\x87", "\xe3\x82\x87" },  // "???", "???"
  { '0' , "\xe3\x82\x8f", "\xe3\x82\x92" },  // "???", "???"
  { ')' , "\xe3\x82\x92", "\xe3\x82\x92" },  // "???", "???"
  { '-' , "\xe3\x81\xbb", "\xe3\x83\xbc" },  // "???", "???"
  { '_' , "\xe3\x83\xbc", "\xe3\x83\xbc" },  // "???", "???"
  { '=' , "\xe3\x81\xb8", "\xe3\x81\xb8" },  // "???", "???"
  { '+' , "\xe3\x81\xb8", "\xe3\x81\xb8" },  // "???", "???"
  { 'q' , "\xe3\x81\x9f", "\xe3\x81\x9f" },  // "???", "???"
  { 'Q' , "\xe3\x81\x9f", "\xe3\x81\x9f" },  // "???", "???"
  { 'w' , "\xe3\x81\xa6", "\xe3\x81\xa6" },  // "???", "???"
  { 'W' , "\xe3\x81\xa6", "\xe3\x81\xa6" },  // "???", "???"
  { 'e' , "\xe3\x81\x84", "\xe3\x81\x83" },  // "???", "???"
  { 'E' , "\xe3\x81\x83", "\xe3\x81\x83" },  // "???", "???"
  { 'r' , "\xe3\x81\x99", "\xe3\x81\x99" },  // "???", "???"
  { 'R' , "\xe3\x81\x99", "\xe3\x81\x99" },  // "???", "???"
  { 't' , "\xe3\x81\x8b", "\xe3\x81\x8b" },  // "???", "???"
  { 'T' , "\xe3\x81\x8b", "\xe3\x81\x8b" },  // "???", "???"
  { 'y' , "\xe3\x82\x93", "\xe3\x82\x93" },  // "???", "???"
  { 'Y' , "\xe3\x82\x93", "\xe3\x82\x93" },  // "???", "???"
  { 'u' , "\xe3\x81\xaa", "\xe3\x81\xaa" },  // "???", "???"
  { 'U' , "\xe3\x81\xaa", "\xe3\x81\xaa" },  // "???", "???"
  { 'i' , "\xe3\x81\xab", "\xe3\x81\xab" },  // "???", "???"
  { 'I' , "\xe3\x81\xab", "\xe3\x81\xab" },  // "???", "???"
  { 'o' , "\xe3\x82\x89", "\xe3\x82\x89" },  // "???", "???"
  { 'O' , "\xe3\x82\x89", "\xe3\x82\x89" },  // "???", "???"
  { 'p' , "\xe3\x81\x9b", "\xe3\x81\x9b" },  // "???", "???"
  { 'P' , "\xe3\x81\x9b", "\xe3\x81\x9b" },  // "???", "???"
  { '[' , "\xe3\x82\x9b", "\xe3\x82\x9b" },  // "???", "???"
  { '{' , "\xe3\x82\x9b", "\xe3\x82\x9b" },  // "???", "???"
  { ']' , "\xe3\x82\x9c", "\xe3\x80\x8c" },  // "???", "???"
  { '}' , "\xe3\x80\x8c", "\xe3\x80\x8c" },  // "???", "???"
  { '\\', "\xe3\x82\x80", "\xe3\x80\x8d" },  // "???", "???"
  { '|' , "\xe3\x80\x8d", "\xe3\x80\x8d" },  // "???", "???"
  { 'a' , "\xe3\x81\xa1", "\xe3\x81\xa1" },  // "???", "???"
  { 'A' , "\xe3\x81\xa1", "\xe3\x81\xa1" },  // "???", "???"
  { 's' , "\xe3\x81\xa8", "\xe3\x81\xa8" },  // "???", "???"
  { 'S' , "\xe3\x81\xa8", "\xe3\x81\xa8" },  // "???", "???"
  { 'd' , "\xe3\x81\x97", "\xe3\x81\x97" },  // "???", "???"
  { 'D' , "\xe3\x81\x97", "\xe3\x81\x97" },  // "???", "???"
  { 'f' , "\xe3\x81\xaf", "\xe3\x81\xaf" },  // "???", "???"
  { 'F' , "\xe3\x81\xaf", "\xe3\x81\xaf" },  // "???", "???"
  { 'g' , "\xe3\x81\x8d", "\xe3\x81\x8d" },  // "???", "???"
  { 'G' , "\xe3\x81\x8d", "\xe3\x81\x8d" },  // "???", "???"
  { 'h' , "\xe3\x81\x8f", "\xe3\x81\x8f" },  // "???", "???"
  { 'H' , "\xe3\x81\x8f", "\xe3\x81\x8f" },  // "???", "???"
  { 'j' , "\xe3\x81\xbe", "\xe3\x81\xbe" },  // "???", "???"
  { 'J' , "\xe3\x81\xbe", "\xe3\x81\xbe" },  // "???", "???"
  { 'k' , "\xe3\x81\xae", "\xe3\x81\xae" },  // "???", "???"
  { 'K' , "\xe3\x81\xae", "\xe3\x81\xae" },  // "???", "???"
  { 'l' , "\xe3\x82\x8a", "\xe3\x82\x8a" },  // "???", "???"
  { 'L' , "\xe3\x82\x8a", "\xe3\x82\x8a" },  // "???", "???"
  { ';' , "\xe3\x82\x8c", "\xe3\x82\x8c" },  // "???", "???"
  { ':' , "\xe3\x82\x8c", "\xe3\x82\x8c" },  // "???", "???"
  { '\'', "\xe3\x81\x91", "\xe3\x81\x91" },  // "???", "???"
  { '\"', "\xe3\x81\x91", "\xe3\x81\x91" },  // "???", "???"
  { 'z' , "\xe3\x81\xa4", "\xe3\x81\xa3" },  // "???", "???"
  { 'Z' , "\xe3\x81\xa3", "\xe3\x81\xa3" },  // "???", "???"
  { 'x' , "\xe3\x81\x95", "\xe3\x81\x95" },  // "???", "???"
  { 'X' , "\xe3\x81\x95", "\xe3\x81\x95" },  // "???", "???"
  { 'c' , "\xe3\x81\x9d", "\xe3\x81\x9d" },  // "???", "???"
  { 'C' , "\xe3\x81\x9d", "\xe3\x81\x9d" },  // "???", "???"
  { 'v' , "\xe3\x81\xb2", "\xe3\x81\xb2" },  // "???", "???"
  { 'V' , "\xe3\x81\xb2", "\xe3\x81\xb2" },  // "???", "???"
  { 'b' , "\xe3\x81\x93", "\xe3\x81\x93" },  // "???", "???"
  { 'B' , "\xe3\x81\x93", "\xe3\x81\x93" },  // "???", "???"
  { 'n' , "\xe3\x81\xbf", "\xe3\x81\xbf" },  // "???", "???"
  { 'N' , "\xe3\x81\xbf", "\xe3\x81\xbf" },  // "???", "???"
  { 'm' , "\xe3\x82\x82", "\xe3\x82\x82" },  // "???", "???"
  { 'M' , "\xe3\x82\x82", "\xe3\x82\x82" },  // "???", "???"
  { ',' , "\xe3\x81\xad", "\xe3\x80\x81" },  // "???", "???"
  { '<' , "\xe3\x80\x81", "\xe3\x80\x81" },  // "???", "???"
  { '.' , "\xe3\x82\x8b", "\xe3\x80\x82" },  // "???", "???"
  { '>' , "\xe3\x80\x82", "\xe3\x80\x82" },  // "???", "???"
  { '/' , "\xe3\x82\x81", "\xe3\x83\xbb" },  // "???", "???"
  { '?' , "\xe3\x83\xbb", "\xe3\x83\xbb" },  // "???", "???"
  { UKey_Yen, "\xe3\x83\xbc", "\xe3\x83\xbc" }, // "???", "???"
};

}  // namespace

namespace mozc {
namespace uim {

KeyTranslator::KeyTranslator() {
  Init();
}

KeyTranslator::~KeyTranslator() {
}

bool KeyTranslator::Translate(unsigned int keyval,
                              unsigned int keycode,
                              unsigned int modifiers,
                              config::Config::PreeditMethod method,
                              bool layout_is_jp,
                              commands::KeyEvent *out_event) const {
  DCHECK(out_event) << "out_event is NULL";
  out_event->Clear();

  string kana_key_string;
  if ((method == config::Config::KANA) && IsKanaAvailable(
          keyval, keycode, modifiers, layout_is_jp, &kana_key_string)) {
    out_event->set_key_code(keyval);
    out_event->set_key_string(kana_key_string);
  } else if (IsAscii(keyval, keycode, modifiers)) {
    out_event->set_key_code(keyval);
  } else if (IsModifierKey(keyval, keycode, modifiers)) {
    ModifierKeyMap::const_iterator i = modifier_key_map_.find(keyval);
    DCHECK(i != modifier_key_map_.end());
    out_event->add_modifier_keys((*i).second);
  } else if (IsSpecialKey(keyval, keycode, modifiers)) {
    SpecialKeyMap::const_iterator i = special_key_map_.find(keyval);
    DCHECK(i != special_key_map_.end());
    out_event->set_special_key((*i).second);
  } else if ((method == config::Config::ROMAN) && keyval == UKey_Yen) {
    /* regards yen key as backslash */
    out_event->set_key_code('\\');
  } else {
    VLOG(1) << "Unknown keyval: " << keyval;
    return false;
  }

  for (ModifierKeyMap::const_iterator i = modifier_mask_map_.begin();
       i != modifier_mask_map_.end();
       ++i) {
    // Do not set a SHIFT modifier when |keyval| is a printable key by following
    // the Mozc's rule.
    if (((*i).second == commands::KeyEvent::SHIFT) &&
        IsAscii(keyval, keycode, modifiers)) {
      continue;
    }

    if ((*i).first & modifiers) {
      out_event->add_modifier_keys((*i).second);
    }
  }

  return true;
}

void KeyTranslator::Init() {
  for (int i = 0; i < arraysize(special_key_map); ++i) {
    CHECK(special_key_map_.insert(
        std::make_pair(special_key_map[i].from,
                       special_key_map[i].to)).second);
  }
  for (int i = 0; i < arraysize(modifier_key_map); ++i) {
    CHECK(modifier_key_map_.insert(
        std::make_pair(modifier_key_map[i].from,
                       modifier_key_map[i].to)).second);
  }
  for (int i = 0; i < arraysize(modifier_mask_map); ++i) {
    CHECK(modifier_mask_map_.insert(
        std::make_pair(modifier_mask_map[i].from,
                       modifier_mask_map[i].to)).second);
  }
  for (int i = 0; i < arraysize(kana_map_jp); ++i) {
    CHECK(kana_map_jp_.insert(
        std::make_pair(kana_map_jp[i].code,
                       std::make_pair(kana_map_jp[i].no_shift,    
                                      kana_map_jp[i].shift))).second);
  }
  for (int i = 0; i < arraysize(kana_map_us); ++i) {
    CHECK(kana_map_us_.insert(
        std::make_pair(kana_map_us[i].code,
                       std::make_pair(kana_map_us[i].no_shift,
                                      kana_map_us[i].shift))).second);
  }
}

bool KeyTranslator::IsModifierKey(unsigned int keyval,
                                  unsigned int keycode,
                                  unsigned int modifiers) const {
  return modifier_key_map_.find(keyval) != modifier_key_map_.end();
}

bool KeyTranslator::IsSpecialKey(unsigned int keyval,
                                 unsigned int keycode,
                                 unsigned int modifiers) const {
  return special_key_map_.find(keyval) != special_key_map_.end();
}

bool KeyTranslator::IsKanaAvailable(unsigned int keyval,
                                    unsigned int keycode,
                                    unsigned int modifiers,
                                    bool layout_is_jp,
                                    string *out) const {
  if ((modifiers & UMod_Control) || (modifiers & UMod_Alt)) {
    return false;
  }
  const KanaMap &kana_map = layout_is_jp ? kana_map_jp_ : kana_map_us_;
  KanaMap::const_iterator iter = kana_map.find(keyval);
  if (iter == kana_map.end()) {
    return false;
  }

  if (out)
      *out = (modifiers & UMod_Shift) ?
          iter->second.second : iter->second.first;

  return true;
}

bool KeyTranslator::IsAscii(unsigned int keyval,
                            unsigned int keycode,
                            unsigned int modifiers) {
  return (keyval > 0x20 &&
          // Note: Space key (0x20) is a special key in Mozc.
          keyval <= 0x7e);  // ~
}

}  // namespace uim
}  // namespace mozc
