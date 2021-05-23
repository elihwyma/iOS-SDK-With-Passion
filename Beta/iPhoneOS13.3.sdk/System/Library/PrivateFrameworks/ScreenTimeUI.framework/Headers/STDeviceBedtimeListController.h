/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSArray, NSString, PSSpecifier, STDeviceBedtime, STUIUser;

@protocol STDeviceBedtimeListControllerDelegate, STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STDeviceBedtimeListController : PSListController

{
    _Bool _canAskForMoreTime;
    id <STDeviceBedtimeListControllerDelegate> _delegate;
    id <STRootViewModelCoordinator> _coordinator;
    STDeviceBedtime *_bedtime;
    STUIUser *_affectedUser;
    NSArray *_orderedWeekdayIndexes;
    NSArray *_orderedLocalizedWeekdayNames;
    PSSpecifier *_deviceBedtimeSpecifier;
    PSSpecifier *_informativeTextGroupSpecifier;
    PSSpecifier *_everyDaySpecifier;
    PSSpecifier *_customizeDaysSpecifier;
    PSSpecifier *_startTimeSpecifier;
    PSSpecifier *_endTimeSpecifier;
    PSSpecifier *_startTimePickerSpecifier;
    PSSpecifier *_endTimePickerSpecifier;
    NSArray *_weekdaySpecifiers;
    PSSpecifier *_selectedTimeSpecifier;
    PSSpecifier *_atBedtimeGroupSpecifier;
    PSSpecifier *_atBedtimeSpecifier;
}

@property (readonly) NSArray *orderedWeekdayIndexes;
@property (readonly) NSArray *orderedLocalizedWeekdayNames;
@property (retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier;
@property (retain, nonatomic) PSSpecifier *informativeTextGroupSpecifier;
@property (retain) PSSpecifier *everyDaySpecifier;
@property (retain) PSSpecifier *customizeDaysSpecifier;
@property (retain, nonatomic) PSSpecifier *startTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *endTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *startTimePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *endTimePickerSpecifier;
@property (retain) NSArray *weekdaySpecifiers;
@property (retain, nonatomic) PSSpecifier *selectedTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *atBedtimeGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *atBedtimeSpecifier;
@property (readonly) _Bool shouldShowCompatibilityAlert;
@property (weak, nonatomic) id <STDeviceBedtimeListControllerDelegate> delegate;
@property (retain, nonatomic) id <STRootViewModelCoordinator> coordinator;
@property (copy, nonatomic) STDeviceBedtime *bedtime;
@property (retain, nonatomic) STUIUser *affectedUser;
@property (nonatomic) _Bool canAskForMoreTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willResignActive;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)datePickerChanged:(id)arg1;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (id)datePickerForSpecifier:(id)arg1;
- (id)timeFooterText;
- (void)_didEndEditingDailySchedule:(id)arg1;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)arg1;
- (void)_didFinishEditingBedtime;
- (void)setDeviceBedtimeEnabled:(id)arg1 specifier:(id)arg2;
- (id)deviceBedtimeEnabled:(id)arg1;
- (id)_simpleStartTime:(id)arg1;
- (id)_simpleEndTime:(id)arg1;
- (id)_customScheduleTime:(id)arg1;
- (void)_showCustomizeDailyScheduleListController:(id)arg1;
- (id)atDowntimeFooterText;
- (void)setAskForMoreTime:(id)arg1 specifier:(id)arg2;
- (id)askForMoreTime:(id)arg1;

@end
