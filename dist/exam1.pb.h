// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: exam1.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_exam1_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_exam1_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_exam1_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_exam1_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_exam1_2eproto;
class Groups;
struct GroupsDefaultTypeInternal;
extern GroupsDefaultTypeInternal _Groups_default_instance_;
class Member;
struct MemberDefaultTypeInternal;
extern MemberDefaultTypeInternal _Member_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Groups* Arena::CreateMaybeMessage<::Groups>(Arena*);
template<> ::Member* Arena::CreateMaybeMessage<::Member>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum Member_MemberType : int {
  Member_MemberType_MOBILE = 0,
  Member_MemberType_HOME = 1,
  Member_MemberType_WORK = 2,
  Member_MemberType_Member_MemberType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Member_MemberType_Member_MemberType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Member_MemberType_IsValid(int value);
constexpr Member_MemberType Member_MemberType_MemberType_MIN = Member_MemberType_MOBILE;
constexpr Member_MemberType Member_MemberType_MemberType_MAX = Member_MemberType_WORK;
constexpr int Member_MemberType_MemberType_ARRAYSIZE = Member_MemberType_MemberType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Member_MemberType_descriptor();
template<typename T>
inline const std::string& Member_MemberType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Member_MemberType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Member_MemberType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Member_MemberType_descriptor(), enum_t_value);
}
inline bool Member_MemberType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Member_MemberType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Member_MemberType>(
    Member_MemberType_descriptor(), name, value);
}
// ===================================================================

class Member final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Member) */ {
 public:
  inline Member() : Member(nullptr) {}
  ~Member() override;
  explicit PROTOBUF_CONSTEXPR Member(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Member(const Member& from);
  Member(Member&& from) noexcept
    : Member() {
    *this = ::std::move(from);
  }

  inline Member& operator=(const Member& from) {
    CopyFrom(from);
    return *this;
  }
  inline Member& operator=(Member&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Member& default_instance() {
    return *internal_default_instance();
  }
  static inline const Member* internal_default_instance() {
    return reinterpret_cast<const Member*>(
               &_Member_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Member& a, Member& b) {
    a.Swap(&b);
  }
  inline void Swap(Member* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Member* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Member* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Member>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Member& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Member& from) {
    Member::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Member* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Member";
  }
  protected:
  explicit Member(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Member_MemberType MemberType;
  static constexpr MemberType MOBILE =
    Member_MemberType_MOBILE;
  static constexpr MemberType HOME =
    Member_MemberType_HOME;
  static constexpr MemberType WORK =
    Member_MemberType_WORK;
  static inline bool MemberType_IsValid(int value) {
    return Member_MemberType_IsValid(value);
  }
  static constexpr MemberType MemberType_MIN =
    Member_MemberType_MemberType_MIN;
  static constexpr MemberType MemberType_MAX =
    Member_MemberType_MemberType_MAX;
  static constexpr int MemberType_ARRAYSIZE =
    Member_MemberType_MemberType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  MemberType_descriptor() {
    return Member_MemberType_descriptor();
  }
  template<typename T>
  static inline const std::string& MemberType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, MemberType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function MemberType_Name.");
    return Member_MemberType_Name(enum_t_value);
  }
  static inline bool MemberType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      MemberType* value) {
    return Member_MemberType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kEmailFieldNumber = 3,
    kIdFieldNumber = 2,
  };
  // optional string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional string email = 3;
  bool has_email() const;
  private:
  bool _internal_has_email() const;
  public:
  void clear_email();
  const std::string& email() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_email(ArgT0&& arg0, ArgT... args);
  std::string* mutable_email();
  PROTOBUF_NODISCARD std::string* release_email();
  void set_allocated_email(std::string* email);
  private:
  const std::string& _internal_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_email(const std::string& value);
  std::string* _internal_mutable_email();
  public:

  // optional int32 id = 2;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Member)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr email_;
    int32_t id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_exam1_2eproto;
};
// -------------------------------------------------------------------

class Groups final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Groups) */ {
 public:
  inline Groups() : Groups(nullptr) {}
  ~Groups() override;
  explicit PROTOBUF_CONSTEXPR Groups(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Groups(const Groups& from);
  Groups(Groups&& from) noexcept
    : Groups() {
    *this = ::std::move(from);
  }

  inline Groups& operator=(const Groups& from) {
    CopyFrom(from);
    return *this;
  }
  inline Groups& operator=(Groups&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Groups& default_instance() {
    return *internal_default_instance();
  }
  static inline const Groups* internal_default_instance() {
    return reinterpret_cast<const Groups*>(
               &_Groups_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Groups& a, Groups& b) {
    a.Swap(&b);
  }
  inline void Swap(Groups* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Groups* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Groups* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Groups>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Groups& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Groups& from) {
    Groups::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Groups* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Groups";
  }
  protected:
  explicit Groups(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMemberFieldNumber = 1,
  };
  // repeated .Member member = 1;
  int member_size() const;
  private:
  int _internal_member_size() const;
  public:
  void clear_member();
  ::Member* mutable_member(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Member >*
      mutable_member();
  private:
  const ::Member& _internal_member(int index) const;
  ::Member* _internal_add_member();
  public:
  const ::Member& member(int index) const;
  ::Member* add_member();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Member >&
      member() const;

  // @@protoc_insertion_point(class_scope:Groups)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Member > member_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_exam1_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Member

// optional string name = 1;
inline bool Member::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Member::has_name() const {
  return _internal_has_name();
}
inline void Member::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Member::name() const {
  // @@protoc_insertion_point(field_get:Member.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Member::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Member.name)
}
inline std::string* Member::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Member.name)
  return _s;
}
inline const std::string& Member::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Member::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Member::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Member::release_name() {
  // @@protoc_insertion_point(field_release:Member.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Member::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Member.name)
}

// optional int32 id = 2;
inline bool Member::_internal_has_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Member::has_id() const {
  return _internal_has_id();
}
inline void Member::clear_id() {
  _impl_.id_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline int32_t Member::_internal_id() const {
  return _impl_.id_;
}
inline int32_t Member::id() const {
  // @@protoc_insertion_point(field_get:Member.id)
  return _internal_id();
}
inline void Member::_internal_set_id(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.id_ = value;
}
inline void Member::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Member.id)
}

// optional string email = 3;
inline bool Member::_internal_has_email() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Member::has_email() const {
  return _internal_has_email();
}
inline void Member::clear_email() {
  _impl_.email_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Member::email() const {
  // @@protoc_insertion_point(field_get:Member.email)
  return _internal_email();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Member::set_email(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.email_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Member.email)
}
inline std::string* Member::mutable_email() {
  std::string* _s = _internal_mutable_email();
  // @@protoc_insertion_point(field_mutable:Member.email)
  return _s;
}
inline const std::string& Member::_internal_email() const {
  return _impl_.email_.Get();
}
inline void Member::_internal_set_email(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.email_.Set(value, GetArenaForAllocation());
}
inline std::string* Member::_internal_mutable_email() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.email_.Mutable(GetArenaForAllocation());
}
inline std::string* Member::release_email() {
  // @@protoc_insertion_point(field_release:Member.email)
  if (!_internal_has_email()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.email_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.email_.IsDefault()) {
    _impl_.email_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Member::set_allocated_email(std::string* email) {
  if (email != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.email_.SetAllocated(email, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.email_.IsDefault()) {
    _impl_.email_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Member.email)
}

// -------------------------------------------------------------------

// Groups

// repeated .Member member = 1;
inline int Groups::_internal_member_size() const {
  return _impl_.member_.size();
}
inline int Groups::member_size() const {
  return _internal_member_size();
}
inline void Groups::clear_member() {
  _impl_.member_.Clear();
}
inline ::Member* Groups::mutable_member(int index) {
  // @@protoc_insertion_point(field_mutable:Groups.member)
  return _impl_.member_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Member >*
Groups::mutable_member() {
  // @@protoc_insertion_point(field_mutable_list:Groups.member)
  return &_impl_.member_;
}
inline const ::Member& Groups::_internal_member(int index) const {
  return _impl_.member_.Get(index);
}
inline const ::Member& Groups::member(int index) const {
  // @@protoc_insertion_point(field_get:Groups.member)
  return _internal_member(index);
}
inline ::Member* Groups::_internal_add_member() {
  return _impl_.member_.Add();
}
inline ::Member* Groups::add_member() {
  ::Member* _add = _internal_add_member();
  // @@protoc_insertion_point(field_add:Groups.member)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Member >&
Groups::member() const {
  // @@protoc_insertion_point(field_list:Groups.member)
  return _impl_.member_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Member_MemberType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Member_MemberType>() {
  return ::Member_MemberType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_exam1_2eproto
