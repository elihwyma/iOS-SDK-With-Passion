/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHeartRateSummaryStatistics, HKQuantity, NSArray, NSDateInterval;

@interface HKHeartRateSummary : NSObject

{
    long long _activityCacheIndex;
    NSDateInterval *_heartRateDateInterval;
    HKQuantity *_restingHeartRate;
    HKQuantity *_walkingAverageHeartRate;
    HKHeartRateSummaryStatistics *_allDayStatistics;
    NSArray *_workoutStatistics;
    NSArray *_workoutRecoveryStatistics;
    NSArray *_breatheStatistics;
}

@property (nonatomic) long long activityCacheIndex;
@property (retain, nonatomic) NSDateInterval *heartRateDateInterval;
@property (retain, nonatomic) HKQuantity *restingHeartRate;
@property (retain, nonatomic) HKQuantity *walkingAverageHeartRate;
@property (retain, nonatomic) HKHeartRateSummaryStatistics *allDayStatistics;
@property (retain, nonatomic) NSArray *workoutStatistics;
@property (retain, nonatomic) NSArray *workoutRecoveryStatistics;
@property (retain, nonatomic) NSArray *breatheStatistics;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActivityCacheIndex:(long long)arg1 heartRateDateInterval:(id)arg2 restingHeartRate:(id)arg3 walkingAverageHeartRate:(id)arg4 allDayStatistics:(id)arg5 workoutStatistics:(id)arg6 workoutRecoveryStatistics:(id)arg7 breatheStatistics:(id)arg8;

@end
