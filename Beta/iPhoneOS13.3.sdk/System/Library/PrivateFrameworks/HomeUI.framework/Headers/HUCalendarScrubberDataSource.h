/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSHashTable;

@interface HUCalendarScrubberDataSource : NSObject

{
    NSArray *_dates;
    NSDate *_startDate;
    NSDate *_endDate;
    NSHashTable *_changeObservers;
}

@property (retain, nonatomic) NSArray *dates;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSHashTable *changeObservers;

- (id)init;
- (void)addChangeObserver:(id)arg1;
- (void)removeChangeObserver:(id)arg1;
- (unsigned long long)totalNumberOfWeeks;
- (long long)dayOfMonthForItemAtIndexPath:(id)arg1;
- (id)shortMonthNameForItemAtIndexPath:(id)arg1;
- (id)dayOfWeekForItemAtIndexPath:(id)arg1;
- (_Bool)eventExistsForItemAtIndexPath:(id)arg1;
- (id)initWithDates:(id)arg1;
- (id)indexPathForDate:(id)arg1;
- (id)dateAtIndexPath:(id)arg1;
- (void)reloadWithDates:(id)arg1;
- (void)_updateDateBoundariesIfNeeded;
- (_Bool)eventExistsOnDate:(id)arg1;

@end
