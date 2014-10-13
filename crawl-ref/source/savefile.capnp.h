// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: savefile.capnp

#ifndef CAPNP_INCLUDED_ba3b5128ca47fcc0_
#define CAPNP_INCLUDED_ba3b5128ca47fcc0_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 4001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif



enum class Branch: uint16_t {
  DUNGEON,
  TEMPLE,
  ORC,
  ELF,
  DWARF,
  LAIR,
  SWAMP,
  SHOALS,
  SNAKE,
  SPIDER,
  SLIME,
  VAULTS,
  BLADE,
  CRYPT,
  TOMB,
  DEPTHS,
  VESTIBULE,
  DIS,
  GEHENNA,
  COCYTUS,
  TARTARUS,
  ZOT,
  FOREST,
  ABYSS,
  PANDEMONIUM,
  ZIGGURAT,
  LABYRINTH,
  BAZAAR,
  TROVE,
  SEWER,
  OSSUARY,
  BAILEY,
  ICE_CAVE,
  VOLCANO,
  WIZLAB,
};

struct LevelId {
  LevelId() = delete;

  class Reader;
  class Builder;
  class Pipeline;
};

struct Position {
  Position() = delete;

  class Reader;
  class Builder;
  class Pipeline;
};

struct Item {
  Item() = delete;

  class Reader;
  class Builder;
  class Pipeline;
};


// =======================================================================================

namespace capnp {
namespace schemas {

extern const ::capnp::_::RawSchema s_9cd8892f18235501;
extern const ::capnp::_::RawSchema s_caeb9d293172945f;
extern const ::capnp::_::RawSchema s_b2c2270627a92726;
extern const ::capnp::_::RawSchema s_e83b0572c5df9143;

}  // namespace schemas
namespace _ {  // private

CAPNP_DECLARE_ENUM(
    ::Branch, 9cd8892f18235501);
CAPNP_DECLARE_STRUCT(
    ::LevelId, caeb9d293172945f,
    1, 0, FOUR_BYTES);
CAPNP_DECLARE_STRUCT(
    ::Position, b2c2270627a92726,
    1, 0, FOUR_BYTES);
CAPNP_DECLARE_STRUCT(
    ::Item, e83b0572c5df9143,
    3, 3, INLINE_COMPOSITE);

}  // namespace _ (private)
}  // namespace capnp

// =======================================================================================


class LevelId::Reader {
public:
  typedef LevelId Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

  inline  ::uint8_t getDepth() const;

  inline  ::Branch getBranch() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(LevelId::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(LevelId::Reader reader) {
  return ::capnp::_::structString<LevelId>(reader._reader);
}

class LevelId::Builder {
public:
  typedef LevelId Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }

  inline  ::uint8_t getDepth();
  inline void setDepth( ::uint8_t value);

  inline  ::Branch getBranch();
  inline void setBranch( ::Branch value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(LevelId::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(LevelId::Builder builder) {
  return ::capnp::_::structString<LevelId>(builder._builder.asReader());
}

class LevelId::Pipeline {
public:
  typedef LevelId Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
};

class Position::Reader {
public:
  typedef Position Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

  inline  ::int16_t getX() const;

  inline  ::int16_t getY() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Position::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(Position::Reader reader) {
  return ::capnp::_::structString<Position>(reader._reader);
}

class Position::Builder {
public:
  typedef Position Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }

  inline  ::int16_t getX();
  inline void setX( ::int16_t value);

  inline  ::int16_t getY();
  inline void setY( ::int16_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Position::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(Position::Builder builder) {
  return ::capnp::_::structString<Position>(builder._builder.asReader());
}

class Position::Pipeline {
public:
  typedef Position Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
};

class Item::Reader {
public:
  typedef Item Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

  inline  ::uint8_t getType() const;

  inline  ::uint8_t getSubtype() const;

  inline  ::int8_t getPlus() const;

  inline  ::int8_t getPlus2() const;

  inline  ::int32_t getSpecial() const;

  inline  ::int16_t getQuantity() const;

  inline  ::uint8_t getColour() const;

  inline  ::uint8_t getRandom() const;

  inline bool hasPosition() const;
  inline  ::Position::Reader getPosition() const;

  inline  ::uint16_t getLink() const;

  inline  ::uint8_t getSlot() const;

  inline bool hasOriginalPlace() const;
  inline  ::LevelId::Reader getOriginalPlace() const;

  inline  ::int16_t getOriginalMonNum() const;

  inline bool hasInscription() const;
  inline  ::capnp::Text::Reader getInscription() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Item::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(Item::Reader reader) {
  return ::capnp::_::structString<Item>(reader._reader);
}

class Item::Builder {
public:
  typedef Item Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }

  inline  ::uint8_t getType();
  inline void setType( ::uint8_t value);

  inline  ::uint8_t getSubtype();
  inline void setSubtype( ::uint8_t value);

  inline  ::int8_t getPlus();
  inline void setPlus( ::int8_t value);

  inline  ::int8_t getPlus2();
  inline void setPlus2( ::int8_t value);

  inline  ::int32_t getSpecial();
  inline void setSpecial( ::int32_t value);

  inline  ::int16_t getQuantity();
  inline void setQuantity( ::int16_t value);

  inline  ::uint8_t getColour();
  inline void setColour( ::uint8_t value);

  inline  ::uint8_t getRandom();
  inline void setRandom( ::uint8_t value);

  inline bool hasPosition();
  inline  ::Position::Builder getPosition();
  inline void setPosition( ::Position::Reader value);
  inline  ::Position::Builder initPosition();
  inline void adoptPosition(::capnp::Orphan< ::Position>&& value);
  inline ::capnp::Orphan< ::Position> disownPosition();

  inline  ::uint16_t getLink();
  inline void setLink( ::uint16_t value);

  inline  ::uint8_t getSlot();
  inline void setSlot( ::uint8_t value);

  inline bool hasOriginalPlace();
  inline  ::LevelId::Builder getOriginalPlace();
  inline void setOriginalPlace( ::LevelId::Reader value);
  inline  ::LevelId::Builder initOriginalPlace();
  inline void adoptOriginalPlace(::capnp::Orphan< ::LevelId>&& value);
  inline ::capnp::Orphan< ::LevelId> disownOriginalPlace();

  inline  ::int16_t getOriginalMonNum();
  inline void setOriginalMonNum( ::int16_t value);

  inline bool hasInscription();
  inline  ::capnp::Text::Builder getInscription();
  inline void setInscription( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initInscription(unsigned int size);
  inline void adoptInscription(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownInscription();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Item::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(Item::Builder builder) {
  return ::capnp::_::structString<Item>(builder._builder.asReader());
}

class Item::Pipeline {
public:
  typedef Item Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::Position::Pipeline getPosition();
  inline  ::LevelId::Pipeline getOriginalPlace();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
};

// =======================================================================================

inline  ::uint8_t LevelId::Reader::getDepth() const {
  return _reader.getDataField< ::uint8_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::uint8_t LevelId::Builder::getDepth() {
  return _builder.getDataField< ::uint8_t>(
      0 * ::capnp::ELEMENTS);
}
inline void LevelId::Builder::setDepth( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline  ::Branch LevelId::Reader::getBranch() const {
  return _reader.getDataField< ::Branch>(
      1 * ::capnp::ELEMENTS);
}

inline  ::Branch LevelId::Builder::getBranch() {
  return _builder.getDataField< ::Branch>(
      1 * ::capnp::ELEMENTS);
}
inline void LevelId::Builder::setBranch( ::Branch value) {
  _builder.setDataField< ::Branch>(
      1 * ::capnp::ELEMENTS, value);
}

inline  ::int16_t Position::Reader::getX() const {
  return _reader.getDataField< ::int16_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::int16_t Position::Builder::getX() {
  return _builder.getDataField< ::int16_t>(
      0 * ::capnp::ELEMENTS);
}
inline void Position::Builder::setX( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline  ::int16_t Position::Reader::getY() const {
  return _reader.getDataField< ::int16_t>(
      1 * ::capnp::ELEMENTS);
}

inline  ::int16_t Position::Builder::getY() {
  return _builder.getDataField< ::int16_t>(
      1 * ::capnp::ELEMENTS);
}
inline void Position::Builder::setY( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      1 * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t Item::Reader::getType() const {
  return _reader.getDataField< ::uint8_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::uint8_t Item::Builder::getType() {
  return _builder.getDataField< ::uint8_t>(
      0 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setType( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t Item::Reader::getSubtype() const {
  return _reader.getDataField< ::uint8_t>(
      1 * ::capnp::ELEMENTS);
}

inline  ::uint8_t Item::Builder::getSubtype() {
  return _builder.getDataField< ::uint8_t>(
      1 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setSubtype( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      1 * ::capnp::ELEMENTS, value);
}

inline  ::int8_t Item::Reader::getPlus() const {
  return _reader.getDataField< ::int8_t>(
      2 * ::capnp::ELEMENTS);
}

inline  ::int8_t Item::Builder::getPlus() {
  return _builder.getDataField< ::int8_t>(
      2 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setPlus( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      2 * ::capnp::ELEMENTS, value);
}

inline  ::int8_t Item::Reader::getPlus2() const {
  return _reader.getDataField< ::int8_t>(
      3 * ::capnp::ELEMENTS);
}

inline  ::int8_t Item::Builder::getPlus2() {
  return _builder.getDataField< ::int8_t>(
      3 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setPlus2( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      3 * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Item::Reader::getSpecial() const {
  return _reader.getDataField< ::int32_t>(
      1 * ::capnp::ELEMENTS);
}

inline  ::int32_t Item::Builder::getSpecial() {
  return _builder.getDataField< ::int32_t>(
      1 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setSpecial( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      1 * ::capnp::ELEMENTS, value);
}

inline  ::int16_t Item::Reader::getQuantity() const {
  return _reader.getDataField< ::int16_t>(
      4 * ::capnp::ELEMENTS);
}

inline  ::int16_t Item::Builder::getQuantity() {
  return _builder.getDataField< ::int16_t>(
      4 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setQuantity( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      4 * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t Item::Reader::getColour() const {
  return _reader.getDataField< ::uint8_t>(
      10 * ::capnp::ELEMENTS);
}

inline  ::uint8_t Item::Builder::getColour() {
  return _builder.getDataField< ::uint8_t>(
      10 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setColour( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      10 * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t Item::Reader::getRandom() const {
  return _reader.getDataField< ::uint8_t>(
      11 * ::capnp::ELEMENTS);
}

inline  ::uint8_t Item::Builder::getRandom() {
  return _builder.getDataField< ::uint8_t>(
      11 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setRandom( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      11 * ::capnp::ELEMENTS, value);
}

inline bool Item::Reader::hasPosition() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool Item::Builder::hasPosition() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::Position::Reader Item::Reader::getPosition() const {
  return ::capnp::_::PointerHelpers< ::Position>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::Position::Builder Item::Builder::getPosition() {
  return ::capnp::_::PointerHelpers< ::Position>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::Position::Pipeline Item::Pipeline::getPosition() {
  return  ::Position::Pipeline(_typeless.getPointerField(0));
}
inline void Item::Builder::setPosition( ::Position::Reader value) {
  ::capnp::_::PointerHelpers< ::Position>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::Position::Builder Item::Builder::initPosition() {
  return ::capnp::_::PointerHelpers< ::Position>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Item::Builder::adoptPosition(
    ::capnp::Orphan< ::Position>&& value) {
  ::capnp::_::PointerHelpers< ::Position>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::Position> Item::Builder::disownPosition() {
  return ::capnp::_::PointerHelpers< ::Position>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline  ::uint16_t Item::Reader::getLink() const {
  return _reader.getDataField< ::uint16_t>(
      6 * ::capnp::ELEMENTS);
}

inline  ::uint16_t Item::Builder::getLink() {
  return _builder.getDataField< ::uint16_t>(
      6 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setLink( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      6 * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t Item::Reader::getSlot() const {
  return _reader.getDataField< ::uint8_t>(
      14 * ::capnp::ELEMENTS);
}

inline  ::uint8_t Item::Builder::getSlot() {
  return _builder.getDataField< ::uint8_t>(
      14 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setSlot( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      14 * ::capnp::ELEMENTS, value);
}

inline bool Item::Reader::hasOriginalPlace() const {
  return !_reader.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline bool Item::Builder::hasOriginalPlace() {
  return !_builder.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline  ::LevelId::Reader Item::Reader::getOriginalPlace() const {
  return ::capnp::_::PointerHelpers< ::LevelId>::get(
      _reader.getPointerField(1 * ::capnp::POINTERS));
}
inline  ::LevelId::Builder Item::Builder::getOriginalPlace() {
  return ::capnp::_::PointerHelpers< ::LevelId>::get(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}
inline  ::LevelId::Pipeline Item::Pipeline::getOriginalPlace() {
  return  ::LevelId::Pipeline(_typeless.getPointerField(1));
}
inline void Item::Builder::setOriginalPlace( ::LevelId::Reader value) {
  ::capnp::_::PointerHelpers< ::LevelId>::set(
      _builder.getPointerField(1 * ::capnp::POINTERS), value);
}
inline  ::LevelId::Builder Item::Builder::initOriginalPlace() {
  return ::capnp::_::PointerHelpers< ::LevelId>::init(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}
inline void Item::Builder::adoptOriginalPlace(
    ::capnp::Orphan< ::LevelId>&& value) {
  ::capnp::_::PointerHelpers< ::LevelId>::adopt(
      _builder.getPointerField(1 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::LevelId> Item::Builder::disownOriginalPlace() {
  return ::capnp::_::PointerHelpers< ::LevelId>::disown(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}

inline  ::int16_t Item::Reader::getOriginalMonNum() const {
  return _reader.getDataField< ::int16_t>(
      8 * ::capnp::ELEMENTS);
}

inline  ::int16_t Item::Builder::getOriginalMonNum() {
  return _builder.getDataField< ::int16_t>(
      8 * ::capnp::ELEMENTS);
}
inline void Item::Builder::setOriginalMonNum( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      8 * ::capnp::ELEMENTS, value);
}

inline bool Item::Reader::hasInscription() const {
  return !_reader.getPointerField(2 * ::capnp::POINTERS).isNull();
}
inline bool Item::Builder::hasInscription() {
  return !_builder.getPointerField(2 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Item::Reader::getInscription() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader.getPointerField(2 * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Item::Builder::getInscription() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder.getPointerField(2 * ::capnp::POINTERS));
}
inline void Item::Builder::setInscription( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder.getPointerField(2 * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Item::Builder::initInscription(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder.getPointerField(2 * ::capnp::POINTERS), size);
}
inline void Item::Builder::adoptInscription(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder.getPointerField(2 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Item::Builder::disownInscription() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder.getPointerField(2 * ::capnp::POINTERS));
}


#endif  // CAPNP_INCLUDED_ba3b5128ca47fcc0_
