/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSDateInterval.h>

@interface NSDateInterval (HealthKit)

+ (id)hk_dateIntervalWithStart:(double)arg1 end:(double)arg2;
+ (id)hk_instantaneousDateIntervalWithDate:(id)arg1;
+ (id)hk_dateIntervalWithAnchor:(id)arg1 startOffset:(double)arg2 endOffset:(double)arg3;
+ (id)hk_dateIntervalForDayFromDate:(id)arg1 calendar:(id)arg2;

- (_Bool)hk_intersectsDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)hk_containsTime:(double)arg1;
- (id)hk_prettyString;

@end
