// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/UnoCore/1.4.3/Source/Uno/Diagnostics/ProfileData.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Diagnostics{struct IdMap;}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileData;}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public sealed class ProfileData :5
// {
uType* ProfileData_typeof();
void ProfileData__ctor__fn(ProfileData* __this);
void ProfileData__New1_fn(ProfileData** __retval);

struct ProfileData : uObject
{
    uStrong< ::g::Uno::Collections::List*> FunctionIds;
    uStrong< ::g::Uno::Collections::List*> ProfileEvents;
    uStrong< ::g::Uno::Diagnostics::IdMap*> TypeMap;

    void ctor_();
    static ProfileData* New1();
};
// }

}}} // ::g::Uno::Diagnostics
