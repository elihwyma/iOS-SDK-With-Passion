/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKValueRange, NSArray, NSCalendar, NSDate, NSDateComponents;

@interface HKDateIntervalCache : NSObject

{
    NSDate *_minAnchorDate;
    NSDate *_maxAnchorDate;
    double _previousTimeInterval;
    _Bool _datesInvalidated;
    NSArray *_cachedDates;
    NSCalendar *_currentCalendarOverride;
    unsigned long long _dateAnchorUnit;
    NSDateComponents *_referenceSpacingComponents;
    NSDateComponents *_dateSpacingComponents;
    NSDateComponents *_minorDateSpacingComponents;
    HKValueRange *_dateRange;
}

@property (nonatomic) unsigned long long dateAnchorUnit;
@property (retain, nonatomic) NSDateComponents *referenceSpacingComponents;
@property (retain, nonatomic) NSDateComponents *dateSpacingComponents;
@property (retain, nonatomic) NSDateComponents *minorDateSpacingComponents;
@property (nonatomic, readonly) HKValueRange *dateRange;
@property (nonatomic, readonly) NSArray *datePoints;

- (id)init;
- (id)_currentCalendar;
- (_Bool)setDateRange:(id)arg1;
- (void)_updateAnchorDates;
- (void)_invalidateCachedDates;
- (id)_minAnchorDateFromDate:(id)arg1;
- (id)_maxAnchorDateFromDate:(id)arg1;
- (id)_generateCachedDates;
- (unsigned long long)_minimumCalendarUnitForComponents:(id)arg1;
- (id)_nextDateForDate:(id)arg1 components:(id)arg2 calendar:(id)arg3;
- (id)_firstDateAfter:(id)arg1 matchingComponents:(id)arg2 calendar:(id)arg3;
- (void)_setCurrentCalendar:(id)arg1;

@end
