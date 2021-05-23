/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSDateComponents, NSString, PSSpecifier, STBlueprintScheduleCustomDayItem;

__attribute__((visibility("hidden")))
@interface STCustomizeDailyScheduleListController : PSListController

{
    _Bool _weekdayEnabled;
    STBlueprintScheduleCustomDayItem *_dailySchedule;
    unsigned long long _weekdayIndex;
    NSDateComponents *_minimumStartTime;
    PSSpecifier *_dailyScheduleGroupSpecifier;
    PSSpecifier *_startTimeSpecifier;
    PSSpecifier *_startTimePickerSpecifier;
    PSSpecifier *_endTimeSpecifier;
    PSSpecifier *_endTimePickerSpecifier;
}

@property (getter=isWeekdayEnabled) _Bool weekdayEnabled;
@property (copy) STBlueprintScheduleCustomDayItem *dailySchedule;
@property (readonly) unsigned long long weekdayIndex;
@property (copy, readonly) NSDateComponents *minimumStartTime;
@property (readonly) PSSpecifier *dailyScheduleGroupSpecifier;
@property (readonly) PSSpecifier *startTimeSpecifier;
@property (readonly) PSSpecifier *startTimePickerSpecifier;
@property (readonly) PSSpecifier *endTimeSpecifier;
@property (readonly) PSSpecifier *endTimePickerSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)willResignActive;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)datePickerChanged:(id)arg1;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (id)datePickerForSpecifier:(id)arg1;
- (id)_startTime:(id)arg1;
- (id)_endTime:(id)arg1;
- (void)_didEndEditingDailySchedule:(_Bool)arg1;
- (void)_setWeekdayEnabled:(id)arg1 specifier:(id)arg2;
- (id)_getWeekdayEnabled:(id)arg1;
- (void)_updateTimeSpecifierDetailTextLabelColors:(_Bool)arg1 selectedSpecifier:(id)arg2 unselectedSpecifier:(id)arg3;
- (id)initWithDailySchedule:(id)arg1 weekdayIndex:(unsigned long long)arg2 weekdayName:(id)arg3 minimumStartTime:(id)arg4;

@end
