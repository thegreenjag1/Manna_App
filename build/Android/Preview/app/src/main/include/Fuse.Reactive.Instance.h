// This file was generated based on '../../../Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.IDeferred.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Instance;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Instance :169
// {
::g::Fuse::Reactive::Instantiator_type* Instance_typeof();
void Instance__ctor_5_fn(Instance* __this);
void Instance__New4_fn(Instance** __retval);

struct Instance : ::g::Fuse::Reactive::Instantiator
{
    void ctor_5();
    static Instance* New4();
};
// }

}}} // ::g::Fuse::Reactive
