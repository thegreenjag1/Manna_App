// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.4.0/ThreadWorker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker__Fence;}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ThreadWorker.Fence :207
// {
uType* ThreadWorker__Fence_typeof();
void ThreadWorker__Fence__ctor__fn(ThreadWorker__Fence* __this);
void ThreadWorker__Fence__get_IsSignaled_fn(ThreadWorker__Fence* __this, bool* __retval);
void ThreadWorker__Fence__New1_fn(ThreadWorker__Fence** __retval);
void ThreadWorker__Fence__Signal_fn(ThreadWorker__Fence* __this, ::g::Fuse::Scripting::Context* context);

struct ThreadWorker__Fence : uObject
{
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _signaled;

    void ctor_();
    bool IsSignaled();
    void Signal(::g::Fuse::Scripting::Context* context);
    static ThreadWorker__Fence* New1();
};
// }

}}} // ::g::Fuse::Scripting
