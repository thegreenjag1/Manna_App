// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/UnoCore/1.4.3/Source/Uno/Content/Splines/KeyframedSpline.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// public struct KeyframedSpline<TValue, TData>.Key :10
// {
uStructType* KeyframedSpline__Key_typeof();
void KeyframedSpline__Key__ctor__fn(uTRef __this, uType* __type, double* time, void* value);
void KeyframedSpline__Key__New1_fn(uType* __type, double* time, void* value, uTRef __retval);

template<class TData>
struct KeyframedSpline__Key
{
    double Time;
    TData Value;

    void ctor_(uType* __type, double time, TData value) { KeyframedSpline__Key__ctor__fn(this, __type, &time, uConstrain(__type->T(1), value)); }
};

template<class TData>
KeyframedSpline__Key<TData> KeyframedSpline__Key__New1(uType* __type, double time, TData value) { KeyframedSpline__Key<TData> __retval; return KeyframedSpline__Key__New1_fn(__type, &time, uConstrain(__type->T(1), value), &__retval), __retval; }
// }

}}}} // ::g::Uno::Content::Splines
