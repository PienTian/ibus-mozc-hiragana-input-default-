// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/state.proto

#include "protocol/state.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_protocol_2fcandidates_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Candidates_protocol_2fcandidates_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protocol_2fcommands_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Preedit_protocol_2fcommands_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protocol_2fcommands_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Request_protocol_2fcommands_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protocol_2fcommands_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Result_protocol_2fcommands_2eproto;
namespace mozc {
namespace protocol {
class SessionStateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SessionState> _instance;
} _SessionState_default_instance_;
}  // namespace protocol
}  // namespace mozc
static void InitDefaultsscc_info_SessionState_protocol_2fstate_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mozc::protocol::_SessionState_default_instance_;
    new (ptr) ::mozc::protocol::SessionState();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mozc::protocol::SessionState::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_SessionState_protocol_2fstate_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 4, 0, InitDefaultsscc_info_SessionState_protocol_2fstate_2eproto}, {
      &scc_info_Preedit_protocol_2fcommands_2eproto.base,
      &scc_info_Candidates_protocol_2fcandidates_2eproto.base,
      &scc_info_Result_protocol_2fcommands_2eproto.base,
      &scc_info_Request_protocol_2fcommands_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protocol_2fstate_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protocol_2fstate_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protocol_2fstate_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protocol_2fstate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, id_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, created_time_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, committed_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, start_preedit_time_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, start_conversion_window_time_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, start_prediction_window_time_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, start_suggestion_window_time_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, start_infolist_window_time_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, preedit_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, candidates_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, result_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, request_),
  PROTOBUF_FIELD_OFFSET(::mozc::protocol::SessionState, input_field_type_),
  4,
  5,
  11,
  6,
  7,
  8,
  9,
  10,
  0,
  1,
  2,
  3,
  12,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 18, sizeof(::mozc::protocol::SessionState)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mozc::protocol::_SessionState_default_instance_),
};

const char descriptor_table_protodef_protocol_2fstate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024protocol/state.proto\022\rmozc.protocol\032\031p"
  "rotocol/candidates.proto\032\027protocol/comma"
  "nds.proto\"\300\004\n\014SessionState\022\016\n\002id\030\001 \002(\004B\002"
  "0\001\022\030\n\014created_time\030\002 \001(\004B\0020\001\022\030\n\tcommitte"
  "d\030\003 \001(\010:\005false\022\036\n\022start_preedit_time\030\n \001"
  "(\004B\0020\001\022(\n\034start_conversion_window_time\030\013"
  " \001(\004B\0020\001\022(\n\034start_prediction_window_time"
  "\030\014 \001(\004B\0020\001\022(\n\034start_suggestion_window_ti"
  "me\030\r \001(\004B\0020\001\022&\n\032start_infolist_window_ti"
  "me\030\016 \001(\004B\0020\001\022\'\n\007preedit\030\024 \001(\0132\026.mozc.com"
  "mands.Preedit\022-\n\ncandidates\030\025 \001(\0132\031.mozc"
  ".commands.Candidates\022%\n\006result\030\027 \001(\0132\025.m"
  "ozc.commands.Result\022\'\n\007request\030\030 \001(\0132\026.m"
  "ozc.commands.Request\022\?\n\020input_field_type"
  "\030\031 \001(\0162%.mozc.commands.Context.InputFiel"
  "dTypeJ\004\010\004\020\005J\004\010\005\020\006J\004\010\026\020\027R\020selected_indice"
  "sR\004modeR\023all_candidate_words"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protocol_2fstate_2eproto_deps[2] = {
  &::descriptor_table_protocol_2fcandidates_2eproto,
  &::descriptor_table_protocol_2fcommands_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_protocol_2fstate_2eproto_sccs[1] = {
  &scc_info_SessionState_protocol_2fstate_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protocol_2fstate_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protocol_2fstate_2eproto = {
  false, false, descriptor_table_protodef_protocol_2fstate_2eproto, "protocol/state.proto", 668,
  &descriptor_table_protocol_2fstate_2eproto_once, descriptor_table_protocol_2fstate_2eproto_sccs, descriptor_table_protocol_2fstate_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_protocol_2fstate_2eproto::offsets,
  file_level_metadata_protocol_2fstate_2eproto, 1, file_level_enum_descriptors_protocol_2fstate_2eproto, file_level_service_descriptors_protocol_2fstate_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_protocol_2fstate_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_protocol_2fstate_2eproto)), true);
namespace mozc {
namespace protocol {

// ===================================================================

void SessionState::InitAsDefaultInstance() {
  ::mozc::protocol::_SessionState_default_instance_._instance.get_mutable()->preedit_ = const_cast< ::mozc::commands::Preedit*>(
      ::mozc::commands::Preedit::internal_default_instance());
  ::mozc::protocol::_SessionState_default_instance_._instance.get_mutable()->candidates_ = const_cast< ::mozc::commands::Candidates*>(
      ::mozc::commands::Candidates::internal_default_instance());
  ::mozc::protocol::_SessionState_default_instance_._instance.get_mutable()->result_ = const_cast< ::mozc::commands::Result*>(
      ::mozc::commands::Result::internal_default_instance());
  ::mozc::protocol::_SessionState_default_instance_._instance.get_mutable()->request_ = const_cast< ::mozc::commands::Request*>(
      ::mozc::commands::Request::internal_default_instance());
}
class SessionState::_Internal {
 public:
  using HasBits = decltype(std::declval<SessionState>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_created_time(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_committed(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_start_preedit_time(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_start_conversion_window_time(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_start_prediction_window_time(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_start_suggestion_window_time(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_start_infolist_window_time(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static const ::mozc::commands::Preedit& preedit(const SessionState* msg);
  static void set_has_preedit(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::mozc::commands::Candidates& candidates(const SessionState* msg);
  static void set_has_candidates(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::mozc::commands::Result& result(const SessionState* msg);
  static void set_has_result(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::mozc::commands::Request& request(const SessionState* msg);
  static void set_has_request(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_input_field_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4096u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000010) ^ 0x00000010) != 0;
  }
};

const ::mozc::commands::Preedit&
SessionState::_Internal::preedit(const SessionState* msg) {
  return *msg->preedit_;
}
const ::mozc::commands::Candidates&
SessionState::_Internal::candidates(const SessionState* msg) {
  return *msg->candidates_;
}
const ::mozc::commands::Result&
SessionState::_Internal::result(const SessionState* msg) {
  return *msg->result_;
}
const ::mozc::commands::Request&
SessionState::_Internal::request(const SessionState* msg) {
  return *msg->request_;
}
void SessionState::clear_preedit() {
  if (preedit_ != nullptr) preedit_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void SessionState::clear_candidates() {
  if (candidates_ != nullptr) candidates_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void SessionState::clear_result() {
  if (result_ != nullptr) result_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void SessionState::clear_request() {
  if (request_ != nullptr) request_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
SessionState::SessionState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:mozc.protocol.SessionState)
}
SessionState::SessionState(const SessionState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_preedit()) {
    preedit_ = new ::mozc::commands::Preedit(*from.preedit_);
  } else {
    preedit_ = nullptr;
  }
  if (from._internal_has_candidates()) {
    candidates_ = new ::mozc::commands::Candidates(*from.candidates_);
  } else {
    candidates_ = nullptr;
  }
  if (from._internal_has_result()) {
    result_ = new ::mozc::commands::Result(*from.result_);
  } else {
    result_ = nullptr;
  }
  if (from._internal_has_request()) {
    request_ = new ::mozc::commands::Request(*from.request_);
  } else {
    request_ = nullptr;
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&input_field_type_) -
    reinterpret_cast<char*>(&id_)) + sizeof(input_field_type_));
  // @@protoc_insertion_point(copy_constructor:mozc.protocol.SessionState)
}

void SessionState::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SessionState_protocol_2fstate_2eproto.base);
  ::memset(&preedit_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&committed_) -
      reinterpret_cast<char*>(&preedit_)) + sizeof(committed_));
  input_field_type_ = 1;
}

SessionState::~SessionState() {
  // @@protoc_insertion_point(destructor:mozc.protocol.SessionState)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SessionState::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete preedit_;
  if (this != internal_default_instance()) delete candidates_;
  if (this != internal_default_instance()) delete result_;
  if (this != internal_default_instance()) delete request_;
}

void SessionState::ArenaDtor(void* object) {
  SessionState* _this = reinterpret_cast< SessionState* >(object);
  (void)_this;
}
void SessionState::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SessionState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SessionState& SessionState::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SessionState_protocol_2fstate_2eproto.base);
  return *internal_default_instance();
}


void SessionState::Clear() {
// @@protoc_insertion_point(message_clear_start:mozc.protocol.SessionState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(preedit_ != nullptr);
      preedit_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(candidates_ != nullptr);
      candidates_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(result_ != nullptr);
      result_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(request_ != nullptr);
      request_->Clear();
    }
  }
  if (cached_has_bits & 0x000000f0u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&start_conversion_window_time_) -
        reinterpret_cast<char*>(&id_)) + sizeof(start_conversion_window_time_));
  }
  if (cached_has_bits & 0x00001f00u) {
    ::memset(&start_prediction_window_time_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&committed_) -
        reinterpret_cast<char*>(&start_prediction_window_time_)) + sizeof(committed_));
    input_field_type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionState::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint64 id = 1 [jstype = JS_STRING];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 created_time = 2 [jstype = JS_STRING];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_created_time(&has_bits);
          created_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool committed = 3 [default = false];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_committed(&has_bits);
          committed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 start_preedit_time = 10 [jstype = JS_STRING];
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          _Internal::set_has_start_preedit_time(&has_bits);
          start_preedit_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 start_conversion_window_time = 11 [jstype = JS_STRING];
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          _Internal::set_has_start_conversion_window_time(&has_bits);
          start_conversion_window_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 start_prediction_window_time = 12 [jstype = JS_STRING];
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          _Internal::set_has_start_prediction_window_time(&has_bits);
          start_prediction_window_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 start_suggestion_window_time = 13 [jstype = JS_STRING];
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 104)) {
          _Internal::set_has_start_suggestion_window_time(&has_bits);
          start_suggestion_window_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 start_infolist_window_time = 14 [jstype = JS_STRING];
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 112)) {
          _Internal::set_has_start_infolist_window_time(&has_bits);
          start_infolist_window_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .mozc.commands.Preedit preedit = 20;
      case 20:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 162)) {
          ptr = ctx->ParseMessage(_internal_mutable_preedit(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .mozc.commands.Candidates candidates = 21;
      case 21:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 170)) {
          ptr = ctx->ParseMessage(_internal_mutable_candidates(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .mozc.commands.Result result = 23;
      case 23:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 186)) {
          ptr = ctx->ParseMessage(_internal_mutable_result(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .mozc.commands.Request request = 24;
      case 24:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 194)) {
          ptr = ctx->ParseMessage(_internal_mutable_request(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .mozc.commands.Context.InputFieldType input_field_type = 25;
      case 25:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 200)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::mozc::commands::Context_InputFieldType_IsValid(val))) {
            _internal_set_input_field_type(static_cast<::mozc::commands::Context_InputFieldType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(25, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SessionState::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mozc.protocol.SessionState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint64 id = 1 [jstype = JS_STRING];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_id(), target);
  }

  // optional uint64 created_time = 2 [jstype = JS_STRING];
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_created_time(), target);
  }

  // optional bool committed = 3 [default = false];
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_committed(), target);
  }

  // optional uint64 start_preedit_time = 10 [jstype = JS_STRING];
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(10, this->_internal_start_preedit_time(), target);
  }

  // optional uint64 start_conversion_window_time = 11 [jstype = JS_STRING];
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(11, this->_internal_start_conversion_window_time(), target);
  }

  // optional uint64 start_prediction_window_time = 12 [jstype = JS_STRING];
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(12, this->_internal_start_prediction_window_time(), target);
  }

  // optional uint64 start_suggestion_window_time = 13 [jstype = JS_STRING];
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(13, this->_internal_start_suggestion_window_time(), target);
  }

  // optional uint64 start_infolist_window_time = 14 [jstype = JS_STRING];
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(14, this->_internal_start_infolist_window_time(), target);
  }

  // optional .mozc.commands.Preedit preedit = 20;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        20, _Internal::preedit(this), target, stream);
  }

  // optional .mozc.commands.Candidates candidates = 21;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        21, _Internal::candidates(this), target, stream);
  }

  // optional .mozc.commands.Result result = 23;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        23, _Internal::result(this), target, stream);
  }

  // optional .mozc.commands.Request request = 24;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        24, _Internal::request(this), target, stream);
  }

  // optional .mozc.commands.Context.InputFieldType input_field_type = 25;
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      25, this->_internal_input_field_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mozc.protocol.SessionState)
  return target;
}

size_t SessionState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mozc.protocol.SessionState)
  size_t total_size = 0;

  // required uint64 id = 1 [jstype = JS_STRING];
  if (_internal_has_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_id());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional .mozc.commands.Preedit preedit = 20;
    if (cached_has_bits & 0x00000001u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *preedit_);
    }

    // optional .mozc.commands.Candidates candidates = 21;
    if (cached_has_bits & 0x00000002u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *candidates_);
    }

    // optional .mozc.commands.Result result = 23;
    if (cached_has_bits & 0x00000004u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *result_);
    }

    // optional .mozc.commands.Request request = 24;
    if (cached_has_bits & 0x00000008u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *request_);
    }

  }
  if (cached_has_bits & 0x000000e0u) {
    // optional uint64 created_time = 2 [jstype = JS_STRING];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_created_time());
    }

    // optional uint64 start_preedit_time = 10 [jstype = JS_STRING];
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_start_preedit_time());
    }

    // optional uint64 start_conversion_window_time = 11 [jstype = JS_STRING];
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_start_conversion_window_time());
    }

  }
  if (cached_has_bits & 0x00001f00u) {
    // optional uint64 start_prediction_window_time = 12 [jstype = JS_STRING];
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_start_prediction_window_time());
    }

    // optional uint64 start_suggestion_window_time = 13 [jstype = JS_STRING];
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_start_suggestion_window_time());
    }

    // optional uint64 start_infolist_window_time = 14 [jstype = JS_STRING];
    if (cached_has_bits & 0x00000400u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_start_infolist_window_time());
    }

    // optional bool committed = 3 [default = false];
    if (cached_has_bits & 0x00000800u) {
      total_size += 1 + 1;
    }

    // optional .mozc.commands.Context.InputFieldType input_field_type = 25;
    if (cached_has_bits & 0x00001000u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_input_field_type());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SessionState::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mozc.protocol.SessionState)
  GOOGLE_DCHECK_NE(&from, this);
  const SessionState* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SessionState>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mozc.protocol.SessionState)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mozc.protocol.SessionState)
    MergeFrom(*source);
  }
}

void SessionState::MergeFrom(const SessionState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mozc.protocol.SessionState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_preedit()->::mozc::commands::Preedit::MergeFrom(from._internal_preedit());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_candidates()->::mozc::commands::Candidates::MergeFrom(from._internal_candidates());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_result()->::mozc::commands::Result::MergeFrom(from._internal_result());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_request()->::mozc::commands::Request::MergeFrom(from._internal_request());
    }
    if (cached_has_bits & 0x00000010u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000020u) {
      created_time_ = from.created_time_;
    }
    if (cached_has_bits & 0x00000040u) {
      start_preedit_time_ = from.start_preedit_time_;
    }
    if (cached_has_bits & 0x00000080u) {
      start_conversion_window_time_ = from.start_conversion_window_time_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00001f00u) {
    if (cached_has_bits & 0x00000100u) {
      start_prediction_window_time_ = from.start_prediction_window_time_;
    }
    if (cached_has_bits & 0x00000200u) {
      start_suggestion_window_time_ = from.start_suggestion_window_time_;
    }
    if (cached_has_bits & 0x00000400u) {
      start_infolist_window_time_ = from.start_infolist_window_time_;
    }
    if (cached_has_bits & 0x00000800u) {
      committed_ = from.committed_;
    }
    if (cached_has_bits & 0x00001000u) {
      input_field_type_ = from.input_field_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SessionState::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mozc.protocol.SessionState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SessionState::CopyFrom(const SessionState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mozc.protocol.SessionState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionState::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_preedit()) {
    if (!preedit_->IsInitialized()) return false;
  }
  if (_internal_has_candidates()) {
    if (!candidates_->IsInitialized()) return false;
  }
  if (_internal_has_result()) {
    if (!result_->IsInitialized()) return false;
  }
  return true;
}

void SessionState::InternalSwap(SessionState* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SessionState, committed_)
      + sizeof(SessionState::committed_)
      - PROTOBUF_FIELD_OFFSET(SessionState, preedit_)>(
          reinterpret_cast<char*>(&preedit_),
          reinterpret_cast<char*>(&other->preedit_));
  swap(input_field_type_, other->input_field_type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionState::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
}  // namespace mozc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mozc::protocol::SessionState* Arena::CreateMaybeMessage< ::mozc::protocol::SessionState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mozc::protocol::SessionState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>