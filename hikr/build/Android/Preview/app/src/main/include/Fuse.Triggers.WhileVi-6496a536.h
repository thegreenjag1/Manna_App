// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/Fuse.Controls.ScrollView/1.4.0/Triggers/WhileVisibleInScrollView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileVisibleInScrollView;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileVisibleInScrollView :52
// {
::g::Fuse::Triggers::Trigger_type* WhileVisibleInScrollView_typeof();
void WhileVisibleInScrollView__ctor_6_fn(WhileVisibleInScrollView* __this);
void WhileVisibleInScrollView__get_Distance_fn(WhileVisibleInScrollView* __this, float* __retval);
void WhileVisibleInScrollView__set_Distance_fn(WhileVisibleInScrollView* __this, float* value);
void WhileVisibleInScrollView__get_Mode_fn(WhileVisibleInScrollView* __this, int* __retval);
void WhileVisibleInScrollView__set_Mode_fn(WhileVisibleInScrollView* __this, int* value);
void WhileVisibleInScrollView__New2_fn(WhileVisibleInScrollView** __retval);
void WhileVisibleInScrollView__OnElementPlaced_fn(WhileVisibleInScrollView* __this, uObject* s, uObject* args);
void WhileVisibleInScrollView__OnRooted_fn(WhileVisibleInScrollView* __this);
void WhileVisibleInScrollView__OnScrollPositionChanged_fn(WhileVisibleInScrollView* __this, uObject* s, uObject* args);
void WhileVisibleInScrollView__OnUnrooted_fn(WhileVisibleInScrollView* __this);
void WhileVisibleInScrollView__get_RelativeTo_fn(WhileVisibleInScrollView* __this, uObject** __retval);
void WhileVisibleInScrollView__set_RelativeTo_fn(WhileVisibleInScrollView* __this, uObject* value);
void WhileVisibleInScrollView__Update_fn(WhileVisibleInScrollView* __this);

struct WhileVisibleInScrollView : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Controls::ScrollViewBase*> _scrollable;
    uStrong< ::g::Fuse::Elements::Element*> _element;
    float _distance;
    uStrong<uObject*> _relativeTo;
    int _mode;

    void ctor_6();
    float Distance();
    void Distance(float value);
    int Mode();
    void Mode(int value);
    void OnElementPlaced(uObject* s, uObject* args);
    void OnScrollPositionChanged(uObject* s, uObject* args);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    void Update();
    static WhileVisibleInScrollView* New2();
};
// }

}}} // ::g::Fuse::Triggers
