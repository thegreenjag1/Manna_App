// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{struct FailedToConnectToSimulator;}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class FailedToConnectToSimulator :67
// {
::g::Uno::Exception_type* FailedToConnectToSimulator_typeof();
void FailedToConnectToSimulator__ctor_3_fn(FailedToConnectToSimulator* __this, uObject* innerExceptions);
void FailedToConnectToSimulator__New4_fn(uObject* innerExceptions, FailedToConnectToSimulator** __retval);

struct FailedToConnectToSimulator : ::g::Uno::Exception
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> InnerExceptions;

    void ctor_3(uObject* innerExceptions);
    static FailedToConnectToSimulator* New4(uObject* innerExceptions);
};
// }

}}} // ::g::Outracks::Simulator
