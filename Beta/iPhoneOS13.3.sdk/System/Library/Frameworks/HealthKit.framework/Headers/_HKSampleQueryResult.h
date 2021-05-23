/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateInterval;

@interface _HKSampleQueryResult : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateInterval *_dateInterval;
    NSArray *_samples;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) NSArray *samples;

- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 samples:(id)arg3;

@end
