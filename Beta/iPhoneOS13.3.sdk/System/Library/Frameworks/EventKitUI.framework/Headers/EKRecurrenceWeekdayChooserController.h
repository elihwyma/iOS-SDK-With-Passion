/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKRecurrenceChooserController.h>

@class NSArray, NSMutableArray;

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController

{
    NSMutableArray *_selectedRows;
    NSMutableArray *_cells;
    NSArray *_daysOfTheWeek;
}

@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) NSArray *daysOfTheWeek;

- (id)initWithDate:(id)arg1;
- (long long)numberOfRows;
- (long long)frequency;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (void)rowTapped:(long long)arg1;
- (void)_setCell:(id)arg1 selected:(_Bool)arg2;
- (int)_dayMask;

@end
