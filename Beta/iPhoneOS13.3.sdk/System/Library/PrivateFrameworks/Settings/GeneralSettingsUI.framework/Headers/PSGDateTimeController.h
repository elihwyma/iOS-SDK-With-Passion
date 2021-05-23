/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

@class NSIndexPath, NSTimer, PSGWallClockMinuteTimer, PSSpecifier;

@interface PSGDateTimeController : PSListController

{
    NSIndexPath *_setDateAndTimeIndexPath;
    NSTimer *_timer;
    _Bool _localeForces24HourTime;
    struct __CFDateFormatter *_dateFormatter;
    struct __CFDateFormatter *_timeFormatter;
    PSSpecifier *_timeZoneSpecifier;
    PSSpecifier *_timePickerSpecifier;
    PSSpecifier *_currentTimeSpecifier;
    PSGWallClockMinuteTimer *_minuteTimer;
    PSSpecifier *_ampmToggleSpecifier;
}

@property (retain, nonatomic) PSGWallClockMinuteTimer *minuteTimer;
@property (retain, nonatomic) PSSpecifier *ampmToggleSpecifier;
@property (retain) PSSpecifier *timeZoneSpecifier;
@property (retain) PSSpecifier *timePickerSpecifier;
@property (retain) PSSpecifier *currentTimeSpecifier;

- (id)init;
- (void)dealloc;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)datePickerChanged:(id)arg1;
- (id)specifiers;
- (void)localeChanged:(id)arg1;
- (void)effectiveSettingsChanged:(id)arg1;
- (void)newCarrierNotification;
- (void)significantTimeChange:(id)arg1;
- (void)_createDateTimeFormatters;
- (void)_updateCurrentTime;
- (id)useAutomaticTime:(id)arg1;
- (void)_setSpecifier:(id)arg1 valueEnabled:(_Bool)arg2;
- (id)makeCurrentTimeSpecifier;
- (void)setAutomaticTimeFooter;
- (id)currentDateString;
- (id)valueForTime:(id)arg1;
- (_Bool)shouldDisplayTimezoneSpinner;
- (id)makeTimePickerSpecifier;
- (id)is24HourTime:(id)arg1;
- (void)reloadTimezone;
- (id)currentTimeString;
- (void)setTimeZoneValue:(id)arg1 specifier:(id)arg2;
- (void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2;
- (id)isShowingDateInStatusBar:(id)arg1;
- (void)setShowDateInStatusBar:(id)arg1 specifier:(id)arg2;
- (id)isShowingAMPMInStatusBar:(id)arg1;
- (void)setShowAMPMInStatusBar:(id)arg1 specifier:(id)arg2;
- (void)set24HourTime:(id)arg1 specifier:(id)arg2;
- (id)timeZoneValue:(id)arg1;
- (void)loadTimeZoneController:(id)arg1;

@end
