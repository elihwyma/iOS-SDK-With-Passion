/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <Preferences/PSListController.h>

@class CBClient, NSDateFormatter, PSSpecifier;

__attribute__((visibility("hidden")))
@interface DBSColorScheduleController : PSListController

{
    CBClient *_brightnessClient;
    PSSpecifier *_radioGroup;
    PSSpecifier *_sunsetToSunriseRadioSpecifier;
    PSSpecifier *_scheduleRadioSpecifier;
    PSSpecifier *_timeGroup;
    PSSpecifier *_startTimeSpecifier;
    PSSpecifier *_endTimeSpecifier;
    PSSpecifier *_startTimePickerSpecifier;
    PSSpecifier *_endTimePickerSpecifier;
    PSSpecifier *_selectedTimeSpecifier;
    NSDateFormatter *_timeFormatter;
    _Bool _showingScheduleSpecifiers;
}

- (void)dealloc;
- (id)startTime;
- (id)endTime;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)datePickerChanged:(id)arg1;
- (id)specifiers;
- (id)datePickerForSpecifier:(id)arg1;
- (void)handleBlueLightStatusChanged:(CDStruct_a90444bf *)arg1;
- (void)showScheduleSpecifiers:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showPickerSpecifierForSpecifier:(id)arg1;
- (int)blueLightMode;

@end
