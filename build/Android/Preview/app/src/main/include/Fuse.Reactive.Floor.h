// This file was generated based on '../../../Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Floor;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Floor :303
// {
::g::Fuse::Reactive::UnaryOperator_type* Floor_typeof();
void Floor__ctor_3_fn(Floor* __this, ::g::Fuse::Reactive::Expression* operand);
void Floor__New1_fn(::g::Fuse::Reactive::Expression* operand, Floor** __retval);

struct Floor : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Floor* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive