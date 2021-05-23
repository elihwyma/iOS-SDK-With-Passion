/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController

{
    NSMutableSet *_daysOfTheMonthSet;
    _Bool _prohibitsMultipleDaysInMonthlyRecurrence;
}

@property (nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence;

- (id)initWithDate:(id)arg1;
- (void)prepareForDisplay;
- (long long)frequency;
- (id)daysOfTheMonth;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)refreshCells;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (id)cellLabels;
- (long long)gridViewType;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;

@end
