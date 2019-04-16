// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdr.proto

#include "sdr.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace protobrain {
class SparseDistributedRepresentationDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SparseDistributedRepresentation> _instance;
} _SparseDistributedRepresentation_default_instance_;
}  // namespace protobrain
static void InitDefaultsSparseDistributedRepresentation_sdr_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protobrain::_SparseDistributedRepresentation_default_instance_;
    new (ptr) ::protobrain::SparseDistributedRepresentation();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobrain::SparseDistributedRepresentation::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SparseDistributedRepresentation_sdr_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSparseDistributedRepresentation_sdr_2eproto}, {}};

void InitDefaults_sdr_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_SparseDistributedRepresentation_sdr_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_sdr_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_sdr_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_sdr_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_sdr_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::protobrain::SparseDistributedRepresentation, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protobrain::SparseDistributedRepresentation, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protobrain::SparseDistributedRepresentation, shape_),
  PROTOBUF_FIELD_OFFSET(::protobrain::SparseDistributedRepresentation, on_bits_),
  ~0u,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::protobrain::SparseDistributedRepresentation)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::protobrain::_SparseDistributedRepresentation_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_sdr_2eproto = {
  {}, AddDescriptors_sdr_2eproto, "sdr.proto", schemas,
  file_default_instances, TableStruct_sdr_2eproto::offsets,
  file_level_metadata_sdr_2eproto, 1, file_level_enum_descriptors_sdr_2eproto, file_level_service_descriptors_sdr_2eproto,
};

const char descriptor_table_protodef_sdr_2eproto[] =
  "\n\tsdr.proto\022\nprotobrain\"A\n\037SparseDistrib"
  "utedRepresentation\022\r\n\005shape\030\001 \003(\005\022\017\n\007on_"
  "bits\030\002 \003(\005"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_sdr_2eproto = {
  false, InitDefaults_sdr_2eproto, 
  descriptor_table_protodef_sdr_2eproto,
  "sdr.proto", &assign_descriptors_table_sdr_2eproto, 90,
};

void AddDescriptors_sdr_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_sdr_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_sdr_2eproto = []() { AddDescriptors_sdr_2eproto(); return true; }();
namespace protobrain {

// ===================================================================

void SparseDistributedRepresentation::InitAsDefaultInstance() {
}
class SparseDistributedRepresentation::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SparseDistributedRepresentation::kShapeFieldNumber;
const int SparseDistributedRepresentation::kOnBitsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SparseDistributedRepresentation::SparseDistributedRepresentation()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobrain.SparseDistributedRepresentation)
}
SparseDistributedRepresentation::SparseDistributedRepresentation(const SparseDistributedRepresentation& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      shape_(from.shape_),
      on_bits_(from.on_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:protobrain.SparseDistributedRepresentation)
}

void SparseDistributedRepresentation::SharedCtor() {
}

SparseDistributedRepresentation::~SparseDistributedRepresentation() {
  // @@protoc_insertion_point(destructor:protobrain.SparseDistributedRepresentation)
  SharedDtor();
}

void SparseDistributedRepresentation::SharedDtor() {
}

void SparseDistributedRepresentation::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SparseDistributedRepresentation& SparseDistributedRepresentation::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_SparseDistributedRepresentation_sdr_2eproto.base);
  return *internal_default_instance();
}


void SparseDistributedRepresentation::Clear() {
// @@protoc_insertion_point(message_clear_start:protobrain.SparseDistributedRepresentation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  shape_.Clear();
  on_bits_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* SparseDistributedRepresentation::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<SparseDistributedRepresentation*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // repeated int32 shape = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) == 8) {
          do {
            msg->add_shape(::google::protobuf::internal::ReadVarint(&ptr));
            GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
            if (ptr >= end) break;
          } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 8 && (ptr += 1));
          break;
        } else if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::protobuf::internal::PackedInt32Parser;
        object = msg->mutable_shape();
        if (size > end - ptr) goto len_delim_till_end;
        auto newend = ptr + size;
        if (size) ptr = parser_till_end(ptr, newend, object, ctx);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr == newend);
        break;
      }
      // repeated int32 on_bits = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) == 16) {
          do {
            msg->add_on_bits(::google::protobuf::internal::ReadVarint(&ptr));
            GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
            if (ptr >= end) break;
          } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 16 && (ptr += 1));
          break;
        } else if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::protobuf::internal::PackedInt32Parser;
        object = msg->mutable_on_bits();
        if (size > end - ptr) goto len_delim_till_end;
        auto newend = ptr + size;
        if (size) ptr = parser_till_end(ptr, newend, object, ctx);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr == newend);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool SparseDistributedRepresentation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobrain.SparseDistributedRepresentation)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 shape = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8u, input, this->mutable_shape())));
        } else if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_shape())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 on_bits = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 16u, input, this->mutable_on_bits())));
        } else if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_on_bits())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobrain.SparseDistributedRepresentation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobrain.SparseDistributedRepresentation)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void SparseDistributedRepresentation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobrain.SparseDistributedRepresentation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 shape = 1;
  for (int i = 0, n = this->shape_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->shape(i), output);
  }

  // repeated int32 on_bits = 2;
  for (int i = 0, n = this->on_bits_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      2, this->on_bits(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobrain.SparseDistributedRepresentation)
}

::google::protobuf::uint8* SparseDistributedRepresentation::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobrain.SparseDistributedRepresentation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 shape = 1;
  target = ::google::protobuf::internal::WireFormatLite::
    WriteInt32ToArray(1, this->shape_, target);

  // repeated int32 on_bits = 2;
  target = ::google::protobuf::internal::WireFormatLite::
    WriteInt32ToArray(2, this->on_bits_, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobrain.SparseDistributedRepresentation)
  return target;
}

size_t SparseDistributedRepresentation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobrain.SparseDistributedRepresentation)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 shape = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->shape_);
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->shape_size());
    total_size += data_size;
  }

  // repeated int32 on_bits = 2;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->on_bits_);
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->on_bits_size());
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SparseDistributedRepresentation::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobrain.SparseDistributedRepresentation)
  GOOGLE_DCHECK_NE(&from, this);
  const SparseDistributedRepresentation* source =
      ::google::protobuf::DynamicCastToGenerated<SparseDistributedRepresentation>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobrain.SparseDistributedRepresentation)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobrain.SparseDistributedRepresentation)
    MergeFrom(*source);
  }
}

void SparseDistributedRepresentation::MergeFrom(const SparseDistributedRepresentation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobrain.SparseDistributedRepresentation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  shape_.MergeFrom(from.shape_);
  on_bits_.MergeFrom(from.on_bits_);
}

void SparseDistributedRepresentation::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobrain.SparseDistributedRepresentation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SparseDistributedRepresentation::CopyFrom(const SparseDistributedRepresentation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobrain.SparseDistributedRepresentation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SparseDistributedRepresentation::IsInitialized() const {
  return true;
}

void SparseDistributedRepresentation::Swap(SparseDistributedRepresentation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SparseDistributedRepresentation::InternalSwap(SparseDistributedRepresentation* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  shape_.InternalSwap(&other->shape_);
  on_bits_.InternalSwap(&other->on_bits_);
}

::google::protobuf::Metadata SparseDistributedRepresentation::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_sdr_2eproto);
  return ::file_level_metadata_sdr_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobrain
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::protobrain::SparseDistributedRepresentation* Arena::CreateMaybeMessage< ::protobrain::SparseDistributedRepresentation >(Arena* arena) {
  return Arena::CreateInternal< ::protobrain::SparseDistributedRepresentation >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
