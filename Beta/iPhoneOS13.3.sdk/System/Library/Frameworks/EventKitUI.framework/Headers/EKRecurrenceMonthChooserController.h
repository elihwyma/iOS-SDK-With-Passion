/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSArray, NSMutableSet;

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController

{
    NSMutableSet *_monthsOfTheYearSet;
    _Bool _prohibitsMultipleMonthsInYearlyRecurrence;
}

@property (retain, nonatomic) NSArray *monthsOfTheYear;
@property (nonatomic) _Bool prohibitsMultipleMonthsInYearlyRecurrence;

- (id)initWithDate:(id)arg1;
- (void)prepareForDisplay;
- (id)tableViewCell;
- (long long)frequency;
- (void)refreshCells;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (id)cellLabels;
- (long long)gridViewType;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;

@end
