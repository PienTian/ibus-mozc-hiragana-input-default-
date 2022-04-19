// Copyright 2010 Google Inc. All Rights Reserved.

#ifndef MOZC_UNIX_IBUS_MAIN_H_
#define MOZC_UNIX_IBUS_MAIN_H_

#include <cstddef>

namespace {
const char kComponentName[] = "com.google.IBus.Mozc";
const char kComponentDescription[] = "Mozc Component";
const char kComponentExec[] = "/usr/lib/ibus-mozc/ibus-engine-mozc --ibus";
const char kComponentVersion[] = "0.0.0.0";
const char kComponentAuthor[] = "Google Inc.";
const char kComponentLicense[] = "New BSD";
const char kComponentHomepage[] = "https://github.com/google/mozc";
const char kComponentTextdomain[] = "ibus-mozc";
const char kEngineDescription[] = "Mozc (Japanese Input Method)";
const char kEngineLanguage[] = "ja";
const char kEngineIcon[] = "/usr/share/ibus-mozc/product_icon.png";
const char kEngineRank[] = "80";
const char kEngineIcon_prop_key[] = "InputMode";
const char kEngineSymbol[] = "&#x3042;";
const char kEngineSetup[] = "mozc_tool --mode=config_dialog";
const char* kEngineNameArray[] = {
"mozc-jp",
};
const char* kEngineLongnameArray[] = {
"Mozc",
};
const char* kEngineLayoutArray[] = {
"default",
};
const size_t kEngineArrayLen = 1;
const char kEnginesXml[] = R"#(<engines>
<engine>
  <description>Mozc (Japanese Input Method)</description>
  <language>ja</language>
  <icon>/usr/share/ibus-mozc/product_icon.png</icon>
  <rank>80</rank>
  <icon_prop_key>InputMode</icon_prop_key>
  <symbol>&#x3042;</symbol>
  <setup>mozc_tool --mode=config_dialog</setup>
  <name>mozc-jp</name>
  <longname>Mozc</longname>
  <layout>default</layout>
</engine>
</engines>
)#";
const char kIbusConfigTextProto[] = R"#(engines {
  name : "mozc-jp"
  longname : "Mozc"
  layout : "default"
}
)#";
}  // namespace
#endif  // MOZC_UNIX_IBUS_MAIN_H_
