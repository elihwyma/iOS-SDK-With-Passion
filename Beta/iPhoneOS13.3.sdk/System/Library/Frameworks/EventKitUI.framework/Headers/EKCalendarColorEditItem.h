/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray;

@interface EKCalendarColorEditItem : EKCalendarEditItem

{
    NSMutableArray *_cells;
    unsigned long long _checkedRow;
}

@property (nonatomic, readonly) NSMutableArray *cells;

- (void)reset;
- (id)headerTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (_Bool)saveStateToCalendar:(id)arg1;
- (_Bool)configureWithCalendar:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)_cellWithText:(id)arg1;
- (id)_cellForSymbolicColor:(id)arg1;
- (id)_cellForColor:(id)arg1;

@end
