// This file was generated based on '../../../Local/Fusetools/Packages/Fuse.Animations/1.4.0/Mixer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.MasterBase-1.h>
#include <Fuse.Transform.h>
namespace g{namespace Fuse{namespace Animations{struct FastMatrixTransform;}}}
namespace g{namespace Fuse{namespace Animations{struct MasterTransform;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class MasterTransform :329
// {
::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof();
void MasterTransform__ctor_1_fn(MasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase);
void MasterTransform__OnActive_fn(MasterTransform* __this);
void MasterTransform__OnInactive_fn(MasterTransform* __this);
void MasterTransform__get_RestValue_fn(MasterTransform* __this, ::g::Fuse::Transform** __retval);

struct MasterTransform : ::g::Fuse::Animations::MasterBase
{
    uStrong< ::g::Fuse::Visual*> Visual;
    uStrong< ::g::Fuse::Animations::FastMatrixTransform*> FMT;
    static uSStrong< ::g::Fuse::Transform*> identity_;
    static uSStrong< ::g::Fuse::Transform*>& identity() { return identity_; }

    void ctor_1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase);
};
// }

}}} // ::g::Fuse::Animations
