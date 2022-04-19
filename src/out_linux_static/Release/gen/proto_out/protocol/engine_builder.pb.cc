// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/engine_builder.proto

#include "protocol/engine_builder.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_protocol_2fengine_5fbuilder_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EngineReloadRequest_protocol_2fengine_5fbuilder_2eproto;
namespace mozc {
class EngineReloadRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EngineReloadRequest> _instance;
} _EngineReloadRequest_default_instance_;
class EngineReloadResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EngineReloadResponse> _instance;
} _EngineReloadResponse_default_instance_;
}  // namespace mozc
static void InitDefaultsscc_info_EngineReloadRequest_protocol_2fengine_5fbuilder_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mozc::_EngineReloadRequest_default_instance_;
    new (ptr) ::mozc::EngineReloadRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mozc::EngineReloadRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EngineReloadRequest_protocol_2fengine_5fbuilder_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_EngineReloadRequest_protocol_2fengine_5fbuilder_2eproto}, {}};

static void InitDefaultsscc_info_EngineReloadResponse_protocol_2fengine_5fbuilder_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mozc::_EngineReloadResponse_default_instance_;
    new (ptr) ::mozc::EngineReloadResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mozc::EngineReloadResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_EngineReloadResponse_protocol_2fengine_5fbuilder_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_EngineReloadResponse_protocol_2fengine_5fbuilder_2eproto}, {
      &scc_info_EngineReloadRequest_protocol_2fengine_5fbuilder_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protocol_2fengine_5fbuilder_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_protocol_2fengine_5fbuilder_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protocol_2fengine_5fbuilder_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protocol_2fengine_5fbuilder_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadRequest, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadRequest, engine_type_),
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadRequest, file_path_),
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadRequest, install_location_),
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadRequest, magic_number_),
  3,
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadResponse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadResponse, status_),
  PROTOBUF_FIELD_OFFSET(::mozc::EngineReloadResponse, request_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::mozc::EngineReloadRequest)},
  { 13, 20, sizeof(::mozc::EngineReloadResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mozc::_EngineReloadRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mozc::_EngineReloadResponse_default_instance_),
};

const char descriptor_table_protodef_protocol_2fengine_5fbuilder_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035protocol/engine_builder.proto\022\004mozc\"\272\001"
  "\n\023EngineReloadRequest\0229\n\013engine_type\030\001 \002"
  "(\0162$.mozc.EngineReloadRequest.EngineType"
  "\022\021\n\tfile_path\030\002 \002(\t\022\030\n\020install_location\030"
  "\003 \001(\t\022\024\n\014magic_number\030\004 \001(\t\"%\n\nEngineTyp"
  "e\022\013\n\007DESKTOP\020\000\022\n\n\006MOBILE\020\001\"\275\002\n\024EngineRel"
  "oadResponse\0221\n\006status\030\001 \002(\0162!.mozc.Engin"
  "eReloadResponse.Status\022*\n\007request\030\002 \001(\0132"
  "\031.mozc.EngineReloadRequest\"\305\001\n\006Status\022\014\n"
  "\010ACCEPTED\020\000\022\020\n\014RELOAD_READY\020\001\022\014\n\010RELOADE"
  "D\020\002\022\023\n\017ALREADY_RUNNING\020\003\022\033\n\027ENGINE_VERSI"
  "ON_MISMATCH\020\004\022\020\n\014DATA_MISSING\020\005\022\017\n\013DATA_"
  "BROKEN\020\006\022\020\n\014MMAP_FAILURE\020\007\022\023\n\017INSTALL_FA"
  "ILURE\020\010\022\021\n\rUNKNOWN_ERROR\020\tBD\n.org.mozc.a"
  "ndroid.inputmethod.japanese.protobufB\022Pr"
  "otoEngineBuilder"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protocol_2fengine_5fbuilder_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_protocol_2fengine_5fbuilder_2eproto_sccs[2] = {
  &scc_info_EngineReloadRequest_protocol_2fengine_5fbuilder_2eproto.base,
  &scc_info_EngineReloadResponse_protocol_2fengine_5fbuilder_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protocol_2fengine_5fbuilder_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protocol_2fengine_5fbuilder_2eproto = {
  false, false, descriptor_table_protodef_protocol_2fengine_5fbuilder_2eproto, "protocol/engine_builder.proto", 616,
  &descriptor_table_protocol_2fengine_5fbuilder_2eproto_once, descriptor_table_protocol_2fengine_5fbuilder_2eproto_sccs, descriptor_table_protocol_2fengine_5fbuilder_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_protocol_2fengine_5fbuilder_2eproto::offsets,
  file_level_metadata_protocol_2fengine_5fbuilder_2eproto, 2, file_level_enum_descriptors_protocol_2fengine_5fbuilder_2eproto, file_level_service_descriptors_protocol_2fengine_5fbuilder_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_protocol_2fengine_5fbuilder_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_protocol_2fengine_5fbuilder_2eproto)), true);
namespace mozc {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EngineReloadRequest_EngineType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protocol_2fengine_5fbuilder_2eproto);
  return file_level_enum_descriptors_protocol_2fengine_5fbuilder_2eproto[0];
}
bool EngineReloadRequest_EngineType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr EngineReloadRequest_EngineType EngineReloadRequest::DESKTOP;
constexpr EngineReloadRequest_EngineType EngineReloadRequest::MOBILE;
constexpr EngineReloadRequest_EngineType EngineReloadRequest::EngineType_MIN;
constexpr EngineReloadRequest_EngineType EngineReloadRequest::EngineType_MAX;
constexpr int EngineReloadRequest::EngineType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EngineReloadResponse_Status_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protocol_2fengine_5fbuilder_2eproto);
  return file_level_enum_descriptors_protocol_2fengine_5fbuilder_2eproto[1];
}
bool EngineReloadResponse_Status_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr EngineReloadResponse_Status EngineReloadResponse::ACCEPTED;
constexpr EngineReloadResponse_Status EngineReloadResponse::RELOAD_READY;
constexpr EngineReloadResponse_Status EngineReloadResponse::RELOADED;
constexpr EngineReloadResponse_Status EngineReloadResponse::ALREADY_RUNNING;
constexpr EngineReloadResponse_Status EngineReloadResponse::ENGINE_VERSION_MISMATCH;
constexpr EngineReloadResponse_Status EngineReloadResponse::DATA_MISSING;
constexpr EngineReloadResponse_Status EngineReloadResponse::DATA_BROKEN;
constexpr EngineReloadResponse_Status EngineReloadResponse::MMAP_FAILURE;
constexpr EngineReloadResponse_Status EngineReloadResponse::INSTALL_FAILURE;
constexpr EngineReloadResponse_Status EngineReloadResponse::UNKNOWN_ERROR;
constexpr EngineReloadResponse_Status EngineReloadResponse::Status_MIN;
constexpr EngineReloadResponse_Status EngineReloadResponse::Status_MAX;
constexpr int EngineReloadResponse::Status_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void EngineReloadRequest::InitAsDefaultInstance() {
}
class EngineReloadRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<EngineReloadRequest>()._has_bits_);
  static void set_has_engine_type(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_file_path(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_install_location(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_magic_number(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000009) ^ 0x00000009) != 0;
  }
};

EngineReloadRequest::EngineReloadRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:mozc.EngineReloadRequest)
}
EngineReloadRequest::EngineReloadRequest(const EngineReloadRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  file_path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_file_path()) {
    file_path_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_file_path(),
      GetArena());
  }
  install_location_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_install_location()) {
    install_location_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_install_location(),
      GetArena());
  }
  magic_number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_magic_number()) {
    magic_number_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_magic_number(),
      GetArena());
  }
  engine_type_ = from.engine_type_;
  // @@protoc_insertion_point(copy_constructor:mozc.EngineReloadRequest)
}

void EngineReloadRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EngineReloadRequest_protocol_2fengine_5fbuilder_2eproto.base);
  file_path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  install_location_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  magic_number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  engine_type_ = 0;
}

EngineReloadRequest::~EngineReloadRequest() {
  // @@protoc_insertion_point(destructor:mozc.EngineReloadRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void EngineReloadRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  file_path_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  install_location_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  magic_number_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EngineReloadRequest::ArenaDtor(void* object) {
  EngineReloadRequest* _this = reinterpret_cast< EngineReloadRequest* >(object);
  (void)_this;
}
void EngineReloadRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void EngineReloadRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EngineReloadRequest& EngineReloadRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EngineReloadRequest_protocol_2fengine_5fbuilder_2eproto.base);
  return *internal_default_instance();
}


void EngineReloadRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:mozc.EngineReloadRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      file_path_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      install_location_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      magic_number_.ClearNonDefaultToEmpty();
    }
  }
  engine_type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EngineReloadRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .mozc.EngineReloadRequest.EngineType engine_type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::mozc::EngineReloadRequest_EngineType_IsValid(val))) {
            _internal_set_engine_type(static_cast<::mozc::EngineReloadRequest_EngineType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // required string file_path = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_file_path();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mozc.EngineReloadRequest.file_path");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string install_location = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_install_location();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mozc.EngineReloadRequest.install_location");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string magic_number = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_magic_number();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mozc.EngineReloadRequest.magic_number");
          #endif  // !NDEBUG
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* EngineReloadRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mozc.EngineReloadRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .mozc.EngineReloadRequest.EngineType engine_type = 1;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_engine_type(), target);
  }

  // required string file_path = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_file_path().data(), static_cast<int>(this->_internal_file_path().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mozc.EngineReloadRequest.file_path");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_file_path(), target);
  }

  // optional string install_location = 3;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_install_location().data(), static_cast<int>(this->_internal_install_location().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mozc.EngineReloadRequest.install_location");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_install_location(), target);
  }

  // optional string magic_number = 4;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_magic_number().data(), static_cast<int>(this->_internal_magic_number().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mozc.EngineReloadRequest.magic_number");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_magic_number(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mozc.EngineReloadRequest)
  return target;
}

size_t EngineReloadRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mozc.EngineReloadRequest)
  size_t total_size = 0;

  if (_internal_has_file_path()) {
    // required string file_path = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_file_path());
  }

  if (_internal_has_engine_type()) {
    // required .mozc.EngineReloadRequest.EngineType engine_type = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_engine_type());
  }

  return total_size;
}
size_t EngineReloadRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mozc.EngineReloadRequest)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000009) ^ 0x00000009) == 0) {  // All required fields are present.
    // required string file_path = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_file_path());

    // required .mozc.EngineReloadRequest.EngineType engine_type = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_engine_type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000006u) {
    // optional string install_location = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_install_location());
    }

    // optional string magic_number = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_magic_number());
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

void EngineReloadRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mozc.EngineReloadRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const EngineReloadRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EngineReloadRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mozc.EngineReloadRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mozc.EngineReloadRequest)
    MergeFrom(*source);
  }
}

void EngineReloadRequest::MergeFrom(const EngineReloadRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mozc.EngineReloadRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_file_path(from._internal_file_path());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_install_location(from._internal_install_location());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_magic_number(from._internal_magic_number());
    }
    if (cached_has_bits & 0x00000008u) {
      engine_type_ = from.engine_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void EngineReloadRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mozc.EngineReloadRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EngineReloadRequest::CopyFrom(const EngineReloadRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mozc.EngineReloadRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EngineReloadRequest::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void EngineReloadRequest::InternalSwap(EngineReloadRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  file_path_.Swap(&other->file_path_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  install_location_.Swap(&other->install_location_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  magic_number_.Swap(&other->magic_number_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(engine_type_, other->engine_type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata EngineReloadRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void EngineReloadResponse::InitAsDefaultInstance() {
  ::mozc::_EngineReloadResponse_default_instance_._instance.get_mutable()->request_ = const_cast< ::mozc::EngineReloadRequest*>(
      ::mozc::EngineReloadRequest::internal_default_instance());
}
class EngineReloadResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<EngineReloadResponse>()._has_bits_);
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::mozc::EngineReloadRequest& request(const EngineReloadResponse* msg);
  static void set_has_request(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000002) ^ 0x00000002) != 0;
  }
};

const ::mozc::EngineReloadRequest&
EngineReloadResponse::_Internal::request(const EngineReloadResponse* msg) {
  return *msg->request_;
}
EngineReloadResponse::EngineReloadResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:mozc.EngineReloadResponse)
}
EngineReloadResponse::EngineReloadResponse(const EngineReloadResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_request()) {
    request_ = new ::mozc::EngineReloadRequest(*from.request_);
  } else {
    request_ = nullptr;
  }
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:mozc.EngineReloadResponse)
}

void EngineReloadResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EngineReloadResponse_protocol_2fengine_5fbuilder_2eproto.base);
  ::memset(&request_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&status_) -
      reinterpret_cast<char*>(&request_)) + sizeof(status_));
}

EngineReloadResponse::~EngineReloadResponse() {
  // @@protoc_insertion_point(destructor:mozc.EngineReloadResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void EngineReloadResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete request_;
}

void EngineReloadResponse::ArenaDtor(void* object) {
  EngineReloadResponse* _this = reinterpret_cast< EngineReloadResponse* >(object);
  (void)_this;
}
void EngineReloadResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void EngineReloadResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EngineReloadResponse& EngineReloadResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EngineReloadResponse_protocol_2fengine_5fbuilder_2eproto.base);
  return *internal_default_instance();
}


void EngineReloadResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:mozc.EngineReloadResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(request_ != nullptr);
    request_->Clear();
  }
  status_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EngineReloadResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .mozc.EngineReloadResponse.Status status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::mozc::EngineReloadResponse_Status_IsValid(val))) {
            _internal_set_status(static_cast<::mozc::EngineReloadResponse_Status>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional .mozc.EngineReloadRequest request = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_request(), ptr);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* EngineReloadResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mozc.EngineReloadResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .mozc.EngineReloadResponse.Status status = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_status(), target);
  }

  // optional .mozc.EngineReloadRequest request = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::request(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mozc.EngineReloadResponse)
  return target;
}

size_t EngineReloadResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mozc.EngineReloadResponse)
  size_t total_size = 0;

  // required .mozc.EngineReloadResponse.Status status = 1;
  if (_internal_has_status()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_status());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .mozc.EngineReloadRequest request = 2;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *request_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EngineReloadResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mozc.EngineReloadResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const EngineReloadResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EngineReloadResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mozc.EngineReloadResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mozc.EngineReloadResponse)
    MergeFrom(*source);
  }
}

void EngineReloadResponse::MergeFrom(const EngineReloadResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mozc.EngineReloadResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_request()->::mozc::EngineReloadRequest::MergeFrom(from._internal_request());
    }
    if (cached_has_bits & 0x00000002u) {
      status_ = from.status_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void EngineReloadResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mozc.EngineReloadResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EngineReloadResponse::CopyFrom(const EngineReloadResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mozc.EngineReloadResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EngineReloadResponse::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_request()) {
    if (!request_->IsInitialized()) return false;
  }
  return true;
}

void EngineReloadResponse::InternalSwap(EngineReloadResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(EngineReloadResponse, status_)
      + sizeof(EngineReloadResponse::status_)
      - PROTOBUF_FIELD_OFFSET(EngineReloadResponse, request_)>(
          reinterpret_cast<char*>(&request_),
          reinterpret_cast<char*>(&other->request_));
}

::PROTOBUF_NAMESPACE_ID::Metadata EngineReloadResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mozc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mozc::EngineReloadRequest* Arena::CreateMaybeMessage< ::mozc::EngineReloadRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mozc::EngineReloadRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::mozc::EngineReloadResponse* Arena::CreateMaybeMessage< ::mozc::EngineReloadResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mozc::EngineReloadResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>