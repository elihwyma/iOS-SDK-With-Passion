/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class EKRecurrenceChooserController, EKRecurrenceMonthChooserController, EKRecurrenceMonthlyChooserController, EKRecurrenceOrdinalChooserController, EKRecurrenceRule, EKRecurrenceWeekdayChooserController, EKUICustomRecurrenceIntervalViewController, NSDate, NSString, NSTimeZone, UIPickerView, UISwitch, UITableView, UITableViewCell;

@interface EKUICustomRecurrenceViewController : UIViewController

{
    long long _cachedFrequency;
    long long _cachedInterval;
    EKRecurrenceRule *_cachedRecurrenceRule;
    _Bool _showingFrequencyPicker;
    _Bool _showingIntervalPicker;
    UITableViewCell *_frequencySummaryCell;
    UITableViewCell *_intervalSummaryCell;
    _Bool _useClearBackground;
    _Bool _prohibitsYearlyRecurrenceInterval;
    CDUnknownBlockType _completionBlock;
    UITableView *_tableView;
    EKRecurrenceChooserController *_currentChooser;
    EKRecurrenceWeekdayChooserController *_weeklyChooser;
    EKRecurrenceMonthlyChooserController *_monthlyChooser;
    EKRecurrenceMonthChooserController *_yearlyChooser;
    EKRecurrenceOrdinalChooserController *_yearlyOrdinalChooser;
    NSDate *_startDate;
    NSTimeZone *_timeZone;
    UIPickerView *_frequencyPickerView;
    EKUICustomRecurrenceIntervalViewController *_intervalPickerViewController;
    UISwitch *_yearOrdinalSwitch;
    NSString *_recurrenceSummaryString;
}

@property (copy) CDUnknownBlockType completionBlock;
@property (retain) UITableView *tableView;
@property (weak) EKRecurrenceChooserController *currentChooser;
@property (retain) EKRecurrenceWeekdayChooserController *weeklyChooser;
@property (retain) EKRecurrenceMonthlyChooserController *monthlyChooser;
@property (retain) EKRecurrenceMonthChooserController *yearlyChooser;
@property (retain) EKRecurrenceOrdinalChooserController *yearlyOrdinalChooser;
@property (retain) NSDate *startDate;
@property (retain) NSTimeZone *timeZone;
@property (retain) UIPickerView *frequencyPickerView;
@property (retain) EKUICustomRecurrenceIntervalViewController *intervalPickerViewController;
@property (retain) UISwitch *yearOrdinalSwitch;
@property (copy) NSString *recurrenceSummaryString;
@property (nonatomic) _Bool prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence;
@property _Bool prohibitsYearlyRecurrenceInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)isRecurrenceRuleOrdinal:(id)arg1;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)recurrenceRule;
- (void)setRecurrenceRule:(id)arg1;
- (id)initWithStartDate:(id)arg1 timeZone:(id)arg2 clearBackground:(_Bool)arg3;
- (void)recurrenceChooser:(id)arg1 wantsRowReload:(long long)arg2;
- (void)recurrenceChooserUpdated:(id)arg1;
- (void)_createChoosersAndControls;
- (struct CGSize)calculatePreferredContentSize;
- (void)_yearOrdinalSwitchChanged:(id)arg1;
- (void)_frequencyPickerViewUpdated;
- (long long)_numberOfRowsForSection:(long long)arg1;
- (long long)_tagForIndexPath:(id)arg1;
- (id)_stringForFrequency:(long long)arg1;
- (id)_stringForFrequency:(long long)arg1 interval:(long long)arg2;
- (void)_toggleInlineSpinnerForTag:(long long)arg1;
- (void)_updateIntervalPicker;
- (void)_updateRecurrenceRule;
- (void)_collapseAllPickers;
- (void)setRecurrenceRule:(id)arg1 shouldUpdatePickers:(_Bool)arg2;
- (void)_updateSummaryLabel;
- (void)_refreshCacheAndPickers;
- (void)_updateCustomPickerView;
- (id)_chooserForFrequency:(long long)arg1;
- (void)_updateTableSectionsFromFrequency:(long long)arg1 toFrequency:(long long)arg2;
- (void)_updateFrequencyRows;
- (void)_setShowingFrequencyPicker:(_Bool)arg1;
- (void)_setShowingIntervalPicker:(_Bool)arg1;
- (void)recurrenceChooserWantsReload:(id)arg1;

@end
