// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Log;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Log :351
// {
::g::Fuse::Reactive::UnaryOperator_type* Log_typeof();
void Log__ctor_3_fn(Log* __this, ::g::Fuse::Reactive::Expression* operand);
void Log__New1_fn(::g::Fuse::Reactive::Expression* operand, Log** __retval);

struct Log : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Log* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
