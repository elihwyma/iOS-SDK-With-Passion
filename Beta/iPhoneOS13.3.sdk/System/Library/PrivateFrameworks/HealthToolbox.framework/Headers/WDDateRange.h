/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface WDDateRange : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

+ (id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)dateRangeWithTimePeriod:(long long)arg1 anchorDate:(id)arg2;

- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithTimePeriod:(long long)arg1 anchorDate:(id)arg2;
- (id)_getStartDateFromAnchorDate:(id)arg1 timePeriod:(long long)arg2;
- (id)_getEndDateFromStartDate:(id)arg1 timePeriod:(long long)arg2;
- (_Bool)dateInRange:(id)arg1;

@end
