// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/Fuse.Controls.DatePicker/1.4.0/Android/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IDatePickerView.h>
#include <Fuse.Controls.Native.-98938546.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.DateTime.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct DatePickerView;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class DatePickerView :17
// {
struct DatePickerView_type : ::g::Fuse::Controls::Native::Android::LeafView_type
{
    ::g::Fuse::Controls::IDatePickerView interface3;
};

DatePickerView_type* DatePickerView_typeof();
void DatePickerView__ctor_9_fn(DatePickerView* __this, uObject* host);
void DatePickerView__Create_fn(::g::Java::Object** __retval);
void DatePickerView__Dispose_fn(DatePickerView* __this);
void DatePickerView__GetApiLevel_fn(int* __retval);
void DatePickerView__GetDateInMsSince1970InUtc_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* __retval);
void DatePickerView__Init_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle);
void DatePickerView__get_MaxValue_fn(DatePickerView* __this, ::g::Uno::DateTime* __retval);
void DatePickerView__set_MaxValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value);
void DatePickerView__get_MinValue_fn(DatePickerView* __this, ::g::Uno::DateTime* __retval);
void DatePickerView__set_MinValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value);
void DatePickerView__New5_fn(uObject* host, DatePickerView** __retval);
void DatePickerView__OnRooted_fn(DatePickerView* __this);
void DatePickerView__OnSizeChanged_fn(DatePickerView* __this);
void DatePickerView__OnUnrooted_fn(DatePickerView* __this);
void DatePickerView__OnValueChanged_fn(DatePickerView* __this);
void DatePickerView__PollViewValue_fn(DatePickerView* __this);
void DatePickerView__SetDate_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc);
void DatePickerView__SetMaxValue_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc);
void DatePickerView__SetMinValue_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc);
void DatePickerView__Update_fn(DatePickerView* __this);
void DatePickerView__UpdatePollValueCache_fn(DatePickerView* __this);
void DatePickerView__UpdateWriteback_fn(DatePickerView* __this);
void DatePickerView__get_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* __retval);
void DatePickerView__set_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* value);

struct DatePickerView : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong<uObject*> _host;
    ::g::Uno::DateTime _pollValueCache;
    int writebackFrameCounter;
    ::g::Uno::DateTime _minValue;
    ::g::Uno::DateTime _maxValue;

    void ctor_9(uObject* host);
    int64_t GetDateInMsSince1970InUtc(::g::Java::Object* datePickerHandle);
    void Init(::g::Java::Object* datePickerHandle);
    ::g::Uno::DateTime MaxValue();
    void MaxValue(::g::Uno::DateTime value);
    ::g::Uno::DateTime MinValue();
    void MinValue(::g::Uno::DateTime value);
    void OnRooted();
    void OnUnrooted();
    void OnValueChanged();
    void PollViewValue();
    void SetDate(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc);
    void SetMaxValue(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc);
    void SetMinValue(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc);
    void Update();
    void UpdatePollValueCache();
    void UpdateWriteback();
    ::g::Uno::DateTime Value();
    void Value(::g::Uno::DateTime value);
    static ::g::Java::Object* Create();
    static int GetApiLevel();
    static DatePickerView* New5(uObject* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
