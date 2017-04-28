// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sploosh.proto

#ifndef PROTOBUF_sploosh_2eproto__INCLUDED
#define PROTOBUF_sploosh_2eproto__INCLUDED

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

namespace sploosh {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_sploosh_2eproto();
void protobuf_AssignDesc_sploosh_2eproto();
void protobuf_ShutdownFile_sploosh_2eproto();

class Vector3d;
class Complexd;
class FMMoments;
class ModalMoments;

// ===================================================================

class Vector3d : public ::google::protobuf::Message {
 public:
  Vector3d();
  virtual ~Vector3d();

  Vector3d(const Vector3d& from);

  inline Vector3d& operator=(const Vector3d& from) {
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
  static const Vector3d& default_instance();

  void Swap(Vector3d* other);

  // implements Message ----------------------------------------------

  Vector3d* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Vector3d& from);
  void MergeFrom(const Vector3d& from);
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

  // optional double x = 1 [default = 0];
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline double x() const;
  inline void set_x(double value);

  // optional double y = 2 [default = 0];
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline double y() const;
  inline void set_y(double value);

  // optional double z = 3 [default = 0];
  inline bool has_z() const;
  inline void clear_z();
  static const int kZFieldNumber = 3;
  inline double z() const;
  inline void set_z(double value);

  // @@protoc_insertion_point(class_scope:sploosh.Vector3d)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_z();
  inline void clear_has_z();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double x_;
  double y_;
  double z_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_sploosh_2eproto();
  friend void protobuf_AssignDesc_sploosh_2eproto();
  friend void protobuf_ShutdownFile_sploosh_2eproto();

  void InitAsDefaultInstance();
  static Vector3d* default_instance_;
};
// -------------------------------------------------------------------

class Complexd : public ::google::protobuf::Message {
 public:
  Complexd();
  virtual ~Complexd();

  Complexd(const Complexd& from);

  inline Complexd& operator=(const Complexd& from) {
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
  static const Complexd& default_instance();

  void Swap(Complexd* other);

  // implements Message ----------------------------------------------

  Complexd* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Complexd& from);
  void MergeFrom(const Complexd& from);
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

  // optional double real = 1 [default = 0];
  inline bool has_real() const;
  inline void clear_real();
  static const int kRealFieldNumber = 1;
  inline double real() const;
  inline void set_real(double value);

  // optional double imag = 2 [default = 0];
  inline bool has_imag() const;
  inline void clear_imag();
  static const int kImagFieldNumber = 2;
  inline double imag() const;
  inline void set_imag(double value);

  // @@protoc_insertion_point(class_scope:sploosh.Complexd)
 private:
  inline void set_has_real();
  inline void clear_has_real();
  inline void set_has_imag();
  inline void clear_has_imag();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double real_;
  double imag_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_sploosh_2eproto();
  friend void protobuf_AssignDesc_sploosh_2eproto();
  friend void protobuf_ShutdownFile_sploosh_2eproto();

  void InitAsDefaultInstance();
  static Complexd* default_instance_;
};
// -------------------------------------------------------------------

class FMMoments : public ::google::protobuf::Message {
 public:
  FMMoments();
  virtual ~FMMoments();

  FMMoments(const FMMoments& from);

  inline FMMoments& operator=(const FMMoments& from) {
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
  static const FMMoments& default_instance();

  void Swap(FMMoments* other);

  // implements Message ----------------------------------------------

  FMMoments* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FMMoments& from);
  void MergeFrom(const FMMoments& from);
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

  // required uint32 numExp = 1;
  inline bool has_numexp() const;
  inline void clear_numexp();
  static const int kNumExpFieldNumber = 1;
  inline ::google::protobuf::uint32 numexp() const;
  inline void set_numexp(::google::protobuf::uint32 value);

  // required double waveNum = 2;
  inline bool has_wavenum() const;
  inline void clear_wavenum();
  static const int kWaveNumFieldNumber = 2;
  inline double wavenum() const;
  inline void set_wavenum(double value);

  // optional .sploosh.Vector3d center = 3;
  inline bool has_center() const;
  inline void clear_center();
  static const int kCenterFieldNumber = 3;
  inline const ::sploosh::Vector3d& center() const;
  inline ::sploosh::Vector3d* mutable_center();
  inline ::sploosh::Vector3d* release_center();
  inline void set_allocated_center(::sploosh::Vector3d* center);

  // optional string mfile = 4;
  inline bool has_mfile() const;
  inline void clear_mfile();
  static const int kMfileFieldNumber = 4;
  inline const ::std::string& mfile() const;
  inline void set_mfile(const ::std::string& value);
  inline void set_mfile(const char* value);
  inline void set_mfile(const char* value, size_t size);
  inline ::std::string* mutable_mfile();
  inline ::std::string* release_mfile();
  inline void set_allocated_mfile(::std::string* mfile);

  // @@protoc_insertion_point(class_scope:sploosh.FMMoments)
 private:
  inline void set_has_numexp();
  inline void clear_has_numexp();
  inline void set_has_wavenum();
  inline void clear_has_wavenum();
  inline void set_has_center();
  inline void clear_has_center();
  inline void set_has_mfile();
  inline void clear_has_mfile();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double wavenum_;
  ::sploosh::Vector3d* center_;
  ::std::string* mfile_;
  ::google::protobuf::uint32 numexp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_sploosh_2eproto();
  friend void protobuf_AssignDesc_sploosh_2eproto();
  friend void protobuf_ShutdownFile_sploosh_2eproto();

  void InitAsDefaultInstance();
  static FMMoments* default_instance_;
};
// -------------------------------------------------------------------

class ModalMoments : public ::google::protobuf::Message {
 public:
  ModalMoments();
  virtual ~ModalMoments();

  ModalMoments(const ModalMoments& from);

  inline ModalMoments& operator=(const ModalMoments& from) {
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
  static const ModalMoments& default_instance();

  void Swap(ModalMoments* other);

  // implements Message ----------------------------------------------

  ModalMoments* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ModalMoments& from);
  void MergeFrom(const ModalMoments& from);
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

  // repeated .sploosh.FMMoments moment = 1;
  inline int moment_size() const;
  inline void clear_moment();
  static const int kMomentFieldNumber = 1;
  inline const ::sploosh::FMMoments& moment(int index) const;
  inline ::sploosh::FMMoments* mutable_moment(int index);
  inline ::sploosh::FMMoments* add_moment();
  inline const ::google::protobuf::RepeatedPtrField< ::sploosh::FMMoments >&
      moment() const;
  inline ::google::protobuf::RepeatedPtrField< ::sploosh::FMMoments >*
      mutable_moment();

  // @@protoc_insertion_point(class_scope:sploosh.ModalMoments)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::sploosh::FMMoments > moment_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_sploosh_2eproto();
  friend void protobuf_AssignDesc_sploosh_2eproto();
  friend void protobuf_ShutdownFile_sploosh_2eproto();

  void InitAsDefaultInstance();
  static ModalMoments* default_instance_;
};
// ===================================================================


// ===================================================================

// Vector3d

// optional double x = 1 [default = 0];
inline bool Vector3d::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Vector3d::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Vector3d::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Vector3d::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double Vector3d::x() const {
  return x_;
}
inline void Vector3d::set_x(double value) {
  set_has_x();
  x_ = value;
}

// optional double y = 2 [default = 0];
inline bool Vector3d::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Vector3d::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Vector3d::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Vector3d::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double Vector3d::y() const {
  return y_;
}
inline void Vector3d::set_y(double value) {
  set_has_y();
  y_ = value;
}

// optional double z = 3 [default = 0];
inline bool Vector3d::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Vector3d::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Vector3d::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Vector3d::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline double Vector3d::z() const {
  return z_;
}
inline void Vector3d::set_z(double value) {
  set_has_z();
  z_ = value;
}

// -------------------------------------------------------------------

// Complexd

// optional double real = 1 [default = 0];
inline bool Complexd::has_real() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Complexd::set_has_real() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Complexd::clear_has_real() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Complexd::clear_real() {
  real_ = 0;
  clear_has_real();
}
inline double Complexd::real() const {
  return real_;
}
inline void Complexd::set_real(double value) {
  set_has_real();
  real_ = value;
}

// optional double imag = 2 [default = 0];
inline bool Complexd::has_imag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Complexd::set_has_imag() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Complexd::clear_has_imag() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Complexd::clear_imag() {
  imag_ = 0;
  clear_has_imag();
}
inline double Complexd::imag() const {
  return imag_;
}
inline void Complexd::set_imag(double value) {
  set_has_imag();
  imag_ = value;
}

// -------------------------------------------------------------------

// FMMoments

// required uint32 numExp = 1;
inline bool FMMoments::has_numexp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FMMoments::set_has_numexp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FMMoments::clear_has_numexp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FMMoments::clear_numexp() {
  numexp_ = 0u;
  clear_has_numexp();
}
inline ::google::protobuf::uint32 FMMoments::numexp() const {
  return numexp_;
}
inline void FMMoments::set_numexp(::google::protobuf::uint32 value) {
  set_has_numexp();
  numexp_ = value;
}

// required double waveNum = 2;
inline bool FMMoments::has_wavenum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FMMoments::set_has_wavenum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FMMoments::clear_has_wavenum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FMMoments::clear_wavenum() {
  wavenum_ = 0;
  clear_has_wavenum();
}
inline double FMMoments::wavenum() const {
  return wavenum_;
}
inline void FMMoments::set_wavenum(double value) {
  set_has_wavenum();
  wavenum_ = value;
}

// optional .sploosh.Vector3d center = 3;
inline bool FMMoments::has_center() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FMMoments::set_has_center() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FMMoments::clear_has_center() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FMMoments::clear_center() {
  if (center_ != NULL) center_->::sploosh::Vector3d::Clear();
  clear_has_center();
}
inline const ::sploosh::Vector3d& FMMoments::center() const {
  return center_ != NULL ? *center_ : *default_instance_->center_;
}
inline ::sploosh::Vector3d* FMMoments::mutable_center() {
  set_has_center();
  if (center_ == NULL) center_ = new ::sploosh::Vector3d;
  return center_;
}
inline ::sploosh::Vector3d* FMMoments::release_center() {
  clear_has_center();
  ::sploosh::Vector3d* temp = center_;
  center_ = NULL;
  return temp;
}
inline void FMMoments::set_allocated_center(::sploosh::Vector3d* center) {
  delete center_;
  center_ = center;
  if (center) {
    set_has_center();
  } else {
    clear_has_center();
  }
}

// optional string mfile = 4;
inline bool FMMoments::has_mfile() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FMMoments::set_has_mfile() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FMMoments::clear_has_mfile() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FMMoments::clear_mfile() {
  if (mfile_ != &::google::protobuf::internal::kEmptyString) {
    mfile_->clear();
  }
  clear_has_mfile();
}
inline const ::std::string& FMMoments::mfile() const {
  return *mfile_;
}
inline void FMMoments::set_mfile(const ::std::string& value) {
  set_has_mfile();
  if (mfile_ == &::google::protobuf::internal::kEmptyString) {
    mfile_ = new ::std::string;
  }
  mfile_->assign(value);
}
inline void FMMoments::set_mfile(const char* value) {
  set_has_mfile();
  if (mfile_ == &::google::protobuf::internal::kEmptyString) {
    mfile_ = new ::std::string;
  }
  mfile_->assign(value);
}
inline void FMMoments::set_mfile(const char* value, size_t size) {
  set_has_mfile();
  if (mfile_ == &::google::protobuf::internal::kEmptyString) {
    mfile_ = new ::std::string;
  }
  mfile_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FMMoments::mutable_mfile() {
  set_has_mfile();
  if (mfile_ == &::google::protobuf::internal::kEmptyString) {
    mfile_ = new ::std::string;
  }
  return mfile_;
}
inline ::std::string* FMMoments::release_mfile() {
  clear_has_mfile();
  if (mfile_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mfile_;
    mfile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FMMoments::set_allocated_mfile(::std::string* mfile) {
  if (mfile_ != &::google::protobuf::internal::kEmptyString) {
    delete mfile_;
  }
  if (mfile) {
    set_has_mfile();
    mfile_ = mfile;
  } else {
    clear_has_mfile();
    mfile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// ModalMoments

// repeated .sploosh.FMMoments moment = 1;
inline int ModalMoments::moment_size() const {
  return moment_.size();
}
inline void ModalMoments::clear_moment() {
  moment_.Clear();
}
inline const ::sploosh::FMMoments& ModalMoments::moment(int index) const {
  return moment_.Get(index);
}
inline ::sploosh::FMMoments* ModalMoments::mutable_moment(int index) {
  return moment_.Mutable(index);
}
inline ::sploosh::FMMoments* ModalMoments::add_moment() {
  return moment_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sploosh::FMMoments >&
ModalMoments::moment() const {
  return moment_;
}
inline ::google::protobuf::RepeatedPtrField< ::sploosh::FMMoments >*
ModalMoments::mutable_moment() {
  return &moment_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sploosh

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sploosh_2eproto__INCLUDED
