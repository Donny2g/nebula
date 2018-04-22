// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: privacy.proto

#ifndef PROTOBUF_privacy_2eproto__INCLUDED
#define PROTOBUF_privacy_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "peers.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_privacy_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[6];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsBlockUserReqImpl();
void InitDefaultsBlockUserReq();
void InitDefaultsUnblockUserReqImpl();
void InitDefaultsUnblockUserReq();
void InitDefaultsLoadBlockedUsersReqImpl();
void InitDefaultsLoadBlockedUsersReq();
void InitDefaultsLoadBlockedUsersRspImpl();
void InitDefaultsLoadBlockedUsersRsp();
void InitDefaultsUserBlockedNotifyImpl();
void InitDefaultsUserBlockedNotify();
void InitDefaultsUserUnblockedNotifyImpl();
void InitDefaultsUserUnblockedNotify();
inline void InitDefaults() {
  InitDefaultsBlockUserReq();
  InitDefaultsUnblockUserReq();
  InitDefaultsLoadBlockedUsersReq();
  InitDefaultsLoadBlockedUsersRsp();
  InitDefaultsUserBlockedNotify();
  InitDefaultsUserUnblockedNotify();
}
}  // namespace protobuf_privacy_2eproto
namespace zproto {
class BlockUserReq;
class BlockUserReqDefaultTypeInternal;
extern BlockUserReqDefaultTypeInternal _BlockUserReq_default_instance_;
class LoadBlockedUsersReq;
class LoadBlockedUsersReqDefaultTypeInternal;
extern LoadBlockedUsersReqDefaultTypeInternal _LoadBlockedUsersReq_default_instance_;
class LoadBlockedUsersRsp;
class LoadBlockedUsersRspDefaultTypeInternal;
extern LoadBlockedUsersRspDefaultTypeInternal _LoadBlockedUsersRsp_default_instance_;
class UnblockUserReq;
class UnblockUserReqDefaultTypeInternal;
extern UnblockUserReqDefaultTypeInternal _UnblockUserReq_default_instance_;
class UserBlockedNotify;
class UserBlockedNotifyDefaultTypeInternal;
extern UserBlockedNotifyDefaultTypeInternal _UserBlockedNotify_default_instance_;
class UserUnblockedNotify;
class UserUnblockedNotifyDefaultTypeInternal;
extern UserUnblockedNotifyDefaultTypeInternal _UserUnblockedNotify_default_instance_;
}  // namespace zproto
namespace zproto {

// ===================================================================

class BlockUserReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.BlockUserReq) */ {
 public:
  BlockUserReq();
  virtual ~BlockUserReq();

  BlockUserReq(const BlockUserReq& from);

  inline BlockUserReq& operator=(const BlockUserReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BlockUserReq(BlockUserReq&& from) noexcept
    : BlockUserReq() {
    *this = ::std::move(from);
  }

  inline BlockUserReq& operator=(BlockUserReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BlockUserReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BlockUserReq* internal_default_instance() {
    return reinterpret_cast<const BlockUserReq*>(
               &_BlockUserReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BlockUserReq* other);
  friend void swap(BlockUserReq& a, BlockUserReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BlockUserReq* New() const PROTOBUF_FINAL { return New(NULL); }

  BlockUserReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(BlockUserReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .zproto.UserOutPeer peer = 1;
  bool has_peer() const;
  void clear_peer();
  static const int kPeerFieldNumber = 1;
  const ::zproto::UserOutPeer& peer() const;
  ::zproto::UserOutPeer* release_peer();
  ::zproto::UserOutPeer* mutable_peer();
  void set_allocated_peer(::zproto::UserOutPeer* peer);

  // @@protoc_insertion_point(class_scope:zproto.BlockUserReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::zproto::UserOutPeer* peer_;
  mutable int _cached_size_;
  friend struct ::protobuf_privacy_2eproto::TableStruct;
  friend void ::protobuf_privacy_2eproto::InitDefaultsBlockUserReqImpl();
};
// -------------------------------------------------------------------

class UnblockUserReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.UnblockUserReq) */ {
 public:
  UnblockUserReq();
  virtual ~UnblockUserReq();

  UnblockUserReq(const UnblockUserReq& from);

  inline UnblockUserReq& operator=(const UnblockUserReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UnblockUserReq(UnblockUserReq&& from) noexcept
    : UnblockUserReq() {
    *this = ::std::move(from);
  }

  inline UnblockUserReq& operator=(UnblockUserReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UnblockUserReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnblockUserReq* internal_default_instance() {
    return reinterpret_cast<const UnblockUserReq*>(
               &_UnblockUserReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(UnblockUserReq* other);
  friend void swap(UnblockUserReq& a, UnblockUserReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UnblockUserReq* New() const PROTOBUF_FINAL { return New(NULL); }

  UnblockUserReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(UnblockUserReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .zproto.UserOutPeer peer = 1;
  bool has_peer() const;
  void clear_peer();
  static const int kPeerFieldNumber = 1;
  const ::zproto::UserOutPeer& peer() const;
  ::zproto::UserOutPeer* release_peer();
  ::zproto::UserOutPeer* mutable_peer();
  void set_allocated_peer(::zproto::UserOutPeer* peer);

  // @@protoc_insertion_point(class_scope:zproto.UnblockUserReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::zproto::UserOutPeer* peer_;
  mutable int _cached_size_;
  friend struct ::protobuf_privacy_2eproto::TableStruct;
  friend void ::protobuf_privacy_2eproto::InitDefaultsUnblockUserReqImpl();
};
// -------------------------------------------------------------------

class LoadBlockedUsersReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.LoadBlockedUsersReq) */ {
 public:
  LoadBlockedUsersReq();
  virtual ~LoadBlockedUsersReq();

  LoadBlockedUsersReq(const LoadBlockedUsersReq& from);

  inline LoadBlockedUsersReq& operator=(const LoadBlockedUsersReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LoadBlockedUsersReq(LoadBlockedUsersReq&& from) noexcept
    : LoadBlockedUsersReq() {
    *this = ::std::move(from);
  }

  inline LoadBlockedUsersReq& operator=(LoadBlockedUsersReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LoadBlockedUsersReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LoadBlockedUsersReq* internal_default_instance() {
    return reinterpret_cast<const LoadBlockedUsersReq*>(
               &_LoadBlockedUsersReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(LoadBlockedUsersReq* other);
  friend void swap(LoadBlockedUsersReq& a, LoadBlockedUsersReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LoadBlockedUsersReq* New() const PROTOBUF_FINAL { return New(NULL); }

  LoadBlockedUsersReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LoadBlockedUsersReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:zproto.LoadBlockedUsersReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend struct ::protobuf_privacy_2eproto::TableStruct;
  friend void ::protobuf_privacy_2eproto::InitDefaultsLoadBlockedUsersReqImpl();
};
// -------------------------------------------------------------------

class LoadBlockedUsersRsp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.LoadBlockedUsersRsp) */ {
 public:
  LoadBlockedUsersRsp();
  virtual ~LoadBlockedUsersRsp();

  LoadBlockedUsersRsp(const LoadBlockedUsersRsp& from);

  inline LoadBlockedUsersRsp& operator=(const LoadBlockedUsersRsp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LoadBlockedUsersRsp(LoadBlockedUsersRsp&& from) noexcept
    : LoadBlockedUsersRsp() {
    *this = ::std::move(from);
  }

  inline LoadBlockedUsersRsp& operator=(LoadBlockedUsersRsp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LoadBlockedUsersRsp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LoadBlockedUsersRsp* internal_default_instance() {
    return reinterpret_cast<const LoadBlockedUsersRsp*>(
               &_LoadBlockedUsersRsp_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(LoadBlockedUsersRsp* other);
  friend void swap(LoadBlockedUsersRsp& a, LoadBlockedUsersRsp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LoadBlockedUsersRsp* New() const PROTOBUF_FINAL { return New(NULL); }

  LoadBlockedUsersRsp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LoadBlockedUsersRsp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .zproto.UserOutPeer user_peers = 1;
  int user_peers_size() const;
  void clear_user_peers();
  static const int kUserPeersFieldNumber = 1;
  const ::zproto::UserOutPeer& user_peers(int index) const;
  ::zproto::UserOutPeer* mutable_user_peers(int index);
  ::zproto::UserOutPeer* add_user_peers();
  ::google::protobuf::RepeatedPtrField< ::zproto::UserOutPeer >*
      mutable_user_peers();
  const ::google::protobuf::RepeatedPtrField< ::zproto::UserOutPeer >&
      user_peers() const;

  // @@protoc_insertion_point(class_scope:zproto.LoadBlockedUsersRsp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::zproto::UserOutPeer > user_peers_;
  mutable int _cached_size_;
  friend struct ::protobuf_privacy_2eproto::TableStruct;
  friend void ::protobuf_privacy_2eproto::InitDefaultsLoadBlockedUsersRspImpl();
};
// -------------------------------------------------------------------

class UserBlockedNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.UserBlockedNotify) */ {
 public:
  UserBlockedNotify();
  virtual ~UserBlockedNotify();

  UserBlockedNotify(const UserBlockedNotify& from);

  inline UserBlockedNotify& operator=(const UserBlockedNotify& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UserBlockedNotify(UserBlockedNotify&& from) noexcept
    : UserBlockedNotify() {
    *this = ::std::move(from);
  }

  inline UserBlockedNotify& operator=(UserBlockedNotify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UserBlockedNotify& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UserBlockedNotify* internal_default_instance() {
    return reinterpret_cast<const UserBlockedNotify*>(
               &_UserBlockedNotify_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(UserBlockedNotify* other);
  friend void swap(UserBlockedNotify& a, UserBlockedNotify& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UserBlockedNotify* New() const PROTOBUF_FINAL { return New(NULL); }

  UserBlockedNotify* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(UserBlockedNotify* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 uid = 1;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  ::google::protobuf::int32 uid() const;
  void set_uid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:zproto.UserBlockedNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 uid_;
  mutable int _cached_size_;
  friend struct ::protobuf_privacy_2eproto::TableStruct;
  friend void ::protobuf_privacy_2eproto::InitDefaultsUserBlockedNotifyImpl();
};
// -------------------------------------------------------------------

class UserUnblockedNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.UserUnblockedNotify) */ {
 public:
  UserUnblockedNotify();
  virtual ~UserUnblockedNotify();

  UserUnblockedNotify(const UserUnblockedNotify& from);

  inline UserUnblockedNotify& operator=(const UserUnblockedNotify& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UserUnblockedNotify(UserUnblockedNotify&& from) noexcept
    : UserUnblockedNotify() {
    *this = ::std::move(from);
  }

  inline UserUnblockedNotify& operator=(UserUnblockedNotify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UserUnblockedNotify& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UserUnblockedNotify* internal_default_instance() {
    return reinterpret_cast<const UserUnblockedNotify*>(
               &_UserUnblockedNotify_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(UserUnblockedNotify* other);
  friend void swap(UserUnblockedNotify& a, UserUnblockedNotify& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UserUnblockedNotify* New() const PROTOBUF_FINAL { return New(NULL); }

  UserUnblockedNotify* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(UserUnblockedNotify* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 uid = 1;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  ::google::protobuf::int32 uid() const;
  void set_uid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:zproto.UserUnblockedNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 uid_;
  mutable int _cached_size_;
  friend struct ::protobuf_privacy_2eproto::TableStruct;
  friend void ::protobuf_privacy_2eproto::InitDefaultsUserUnblockedNotifyImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BlockUserReq

// .zproto.UserOutPeer peer = 1;
inline bool BlockUserReq::has_peer() const {
  return this != internal_default_instance() && peer_ != NULL;
}
inline const ::zproto::UserOutPeer& BlockUserReq::peer() const {
  const ::zproto::UserOutPeer* p = peer_;
  // @@protoc_insertion_point(field_get:zproto.BlockUserReq.peer)
  return p != NULL ? *p : *reinterpret_cast<const ::zproto::UserOutPeer*>(
      &::zproto::_UserOutPeer_default_instance_);
}
inline ::zproto::UserOutPeer* BlockUserReq::release_peer() {
  // @@protoc_insertion_point(field_release:zproto.BlockUserReq.peer)
  
  ::zproto::UserOutPeer* temp = peer_;
  peer_ = NULL;
  return temp;
}
inline ::zproto::UserOutPeer* BlockUserReq::mutable_peer() {
  
  if (peer_ == NULL) {
    peer_ = new ::zproto::UserOutPeer;
  }
  // @@protoc_insertion_point(field_mutable:zproto.BlockUserReq.peer)
  return peer_;
}
inline void BlockUserReq::set_allocated_peer(::zproto::UserOutPeer* peer) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(peer_);
  }
  if (peer) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      peer = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, peer, submessage_arena);
    }
    
  } else {
    
  }
  peer_ = peer;
  // @@protoc_insertion_point(field_set_allocated:zproto.BlockUserReq.peer)
}

// -------------------------------------------------------------------

// UnblockUserReq

// .zproto.UserOutPeer peer = 1;
inline bool UnblockUserReq::has_peer() const {
  return this != internal_default_instance() && peer_ != NULL;
}
inline const ::zproto::UserOutPeer& UnblockUserReq::peer() const {
  const ::zproto::UserOutPeer* p = peer_;
  // @@protoc_insertion_point(field_get:zproto.UnblockUserReq.peer)
  return p != NULL ? *p : *reinterpret_cast<const ::zproto::UserOutPeer*>(
      &::zproto::_UserOutPeer_default_instance_);
}
inline ::zproto::UserOutPeer* UnblockUserReq::release_peer() {
  // @@protoc_insertion_point(field_release:zproto.UnblockUserReq.peer)
  
  ::zproto::UserOutPeer* temp = peer_;
  peer_ = NULL;
  return temp;
}
inline ::zproto::UserOutPeer* UnblockUserReq::mutable_peer() {
  
  if (peer_ == NULL) {
    peer_ = new ::zproto::UserOutPeer;
  }
  // @@protoc_insertion_point(field_mutable:zproto.UnblockUserReq.peer)
  return peer_;
}
inline void UnblockUserReq::set_allocated_peer(::zproto::UserOutPeer* peer) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(peer_);
  }
  if (peer) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      peer = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, peer, submessage_arena);
    }
    
  } else {
    
  }
  peer_ = peer;
  // @@protoc_insertion_point(field_set_allocated:zproto.UnblockUserReq.peer)
}

// -------------------------------------------------------------------

// LoadBlockedUsersReq

// -------------------------------------------------------------------

// LoadBlockedUsersRsp

// repeated .zproto.UserOutPeer user_peers = 1;
inline int LoadBlockedUsersRsp::user_peers_size() const {
  return user_peers_.size();
}
inline const ::zproto::UserOutPeer& LoadBlockedUsersRsp::user_peers(int index) const {
  // @@protoc_insertion_point(field_get:zproto.LoadBlockedUsersRsp.user_peers)
  return user_peers_.Get(index);
}
inline ::zproto::UserOutPeer* LoadBlockedUsersRsp::mutable_user_peers(int index) {
  // @@protoc_insertion_point(field_mutable:zproto.LoadBlockedUsersRsp.user_peers)
  return user_peers_.Mutable(index);
}
inline ::zproto::UserOutPeer* LoadBlockedUsersRsp::add_user_peers() {
  // @@protoc_insertion_point(field_add:zproto.LoadBlockedUsersRsp.user_peers)
  return user_peers_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::zproto::UserOutPeer >*
LoadBlockedUsersRsp::mutable_user_peers() {
  // @@protoc_insertion_point(field_mutable_list:zproto.LoadBlockedUsersRsp.user_peers)
  return &user_peers_;
}
inline const ::google::protobuf::RepeatedPtrField< ::zproto::UserOutPeer >&
LoadBlockedUsersRsp::user_peers() const {
  // @@protoc_insertion_point(field_list:zproto.LoadBlockedUsersRsp.user_peers)
  return user_peers_;
}

// -------------------------------------------------------------------

// UserBlockedNotify

// int32 uid = 1;
inline void UserBlockedNotify::clear_uid() {
  uid_ = 0;
}
inline ::google::protobuf::int32 UserBlockedNotify::uid() const {
  // @@protoc_insertion_point(field_get:zproto.UserBlockedNotify.uid)
  return uid_;
}
inline void UserBlockedNotify::set_uid(::google::protobuf::int32 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:zproto.UserBlockedNotify.uid)
}

// -------------------------------------------------------------------

// UserUnblockedNotify

// int32 uid = 1;
inline void UserUnblockedNotify::clear_uid() {
  uid_ = 0;
}
inline ::google::protobuf::int32 UserUnblockedNotify::uid() const {
  // @@protoc_insertion_point(field_get:zproto.UserUnblockedNotify.uid)
  return uid_;
}
inline void UserUnblockedNotify::set_uid(::google::protobuf::int32 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:zproto.UserUnblockedNotify.uid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_privacy_2eproto__INCLUDED
