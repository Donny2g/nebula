// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: group_base.proto

#include "group_base.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace zproto {
class MemberDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Member>
      _instance;
} _Member_default_instance_;
class Group_ExtEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Group_ExtEntry_DoNotUse>
      _instance;
} _Group_ExtEntry_DoNotUse_default_instance_;
class GroupDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Group>
      _instance;
} _Group_default_instance_;
class GroupFull_ExtEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GroupFull_ExtEntry_DoNotUse>
      _instance;
} _GroupFull_ExtEntry_DoNotUse_default_instance_;
class GroupFullDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GroupFull>
      _instance;
} _GroupFull_default_instance_;
}  // namespace zproto
namespace protobuf_group_5fbase_2eproto {
void InitDefaultsMemberImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_Member_default_instance_;
    new (ptr) ::zproto::Member();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::Member::InitAsDefaultInstance();
}

void InitDefaultsMember() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMemberImpl);
}

void InitDefaultsGroup_ExtEntry_DoNotUseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_types_2eproto::InitDefaultsRawArrayValue();
  {
    void* ptr = &::zproto::_Group_ExtEntry_DoNotUse_default_instance_;
    new (ptr) ::zproto::Group_ExtEntry_DoNotUse();
  }
  ::zproto::Group_ExtEntry_DoNotUse::InitAsDefaultInstance();
}

void InitDefaultsGroup_ExtEntry_DoNotUse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGroup_ExtEntry_DoNotUseImpl);
}

void InitDefaultsGroupImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_files_2eproto::InitDefaultsAvatar();
  protobuf_group_5fbase_2eproto::InitDefaultsGroup_ExtEntry_DoNotUse();
  {
    void* ptr = &::zproto::_Group_default_instance_;
    new (ptr) ::zproto::Group();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::Group::InitAsDefaultInstance();
}

void InitDefaultsGroup() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGroupImpl);
}

void InitDefaultsGroupFull_ExtEntry_DoNotUseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_types_2eproto::InitDefaultsRawArrayValue();
  {
    void* ptr = &::zproto::_GroupFull_ExtEntry_DoNotUse_default_instance_;
    new (ptr) ::zproto::GroupFull_ExtEntry_DoNotUse();
  }
  ::zproto::GroupFull_ExtEntry_DoNotUse::InitAsDefaultInstance();
}

void InitDefaultsGroupFull_ExtEntry_DoNotUse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGroupFull_ExtEntry_DoNotUseImpl);
}

void InitDefaultsGroupFullImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_group_5fbase_2eproto::InitDefaultsMember();
  protobuf_group_5fbase_2eproto::InitDefaultsGroupFull_ExtEntry_DoNotUse();
  {
    void* ptr = &::zproto::_GroupFull_default_instance_;
    new (ptr) ::zproto::GroupFull();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::GroupFull::InitAsDefaultInstance();
}

void InitDefaultsGroupFull() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGroupFullImpl);
}

::google::protobuf::Metadata file_level_metadata[5];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Member, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Member, uid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Member, inviter_uid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Member, date_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Member, is_admin_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group_ExtEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group_ExtEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group_ExtEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group_ExtEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, access_hash_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, title_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, avatar_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, members_count_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, is_member_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, is_hidden_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, permissions_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, is_deleted_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Group, ext_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull_ExtEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull_ExtEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull_ExtEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull_ExtEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, create_date_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, owner_uid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, members_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, theme_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, about_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, ext_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, is_async_members_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, is_shared_history_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, short_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupFull, permissions_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::zproto::Member)},
  { 9, 16, sizeof(::zproto::Group_ExtEntry_DoNotUse)},
  { 18, -1, sizeof(::zproto::Group)},
  { 33, 40, sizeof(::zproto::GroupFull_ExtEntry_DoNotUse)},
  { 42, -1, sizeof(::zproto::GroupFull)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_Member_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_Group_ExtEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_Group_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_GroupFull_ExtEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_GroupFull_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "group_base.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 5);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\020group_base.proto\022\006zproto\032\013types.proto\032"
      "\013files.proto\"J\n\006Member\022\013\n\003uid\030\001 \001(\t\022\023\n\013i"
      "nviter_uid\030\002 \001(\t\022\014\n\004date\030\003 \001(\003\022\020\n\010is_adm"
      "in\030\004 \001(\010\"\245\002\n\005Group\022\n\n\002id\030\001 \001(\t\022\023\n\013access"
      "_hash\030\002 \001(\003\022\r\n\005title\030\003 \001(\t\022\036\n\006avatar\030\004 \001"
      "(\0132\016.zproto.Avatar\022\025\n\rmembers_count\030\005 \001("
      "\005\022\021\n\tis_member\030\006 \001(\010\022\021\n\tis_hidden\030\007 \001(\010\022"
      "\023\n\013permissions\030\010 \001(\003\022\022\n\nis_deleted\030\t \001(\010"
      "\022#\n\003ext\030\n \003(\0132\026.zproto.Group.ExtEntry\032A\n"
      "\010ExtEntry\022\013\n\003key\030\001 \001(\t\022$\n\005value\030\002 \001(\0132\025."
      "zproto.RawArrayValue:\0028\001\"\310\002\n\tGroupFull\022\n"
      "\n\002id\030\001 \001(\t\022\023\n\013create_date\030\002 \001(\003\022\021\n\towner"
      "_uid\030\003 \001(\t\022\037\n\007members\030\004 \003(\0132\016.zproto.Mem"
      "ber\022\r\n\005theme\030\005 \001(\t\022\r\n\005about\030\006 \001(\t\022\'\n\003ext"
      "\030\007 \003(\0132\032.zproto.GroupFull.ExtEntry\022\030\n\020is"
      "_async_members\030\010 \001(\010\022\031\n\021is_shared_histor"
      "y\030\t \001(\010\022\022\n\nshort_name\030\n \001(\t\022\023\n\013permissio"
      "ns\030\013 \001(\003\032A\n\010ExtEntry\022\013\n\003key\030\001 \001(\t\022$\n\005val"
      "ue\030\002 \001(\0132\025.zproto.RawArrayValue:\0028\001*_\n\020G"
      "roupPermissions\022\020\n\014SEND_MESSAGE\020\000\022\t\n\005CLE"
      "AR\020\001\022\t\n\005LEAVE\020\002\022\n\n\006DELETE\020\003\022\010\n\004JOIN\020\004\022\r\n"
      "\tVIEW_INFO\020\005*\356\001\n\024GroupFullPermissions\022\r\n"
      "\tEDIT_INFO\020\000\022\020\n\014VIEW_MEMBERS\020\001\022\022\n\016INVITE"
      "_MEMBERS\020\002\022\023\n\017INVITE_VIA_LINK\020\003\022\010\n\004CALL\020"
      "\004\022\027\n\023EDIT_ADMIN_SETTINGS\020\005\022\017\n\013VIEW_ADMIN"
      "S\020\006\022\017\n\013EDIT_ADMINS\020\007\022\020\n\014KICK_INVITED\020\010\022\017"
      "\n\013KICK_ANYONE\020\t\022\020\n\014EDIT_FOREIGN\020\n\022\022\n\016DEL"
      "ETE_FOREIGN\020\013B)\n\027com.zchat.engine.zproto"
      "B\014ZProtoGroupsH\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1144);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "group_base.proto", &protobuf_RegisterTypes);
  ::protobuf_types_2eproto::AddDescriptors();
  ::protobuf_files_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_group_5fbase_2eproto
namespace zproto {
const ::google::protobuf::EnumDescriptor* GroupPermissions_descriptor() {
  protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_group_5fbase_2eproto::file_level_enum_descriptors[0];
}
bool GroupPermissions_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GroupFullPermissions_descriptor() {
  protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_group_5fbase_2eproto::file_level_enum_descriptors[1];
}
bool GroupFullPermissions_IsValid(int value) {
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
    case 10:
    case 11:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Member::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Member::kUidFieldNumber;
const int Member::kInviterUidFieldNumber;
const int Member::kDateFieldNumber;
const int Member::kIsAdminFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Member::Member()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_group_5fbase_2eproto::InitDefaultsMember();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.Member)
}
Member::Member(const Member& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uid().size() > 0) {
    uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uid_);
  }
  inviter_uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.inviter_uid().size() > 0) {
    inviter_uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.inviter_uid_);
  }
  ::memcpy(&date_, &from.date_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_admin_) -
    reinterpret_cast<char*>(&date_)) + sizeof(is_admin_));
  // @@protoc_insertion_point(copy_constructor:zproto.Member)
}

void Member::SharedCtor() {
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inviter_uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&date_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_admin_) -
      reinterpret_cast<char*>(&date_)) + sizeof(is_admin_));
  _cached_size_ = 0;
}

Member::~Member() {
  // @@protoc_insertion_point(destructor:zproto.Member)
  SharedDtor();
}

void Member::SharedDtor() {
  uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inviter_uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Member::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Member::descriptor() {
  ::protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_group_5fbase_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Member& Member::default_instance() {
  ::protobuf_group_5fbase_2eproto::InitDefaultsMember();
  return *internal_default_instance();
}

Member* Member::New(::google::protobuf::Arena* arena) const {
  Member* n = new Member;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Member::Swap(Member* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Member::InternalSwap(Member* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Member::GetMetadata() const {
  protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_group_5fbase_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

Group_ExtEntry_DoNotUse::Group_ExtEntry_DoNotUse() {}
Group_ExtEntry_DoNotUse::Group_ExtEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void Group_ExtEntry_DoNotUse::MergeFrom(const Group_ExtEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata Group_ExtEntry_DoNotUse::GetMetadata() const {
  ::protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_group_5fbase_2eproto::file_level_metadata[1];
}
void Group_ExtEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void Group::InitAsDefaultInstance() {
  ::zproto::_Group_default_instance_._instance.get_mutable()->avatar_ = const_cast< ::zproto::Avatar*>(
      ::zproto::Avatar::internal_default_instance());
}
void Group::clear_avatar() {
  if (GetArenaNoVirtual() == NULL && avatar_ != NULL) {
    delete avatar_;
  }
  avatar_ = NULL;
}
void Group::clear_ext() {
  ext_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Group::kIdFieldNumber;
const int Group::kAccessHashFieldNumber;
const int Group::kTitleFieldNumber;
const int Group::kAvatarFieldNumber;
const int Group::kMembersCountFieldNumber;
const int Group::kIsMemberFieldNumber;
const int Group::kIsHiddenFieldNumber;
const int Group::kPermissionsFieldNumber;
const int Group::kIsDeletedFieldNumber;
const int Group::kExtFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Group::Group()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_group_5fbase_2eproto::InitDefaultsGroup();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.Group)
}
Group::Group(const Group& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ext_.MergeFrom(from.ext_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.title().size() > 0) {
    title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  if (from.has_avatar()) {
    avatar_ = new ::zproto::Avatar(*from.avatar_);
  } else {
    avatar_ = NULL;
  }
  ::memcpy(&access_hash_, &from.access_hash_,
    static_cast<size_t>(reinterpret_cast<char*>(&permissions_) -
    reinterpret_cast<char*>(&access_hash_)) + sizeof(permissions_));
  // @@protoc_insertion_point(copy_constructor:zproto.Group)
}

void Group::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&avatar_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&permissions_) -
      reinterpret_cast<char*>(&avatar_)) + sizeof(permissions_));
  _cached_size_ = 0;
}

Group::~Group() {
  // @@protoc_insertion_point(destructor:zproto.Group)
  SharedDtor();
}

void Group::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  title_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete avatar_;
}

void Group::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Group::descriptor() {
  ::protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_group_5fbase_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Group& Group::default_instance() {
  ::protobuf_group_5fbase_2eproto::InitDefaultsGroup();
  return *internal_default_instance();
}

Group* Group::New(::google::protobuf::Arena* arena) const {
  Group* n = new Group;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Group::Swap(Group* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Group::InternalSwap(Group* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Group::GetMetadata() const {
  protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_group_5fbase_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

GroupFull_ExtEntry_DoNotUse::GroupFull_ExtEntry_DoNotUse() {}
GroupFull_ExtEntry_DoNotUse::GroupFull_ExtEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void GroupFull_ExtEntry_DoNotUse::MergeFrom(const GroupFull_ExtEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata GroupFull_ExtEntry_DoNotUse::GetMetadata() const {
  ::protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_group_5fbase_2eproto::file_level_metadata[3];
}
void GroupFull_ExtEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void GroupFull::InitAsDefaultInstance() {
}
void GroupFull::clear_ext() {
  ext_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GroupFull::kIdFieldNumber;
const int GroupFull::kCreateDateFieldNumber;
const int GroupFull::kOwnerUidFieldNumber;
const int GroupFull::kMembersFieldNumber;
const int GroupFull::kThemeFieldNumber;
const int GroupFull::kAboutFieldNumber;
const int GroupFull::kExtFieldNumber;
const int GroupFull::kIsAsyncMembersFieldNumber;
const int GroupFull::kIsSharedHistoryFieldNumber;
const int GroupFull::kShortNameFieldNumber;
const int GroupFull::kPermissionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GroupFull::GroupFull()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_group_5fbase_2eproto::InitDefaultsGroupFull();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.GroupFull)
}
GroupFull::GroupFull(const GroupFull& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      members_(from.members_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ext_.MergeFrom(from.ext_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  owner_uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.owner_uid().size() > 0) {
    owner_uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.owner_uid_);
  }
  theme_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.theme().size() > 0) {
    theme_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.theme_);
  }
  about_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.about().size() > 0) {
    about_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.about_);
  }
  short_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.short_name().size() > 0) {
    short_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.short_name_);
  }
  ::memcpy(&create_date_, &from.create_date_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_shared_history_) -
    reinterpret_cast<char*>(&create_date_)) + sizeof(is_shared_history_));
  // @@protoc_insertion_point(copy_constructor:zproto.GroupFull)
}

void GroupFull::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  owner_uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  theme_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  about_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  short_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&create_date_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_shared_history_) -
      reinterpret_cast<char*>(&create_date_)) + sizeof(is_shared_history_));
  _cached_size_ = 0;
}

GroupFull::~GroupFull() {
  // @@protoc_insertion_point(destructor:zproto.GroupFull)
  SharedDtor();
}

void GroupFull::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  owner_uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  theme_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  about_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  short_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GroupFull::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GroupFull::descriptor() {
  ::protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_group_5fbase_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GroupFull& GroupFull::default_instance() {
  ::protobuf_group_5fbase_2eproto::InitDefaultsGroupFull();
  return *internal_default_instance();
}

GroupFull* GroupFull::New(::google::protobuf::Arena* arena) const {
  GroupFull* n = new GroupFull;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GroupFull::Swap(GroupFull* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GroupFull::InternalSwap(GroupFull* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata GroupFull::GetMetadata() const {
  protobuf_group_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_group_5fbase_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace zproto

// @@protoc_insertion_point(global_scope)