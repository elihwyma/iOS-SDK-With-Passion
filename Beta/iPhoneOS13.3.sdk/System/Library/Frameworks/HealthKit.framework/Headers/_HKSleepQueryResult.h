/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSDictionary, NSString;

@interface _HKSleepQueryResult : NSObject

{
    NSDictionary *_resultsByCategoryValue;
    NSDictionary *_samplesBySource;
    NSDateInterval *_dateInterval;
    NSDateInterval *_resultInterval;
}

@property (nonatomic, readonly) NSDateInterval *resultInterval;
@property (copy, nonatomic, readonly) NSDictionary *samplesBySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)samplesForSamplesBySource:(id)arg1;
+ (id)dateIntervalForSamples:(id)arg1;
+ (id)_preferredSourceFromSources:(id)arg1 sourceOrder:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)startDate;
- (id)endDate;
- (id)dateInterval;
- (id)dateIntervalsForCategoryValue:(long long)arg1;
- (id)initWithResultInterval:(id)arg1 dateIntervalsByCategoryValue:(id)arg2 samplesBySource:(id)arg3;
- (id)preferredDateIntervals;
- (_Bool)_calculatePreferredDuration:(double *)arg1 categoryValue:(long long *)arg2;

@end
