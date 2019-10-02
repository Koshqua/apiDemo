// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/any_test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fany_5ftest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fany_5ftest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fany_5ftest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2fany_5ftest_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto;
namespace protobuf_unittest {
class TestAny;
class TestAnyDefaultTypeInternal;
extern TestAnyDefaultTypeInternal _TestAny_default_instance_;
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> ::protobuf_unittest::TestAny* Arena::CreateMaybeMessage<::protobuf_unittest::TestAny>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protobuf_unittest {

// ===================================================================

class TestAny :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest.TestAny) */ {
 public:
  TestAny();
  virtual ~TestAny();

  TestAny(const TestAny& from);
  TestAny(TestAny&& from) noexcept
    : TestAny() {
    *this = ::std::move(from);
  }

  inline TestAny& operator=(const TestAny& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestAny& operator=(TestAny&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TestAny& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestAny* internal_default_instance() {
    return reinterpret_cast<const TestAny*>(
               &_TestAny_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestAny& a, TestAny& b) {
    a.Swap(&b);
  }
  inline void Swap(TestAny* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestAny* New() const final {
    return CreateMaybeMessage<TestAny>(nullptr);
  }

  TestAny* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestAny>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TestAny& from);
  void MergeFrom(const TestAny& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestAny* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protobuf_unittest.TestAny";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto);
    return ::descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRepeatedAnyValueFieldNumber = 3,
    kAnyValueFieldNumber = 2,
    kInt32ValueFieldNumber = 1,
  };
  // repeated .google.protobuf.Any repeated_any_value = 3;
  int repeated_any_value_size() const;
  void clear_repeated_any_value();
  PROTOBUF_NAMESPACE_ID::Any* mutable_repeated_any_value(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >*
      mutable_repeated_any_value();
  const PROTOBUF_NAMESPACE_ID::Any& repeated_any_value(int index) const;
  PROTOBUF_NAMESPACE_ID::Any* add_repeated_any_value();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >&
      repeated_any_value() const;

  // .google.protobuf.Any any_value = 2;
  bool has_any_value() const;
  void clear_any_value();
  const PROTOBUF_NAMESPACE_ID::Any& any_value() const;
  PROTOBUF_NAMESPACE_ID::Any* release_any_value();
  PROTOBUF_NAMESPACE_ID::Any* mutable_any_value();
  void set_allocated_any_value(PROTOBUF_NAMESPACE_ID::Any* any_value);

  // int32 int32_value = 1;
  void clear_int32_value();
  ::PROTOBUF_NAMESPACE_ID::int32 int32_value() const;
  void set_int32_value(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestAny)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any > repeated_any_value_;
  PROTOBUF_NAMESPACE_ID::Any* any_value_;
  ::PROTOBUF_NAMESPACE_ID::int32 int32_value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2fany_5ftest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestAny

// int32 int32_value = 1;
inline void TestAny::clear_int32_value() {
  int32_value_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TestAny::int32_value() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestAny.int32_value)
  return int32_value_;
}
inline void TestAny::set_int32_value(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:protobuf_unittest.TestAny.int32_value)
}

// .google.protobuf.Any any_value = 2;
inline bool TestAny::has_any_value() const {
  return this != internal_default_instance() && any_value_ != nullptr;
}
inline const PROTOBUF_NAMESPACE_ID::Any& TestAny::any_value() const {
  const PROTOBUF_NAMESPACE_ID::Any* p = any_value_;
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestAny.any_value)
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Any*>(
      &PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline PROTOBUF_NAMESPACE_ID::Any* TestAny::release_any_value() {
  // @@protoc_insertion_point(field_release:protobuf_unittest.TestAny.any_value)
  
  PROTOBUF_NAMESPACE_ID::Any* temp = any_value_;
  any_value_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* TestAny::mutable_any_value() {
  
  if (any_value_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Any>(GetArenaNoVirtual());
    any_value_ = p;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestAny.any_value)
  return any_value_;
}
inline void TestAny::set_allocated_any_value(PROTOBUF_NAMESPACE_ID::Any* any_value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(any_value_);
  }
  if (any_value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      any_value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, any_value, submessage_arena);
    }
    
  } else {
    
  }
  any_value_ = any_value;
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestAny.any_value)
}

// repeated .google.protobuf.Any repeated_any_value = 3;
inline int TestAny::repeated_any_value_size() const {
  return repeated_any_value_.size();
}
inline PROTOBUF_NAMESPACE_ID::Any* TestAny::mutable_repeated_any_value(int index) {
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestAny.repeated_any_value)
  return repeated_any_value_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >*
TestAny::mutable_repeated_any_value() {
  // @@protoc_insertion_point(field_mutable_list:protobuf_unittest.TestAny.repeated_any_value)
  return &repeated_any_value_;
}
inline const PROTOBUF_NAMESPACE_ID::Any& TestAny::repeated_any_value(int index) const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestAny.repeated_any_value)
  return repeated_any_value_.Get(index);
}
inline PROTOBUF_NAMESPACE_ID::Any* TestAny::add_repeated_any_value() {
  // @@protoc_insertion_point(field_add:protobuf_unittest.TestAny.repeated_any_value)
  return repeated_any_value_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >&
TestAny::repeated_any_value() const {
  // @@protoc_insertion_point(field_list:protobuf_unittest.TestAny.repeated_any_value)
  return repeated_any_value_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fany_5ftest_2eproto
