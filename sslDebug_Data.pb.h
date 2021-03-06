// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sslDebug_Data.proto

#ifndef PROTOBUF_sslDebug_5fData_2eproto__INCLUDED
#define PROTOBUF_sslDebug_5fData_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_sslDebug_5fData_2eproto();
void protobuf_AssignDesc_sslDebug_5fData_2eproto();
void protobuf_ShutdownFile_sslDebug_5fData_2eproto();

class sslDebug_Data;
class Debug_Circle;
class Debug_Line;
class Debug_AdjustBot;
class Debug_AdjustBall;

// ===================================================================

class sslDebug_Data : public ::google::protobuf::Message {
 public:
  sslDebug_Data();
  virtual ~sslDebug_Data();

  sslDebug_Data(const sslDebug_Data& from);

  inline sslDebug_Data& operator=(const sslDebug_Data& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const sslDebug_Data& default_instance();

  void Swap(sslDebug_Data* other);

  // implements Message ----------------------------------------------

  sslDebug_Data* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const sslDebug_Data& from);
  void MergeFrom(const sslDebug_Data& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // repeated .Debug_Circle circle = 2;
  inline int circle_size() const;
  inline void clear_circle();
  static const int kCircleFieldNumber = 2;
  inline const ::Debug_Circle& circle(int index) const;
  inline ::Debug_Circle* mutable_circle(int index);
  inline ::Debug_Circle* add_circle();
  inline const ::google::protobuf::RepeatedPtrField< ::Debug_Circle >&
      circle() const;
  inline ::google::protobuf::RepeatedPtrField< ::Debug_Circle >*
      mutable_circle();

  // repeated .Debug_Line line = 3;
  inline int line_size() const;
  inline void clear_line();
  static const int kLineFieldNumber = 3;
  inline const ::Debug_Line& line(int index) const;
  inline ::Debug_Line* mutable_line(int index);
  inline ::Debug_Line* add_line();
  inline const ::google::protobuf::RepeatedPtrField< ::Debug_Line >&
      line() const;
  inline ::google::protobuf::RepeatedPtrField< ::Debug_Line >*
      mutable_line();

  // repeated .Debug_AdjustBot botpos = 4;
  inline int botpos_size() const;
  inline void clear_botpos();
  static const int kBotposFieldNumber = 4;
  inline const ::Debug_AdjustBot& botpos(int index) const;
  inline ::Debug_AdjustBot* mutable_botpos(int index);
  inline ::Debug_AdjustBot* add_botpos();
  inline const ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBot >&
      botpos() const;
  inline ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBot >*
      mutable_botpos();

  // repeated .Debug_AdjustBall ballpos = 5;
  inline int ballpos_size() const;
  inline void clear_ballpos();
  static const int kBallposFieldNumber = 5;
  inline const ::Debug_AdjustBall& ballpos(int index) const;
  inline ::Debug_AdjustBall* mutable_ballpos(int index);
  inline ::Debug_AdjustBall* add_ballpos();
  inline const ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBall >&
      ballpos() const;
  inline ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBall >*
      mutable_ballpos();

  // @@protoc_insertion_point(class_scope:sslDebug_Data)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* id_;
  ::google::protobuf::RepeatedPtrField< ::Debug_Circle > circle_;
  ::google::protobuf::RepeatedPtrField< ::Debug_Line > line_;
  ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBot > botpos_;
  ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBall > ballpos_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_sslDebug_5fData_2eproto();
  friend void protobuf_AssignDesc_sslDebug_5fData_2eproto();
  friend void protobuf_ShutdownFile_sslDebug_5fData_2eproto();

  void InitAsDefaultInstance();
  static sslDebug_Data* default_instance_;
};
// -------------------------------------------------------------------

class Debug_Circle : public ::google::protobuf::Message {
 public:
  Debug_Circle();
  virtual ~Debug_Circle();

  Debug_Circle(const Debug_Circle& from);

  inline Debug_Circle& operator=(const Debug_Circle& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Debug_Circle& default_instance();

  void Swap(Debug_Circle* other);

  // implements Message ----------------------------------------------

  Debug_Circle* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Debug_Circle& from);
  void MergeFrom(const Debug_Circle& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // required int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // required int32 radius = 3;
  inline bool has_radius() const;
  inline void clear_radius();
  static const int kRadiusFieldNumber = 3;
  inline ::google::protobuf::int32 radius() const;
  inline void set_radius(::google::protobuf::int32 value);

  // required float color = 4;
  inline bool has_color() const;
  inline void clear_color();
  static const int kColorFieldNumber = 4;
  inline float color() const;
  inline void set_color(float value);

  // @@protoc_insertion_point(class_scope:Debug_Circle)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_radius();
  inline void clear_has_radius();
  inline void set_has_color();
  inline void clear_has_color();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 radius_;
  float color_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_sslDebug_5fData_2eproto();
  friend void protobuf_AssignDesc_sslDebug_5fData_2eproto();
  friend void protobuf_ShutdownFile_sslDebug_5fData_2eproto();

  void InitAsDefaultInstance();
  static Debug_Circle* default_instance_;
};
// -------------------------------------------------------------------

class Debug_Line : public ::google::protobuf::Message {
 public:
  Debug_Line();
  virtual ~Debug_Line();

  Debug_Line(const Debug_Line& from);

  inline Debug_Line& operator=(const Debug_Line& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Debug_Line& default_instance();

  void Swap(Debug_Line* other);

  // implements Message ----------------------------------------------

  Debug_Line* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Debug_Line& from);
  void MergeFrom(const Debug_Line& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 x1 = 1;
  inline bool has_x1() const;
  inline void clear_x1();
  static const int kX1FieldNumber = 1;
  inline ::google::protobuf::int32 x1() const;
  inline void set_x1(::google::protobuf::int32 value);

  // required int32 y1 = 2;
  inline bool has_y1() const;
  inline void clear_y1();
  static const int kY1FieldNumber = 2;
  inline ::google::protobuf::int32 y1() const;
  inline void set_y1(::google::protobuf::int32 value);

  // required int32 x2 = 3;
  inline bool has_x2() const;
  inline void clear_x2();
  static const int kX2FieldNumber = 3;
  inline ::google::protobuf::int32 x2() const;
  inline void set_x2(::google::protobuf::int32 value);

  // required int32 y2 = 4;
  inline bool has_y2() const;
  inline void clear_y2();
  static const int kY2FieldNumber = 4;
  inline ::google::protobuf::int32 y2() const;
  inline void set_y2(::google::protobuf::int32 value);

  // required float color = 5;
  inline bool has_color() const;
  inline void clear_color();
  static const int kColorFieldNumber = 5;
  inline float color() const;
  inline void set_color(float value);

  // @@protoc_insertion_point(class_scope:Debug_Line)
 private:
  inline void set_has_x1();
  inline void clear_has_x1();
  inline void set_has_y1();
  inline void clear_has_y1();
  inline void set_has_x2();
  inline void clear_has_x2();
  inline void set_has_y2();
  inline void clear_has_y2();
  inline void set_has_color();
  inline void clear_has_color();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 x1_;
  ::google::protobuf::int32 y1_;
  ::google::protobuf::int32 x2_;
  ::google::protobuf::int32 y2_;
  float color_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_sslDebug_5fData_2eproto();
  friend void protobuf_AssignDesc_sslDebug_5fData_2eproto();
  friend void protobuf_ShutdownFile_sslDebug_5fData_2eproto();

  void InitAsDefaultInstance();
  static Debug_Line* default_instance_;
};
// -------------------------------------------------------------------

class Debug_AdjustBot : public ::google::protobuf::Message {
 public:
  Debug_AdjustBot();
  virtual ~Debug_AdjustBot();

  Debug_AdjustBot(const Debug_AdjustBot& from);

  inline Debug_AdjustBot& operator=(const Debug_AdjustBot& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Debug_AdjustBot& default_instance();

  void Swap(Debug_AdjustBot* other);

  // implements Message ----------------------------------------------

  Debug_AdjustBot* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Debug_AdjustBot& from);
  void MergeFrom(const Debug_AdjustBot& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required int32 x = 2;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 2;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // required int32 y = 3;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 3;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // required float dir = 4;
  inline bool has_dir() const;
  inline void clear_dir();
  static const int kDirFieldNumber = 4;
  inline float dir() const;
  inline void set_dir(float value);

  // required int32 vx = 5;
  inline bool has_vx() const;
  inline void clear_vx();
  static const int kVxFieldNumber = 5;
  inline ::google::protobuf::int32 vx() const;
  inline void set_vx(::google::protobuf::int32 value);

  // required int32 vy = 6;
  inline bool has_vy() const;
  inline void clear_vy();
  static const int kVyFieldNumber = 6;
  inline ::google::protobuf::int32 vy() const;
  inline void set_vy(::google::protobuf::int32 value);

  // required int32 vz = 7;
  inline bool has_vz() const;
  inline void clear_vz();
  static const int kVzFieldNumber = 7;
  inline ::google::protobuf::int32 vz() const;
  inline void set_vz(::google::protobuf::int32 value);

  // required uint32 team = 8;
  inline bool has_team() const;
  inline void clear_team();
  static const int kTeamFieldNumber = 8;
  inline ::google::protobuf::uint32 team() const;
  inline void set_team(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:Debug_AdjustBot)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_dir();
  inline void clear_has_dir();
  inline void set_has_vx();
  inline void clear_has_vx();
  inline void set_has_vy();
  inline void clear_has_vy();
  inline void set_has_vz();
  inline void clear_has_vz();
  inline void set_has_team();
  inline void clear_has_team();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 id_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  float dir_;
  ::google::protobuf::int32 vx_;
  ::google::protobuf::int32 vy_;
  ::google::protobuf::int32 vz_;
  ::google::protobuf::uint32 team_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_sslDebug_5fData_2eproto();
  friend void protobuf_AssignDesc_sslDebug_5fData_2eproto();
  friend void protobuf_ShutdownFile_sslDebug_5fData_2eproto();

  void InitAsDefaultInstance();
  static Debug_AdjustBot* default_instance_;
};
// -------------------------------------------------------------------

class Debug_AdjustBall : public ::google::protobuf::Message {
 public:
  Debug_AdjustBall();
  virtual ~Debug_AdjustBall();

  Debug_AdjustBall(const Debug_AdjustBall& from);

  inline Debug_AdjustBall& operator=(const Debug_AdjustBall& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Debug_AdjustBall& default_instance();

  void Swap(Debug_AdjustBall* other);

  // implements Message ----------------------------------------------

  Debug_AdjustBall* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Debug_AdjustBall& from);
  void MergeFrom(const Debug_AdjustBall& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // required int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // required int32 vx = 3;
  inline bool has_vx() const;
  inline void clear_vx();
  static const int kVxFieldNumber = 3;
  inline ::google::protobuf::int32 vx() const;
  inline void set_vx(::google::protobuf::int32 value);

  // required int32 vy = 4;
  inline bool has_vy() const;
  inline void clear_vy();
  static const int kVyFieldNumber = 4;
  inline ::google::protobuf::int32 vy() const;
  inline void set_vy(::google::protobuf::int32 value);

  // required uint32 vz = 5;
  inline bool has_vz() const;
  inline void clear_vz();
  static const int kVzFieldNumber = 5;
  inline ::google::protobuf::uint32 vz() const;
  inline void set_vz(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:Debug_AdjustBall)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_vx();
  inline void clear_has_vx();
  inline void set_has_vy();
  inline void clear_has_vy();
  inline void set_has_vz();
  inline void clear_has_vz();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 vx_;
  ::google::protobuf::int32 vy_;
  ::google::protobuf::uint32 vz_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_sslDebug_5fData_2eproto();
  friend void protobuf_AssignDesc_sslDebug_5fData_2eproto();
  friend void protobuf_ShutdownFile_sslDebug_5fData_2eproto();

  void InitAsDefaultInstance();
  static Debug_AdjustBall* default_instance_;
};
// ===================================================================


// ===================================================================

// sslDebug_Data

// required string id = 1;
inline bool sslDebug_Data::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void sslDebug_Data::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void sslDebug_Data::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void sslDebug_Data::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& sslDebug_Data::id() const {
  return *id_;
}
inline void sslDebug_Data::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void sslDebug_Data::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void sslDebug_Data::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* sslDebug_Data::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* sslDebug_Data::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void sslDebug_Data::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .Debug_Circle circle = 2;
inline int sslDebug_Data::circle_size() const {
  return circle_.size();
}
inline void sslDebug_Data::clear_circle() {
  circle_.Clear();
}
inline const ::Debug_Circle& sslDebug_Data::circle(int index) const {
  return circle_.Get(index);
}
inline ::Debug_Circle* sslDebug_Data::mutable_circle(int index) {
  return circle_.Mutable(index);
}
inline ::Debug_Circle* sslDebug_Data::add_circle() {
  return circle_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Debug_Circle >&
sslDebug_Data::circle() const {
  return circle_;
}
inline ::google::protobuf::RepeatedPtrField< ::Debug_Circle >*
sslDebug_Data::mutable_circle() {
  return &circle_;
}

// repeated .Debug_Line line = 3;
inline int sslDebug_Data::line_size() const {
  return line_.size();
}
inline void sslDebug_Data::clear_line() {
  line_.Clear();
}
inline const ::Debug_Line& sslDebug_Data::line(int index) const {
  return line_.Get(index);
}
inline ::Debug_Line* sslDebug_Data::mutable_line(int index) {
  return line_.Mutable(index);
}
inline ::Debug_Line* sslDebug_Data::add_line() {
  return line_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Debug_Line >&
sslDebug_Data::line() const {
  return line_;
}
inline ::google::protobuf::RepeatedPtrField< ::Debug_Line >*
sslDebug_Data::mutable_line() {
  return &line_;
}

// repeated .Debug_AdjustBot botpos = 4;
inline int sslDebug_Data::botpos_size() const {
  return botpos_.size();
}
inline void sslDebug_Data::clear_botpos() {
  botpos_.Clear();
}
inline const ::Debug_AdjustBot& sslDebug_Data::botpos(int index) const {
  return botpos_.Get(index);
}
inline ::Debug_AdjustBot* sslDebug_Data::mutable_botpos(int index) {
  return botpos_.Mutable(index);
}
inline ::Debug_AdjustBot* sslDebug_Data::add_botpos() {
  return botpos_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBot >&
sslDebug_Data::botpos() const {
  return botpos_;
}
inline ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBot >*
sslDebug_Data::mutable_botpos() {
  return &botpos_;
}

// repeated .Debug_AdjustBall ballpos = 5;
inline int sslDebug_Data::ballpos_size() const {
  return ballpos_.size();
}
inline void sslDebug_Data::clear_ballpos() {
  ballpos_.Clear();
}
inline const ::Debug_AdjustBall& sslDebug_Data::ballpos(int index) const {
  return ballpos_.Get(index);
}
inline ::Debug_AdjustBall* sslDebug_Data::mutable_ballpos(int index) {
  return ballpos_.Mutable(index);
}
inline ::Debug_AdjustBall* sslDebug_Data::add_ballpos() {
  return ballpos_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBall >&
sslDebug_Data::ballpos() const {
  return ballpos_;
}
inline ::google::protobuf::RepeatedPtrField< ::Debug_AdjustBall >*
sslDebug_Data::mutable_ballpos() {
  return &ballpos_;
}

// -------------------------------------------------------------------

// Debug_Circle

// required int32 x = 1;
inline bool Debug_Circle::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Debug_Circle::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Debug_Circle::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Debug_Circle::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 Debug_Circle::x() const {
  return x_;
}
inline void Debug_Circle::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// required int32 y = 2;
inline bool Debug_Circle::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Debug_Circle::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Debug_Circle::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Debug_Circle::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 Debug_Circle::y() const {
  return y_;
}
inline void Debug_Circle::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// required int32 radius = 3;
inline bool Debug_Circle::has_radius() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Debug_Circle::set_has_radius() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Debug_Circle::clear_has_radius() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Debug_Circle::clear_radius() {
  radius_ = 0;
  clear_has_radius();
}
inline ::google::protobuf::int32 Debug_Circle::radius() const {
  return radius_;
}
inline void Debug_Circle::set_radius(::google::protobuf::int32 value) {
  set_has_radius();
  radius_ = value;
}

// required float color = 4;
inline bool Debug_Circle::has_color() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Debug_Circle::set_has_color() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Debug_Circle::clear_has_color() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Debug_Circle::clear_color() {
  color_ = 0;
  clear_has_color();
}
inline float Debug_Circle::color() const {
  return color_;
}
inline void Debug_Circle::set_color(float value) {
  set_has_color();
  color_ = value;
}

// -------------------------------------------------------------------

// Debug_Line

// required int32 x1 = 1;
inline bool Debug_Line::has_x1() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Debug_Line::set_has_x1() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Debug_Line::clear_has_x1() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Debug_Line::clear_x1() {
  x1_ = 0;
  clear_has_x1();
}
inline ::google::protobuf::int32 Debug_Line::x1() const {
  return x1_;
}
inline void Debug_Line::set_x1(::google::protobuf::int32 value) {
  set_has_x1();
  x1_ = value;
}

// required int32 y1 = 2;
inline bool Debug_Line::has_y1() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Debug_Line::set_has_y1() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Debug_Line::clear_has_y1() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Debug_Line::clear_y1() {
  y1_ = 0;
  clear_has_y1();
}
inline ::google::protobuf::int32 Debug_Line::y1() const {
  return y1_;
}
inline void Debug_Line::set_y1(::google::protobuf::int32 value) {
  set_has_y1();
  y1_ = value;
}

// required int32 x2 = 3;
inline bool Debug_Line::has_x2() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Debug_Line::set_has_x2() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Debug_Line::clear_has_x2() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Debug_Line::clear_x2() {
  x2_ = 0;
  clear_has_x2();
}
inline ::google::protobuf::int32 Debug_Line::x2() const {
  return x2_;
}
inline void Debug_Line::set_x2(::google::protobuf::int32 value) {
  set_has_x2();
  x2_ = value;
}

// required int32 y2 = 4;
inline bool Debug_Line::has_y2() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Debug_Line::set_has_y2() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Debug_Line::clear_has_y2() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Debug_Line::clear_y2() {
  y2_ = 0;
  clear_has_y2();
}
inline ::google::protobuf::int32 Debug_Line::y2() const {
  return y2_;
}
inline void Debug_Line::set_y2(::google::protobuf::int32 value) {
  set_has_y2();
  y2_ = value;
}

// required float color = 5;
inline bool Debug_Line::has_color() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Debug_Line::set_has_color() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Debug_Line::clear_has_color() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Debug_Line::clear_color() {
  color_ = 0;
  clear_has_color();
}
inline float Debug_Line::color() const {
  return color_;
}
inline void Debug_Line::set_color(float value) {
  set_has_color();
  color_ = value;
}

// -------------------------------------------------------------------

// Debug_AdjustBot

// required uint32 id = 1;
inline bool Debug_AdjustBot::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Debug_AdjustBot::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Debug_AdjustBot::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Debug_AdjustBot::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Debug_AdjustBot::id() const {
  return id_;
}
inline void Debug_AdjustBot::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
}

// required int32 x = 2;
inline bool Debug_AdjustBot::has_x() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Debug_AdjustBot::set_has_x() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Debug_AdjustBot::clear_has_x() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Debug_AdjustBot::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 Debug_AdjustBot::x() const {
  return x_;
}
inline void Debug_AdjustBot::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// required int32 y = 3;
inline bool Debug_AdjustBot::has_y() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Debug_AdjustBot::set_has_y() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Debug_AdjustBot::clear_has_y() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Debug_AdjustBot::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 Debug_AdjustBot::y() const {
  return y_;
}
inline void Debug_AdjustBot::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// required float dir = 4;
inline bool Debug_AdjustBot::has_dir() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Debug_AdjustBot::set_has_dir() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Debug_AdjustBot::clear_has_dir() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Debug_AdjustBot::clear_dir() {
  dir_ = 0;
  clear_has_dir();
}
inline float Debug_AdjustBot::dir() const {
  return dir_;
}
inline void Debug_AdjustBot::set_dir(float value) {
  set_has_dir();
  dir_ = value;
}

// required int32 vx = 5;
inline bool Debug_AdjustBot::has_vx() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Debug_AdjustBot::set_has_vx() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Debug_AdjustBot::clear_has_vx() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Debug_AdjustBot::clear_vx() {
  vx_ = 0;
  clear_has_vx();
}
inline ::google::protobuf::int32 Debug_AdjustBot::vx() const {
  return vx_;
}
inline void Debug_AdjustBot::set_vx(::google::protobuf::int32 value) {
  set_has_vx();
  vx_ = value;
}

// required int32 vy = 6;
inline bool Debug_AdjustBot::has_vy() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Debug_AdjustBot::set_has_vy() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Debug_AdjustBot::clear_has_vy() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Debug_AdjustBot::clear_vy() {
  vy_ = 0;
  clear_has_vy();
}
inline ::google::protobuf::int32 Debug_AdjustBot::vy() const {
  return vy_;
}
inline void Debug_AdjustBot::set_vy(::google::protobuf::int32 value) {
  set_has_vy();
  vy_ = value;
}

// required int32 vz = 7;
inline bool Debug_AdjustBot::has_vz() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Debug_AdjustBot::set_has_vz() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Debug_AdjustBot::clear_has_vz() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Debug_AdjustBot::clear_vz() {
  vz_ = 0;
  clear_has_vz();
}
inline ::google::protobuf::int32 Debug_AdjustBot::vz() const {
  return vz_;
}
inline void Debug_AdjustBot::set_vz(::google::protobuf::int32 value) {
  set_has_vz();
  vz_ = value;
}

// required uint32 team = 8;
inline bool Debug_AdjustBot::has_team() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Debug_AdjustBot::set_has_team() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Debug_AdjustBot::clear_has_team() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Debug_AdjustBot::clear_team() {
  team_ = 0u;
  clear_has_team();
}
inline ::google::protobuf::uint32 Debug_AdjustBot::team() const {
  return team_;
}
inline void Debug_AdjustBot::set_team(::google::protobuf::uint32 value) {
  set_has_team();
  team_ = value;
}

// -------------------------------------------------------------------

// Debug_AdjustBall

// required int32 x = 1;
inline bool Debug_AdjustBall::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Debug_AdjustBall::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Debug_AdjustBall::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Debug_AdjustBall::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 Debug_AdjustBall::x() const {
  return x_;
}
inline void Debug_AdjustBall::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// required int32 y = 2;
inline bool Debug_AdjustBall::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Debug_AdjustBall::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Debug_AdjustBall::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Debug_AdjustBall::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 Debug_AdjustBall::y() const {
  return y_;
}
inline void Debug_AdjustBall::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// required int32 vx = 3;
inline bool Debug_AdjustBall::has_vx() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Debug_AdjustBall::set_has_vx() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Debug_AdjustBall::clear_has_vx() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Debug_AdjustBall::clear_vx() {
  vx_ = 0;
  clear_has_vx();
}
inline ::google::protobuf::int32 Debug_AdjustBall::vx() const {
  return vx_;
}
inline void Debug_AdjustBall::set_vx(::google::protobuf::int32 value) {
  set_has_vx();
  vx_ = value;
}

// required int32 vy = 4;
inline bool Debug_AdjustBall::has_vy() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Debug_AdjustBall::set_has_vy() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Debug_AdjustBall::clear_has_vy() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Debug_AdjustBall::clear_vy() {
  vy_ = 0;
  clear_has_vy();
}
inline ::google::protobuf::int32 Debug_AdjustBall::vy() const {
  return vy_;
}
inline void Debug_AdjustBall::set_vy(::google::protobuf::int32 value) {
  set_has_vy();
  vy_ = value;
}

// required uint32 vz = 5;
inline bool Debug_AdjustBall::has_vz() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Debug_AdjustBall::set_has_vz() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Debug_AdjustBall::clear_has_vz() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Debug_AdjustBall::clear_vz() {
  vz_ = 0u;
  clear_has_vz();
}
inline ::google::protobuf::uint32 Debug_AdjustBall::vz() const {
  return vz_;
}
inline void Debug_AdjustBall::set_vz(::google::protobuf::uint32 value) {
  set_has_vz();
  vz_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sslDebug_5fData_2eproto__INCLUDED
