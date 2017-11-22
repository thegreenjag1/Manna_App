// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/UnoCore/1.4.3/Source/Uno/Buffer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Byte4;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{

// public sealed class Buffer :8
// {
uType* Buffer_typeof();
void Buffer__ctor__fn(Buffer* __this, uArray* data);
void Buffer__ctor_2_fn(Buffer* __this, uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly);
void Buffer__ctor_3_fn(Buffer* __this, int* sizeInBytes);
void Buffer__GetByte_fn(Buffer* __this, int* offset, uint8_t* __retval);
void Buffer__GetFloat_fn(Buffer* __this, int* offset, bool* littleEndian, float* __retval);
void Buffer__GetFloat2_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::Float2* __retval);
void Buffer__get_GetHandle_fn(Buffer* __this, uArray** __retval);
void Buffer__GetUInt_fn(Buffer* __this, int* offset, bool* littleEndian, uint32_t* __retval);
void Buffer__get_Item_fn(Buffer* __this, int* offset, uint8_t* __retval);
void Buffer__set_Item_fn(Buffer* __this, int* offset, uint8_t* value);
void Buffer__New1_fn(uArray* data, Buffer** __retval);
void Buffer__New3_fn(uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly, Buffer** __retval);
void Buffer__New4_fn(int* sizeInBytes, Buffer** __retval);
void Buffer__Set_fn(Buffer* __this, int* offset, uint8_t* value);
void Buffer__Set2_fn(Buffer* __this, int* offset, ::g::Uno::Byte4* value);
void Buffer__Set4_fn(Buffer* __this, int* offset, float* value, bool* littleEndian);
void Buffer__Set5_fn(Buffer* __this, int* offset, ::g::Uno::Float2* value, bool* littleEndian);
void Buffer__Set6_fn(Buffer* __this, int* offset, ::g::Uno::Float3* value, bool* littleEndian);
void Buffer__Set8_fn(Buffer* __this, int* offset, ::g::Uno::Float4* value, bool* littleEndian);
void Buffer__Set18_fn(Buffer* __this, int* offset, int16_t* value, bool* littleEndian);
void Buffer__Set23_fn(Buffer* __this, int* offset, uint16_t* value, bool* littleEndian);
void Buffer__get_SetHandle_fn(Buffer* __this, uArray** __retval);
void Buffer__get_SizeInBytes_fn(Buffer* __this, int* __retval);

struct Buffer : uObject
{
    int _offset;
    int _sizeInBytes;
    bool _isReadOnly;
    uStrong<uArray*> _data;

    void ctor_(uArray* data);
    void ctor_2(uArray* data, int offset, int sizeInBytes, bool isReadOnly);
    void ctor_3(int sizeInBytes);
    uint8_t GetByte(int offset);
    float GetFloat(int offset, bool littleEndian);
    ::g::Uno::Float2 GetFloat2(int offset, bool littleEndian);
    uArray* GetHandle();
    uint32_t GetUInt(int offset, bool littleEndian);
    uint8_t Item(int offset);
    void Item(int offset, uint8_t value);
    void Set(int offset, uint8_t value);
    void Set2(int offset, ::g::Uno::Byte4 value);
    void Set4(int offset, float value, bool littleEndian);
    void Set5(int offset, ::g::Uno::Float2 value, bool littleEndian);
    void Set6(int offset, ::g::Uno::Float3 value, bool littleEndian);
    void Set8(int offset, ::g::Uno::Float4 value, bool littleEndian);
    void Set18(int offset, int16_t value, bool littleEndian);
    void Set23(int offset, uint16_t value, bool littleEndian);
    uArray* SetHandle();
    int SizeInBytes();
    static Buffer* New1(uArray* data);
    static Buffer* New3(uArray* data, int offset, int sizeInBytes, bool isReadOnly);
    static Buffer* New4(int sizeInBytes);
};
// }

}} // ::g::Uno
