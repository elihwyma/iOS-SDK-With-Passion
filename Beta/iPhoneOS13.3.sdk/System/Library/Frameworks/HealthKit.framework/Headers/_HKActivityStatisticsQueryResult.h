/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _HKActivityStatisticsQueryResult : NSObject

{
    NSArray *_activeEnergyResults;
    NSArray *_appleMoveTimeResults;
    NSArray *_appleExerciseTimeResults;
    NSArray *_appleStandHourResults;
    NSArray *_workoutResults;
}

@property (copy, nonatomic) NSArray *activeEnergyResults;
@property (copy, nonatomic) NSArray *appleMoveTimeResults;
@property (copy, nonatomic) NSArray *appleExerciseTimeResults;
@property (copy, nonatomic) NSArray *appleStandHourResults;
@property (copy, nonatomic) NSArray *workoutResults;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
