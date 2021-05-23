/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKRecurrenceChooserController.h>

@class EKRecurrenceMonthDayChooserController, EKRecurrenceOrdinalChooserController, UITableViewCell;

@protocol EKRecurrenceChooserControllerDelegate;

@interface EKRecurrenceMonthlyChooserController : EKRecurrenceChooserController

{
    EKRecurrenceMonthDayChooserController *_monthDayChooser;
    EKRecurrenceOrdinalChooserController *_ordinalChooser;
    id <EKRecurrenceChooserControllerDelegate> _delegate;
    long long _selectedRow;
    UITableViewCell *_onEachCell;
    UITableViewCell *_onTheCell;
}

@property (nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence;

- (void)setDelegate:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (long long)numberOfRows;
- (long long)frequency;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (id)_currentChooser;
- (void)_selectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (_Bool)drawBackgroundForRow:(long long)arg1;
- (void)rowTapped:(long long)arg1;

@end
