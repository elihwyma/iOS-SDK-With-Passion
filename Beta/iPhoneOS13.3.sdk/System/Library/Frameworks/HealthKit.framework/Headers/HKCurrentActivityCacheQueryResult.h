/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKActivityCache, NSArray;

@interface HKCurrentActivityCacheQueryResult : NSObject

{
    HKActivityCache *_currentActivityCache;
    NSArray *_activeEnergyResults;
    NSArray *_appleExerciseTimeResults;
    NSArray *_appleStandHourResults;
}

@property (retain, nonatomic) HKActivityCache *currentActivityCache;
@property (copy, nonatomic) NSArray *activeEnergyResults;
@property (copy, nonatomic) NSArray *appleExerciseTimeResults;
@property (copy, nonatomic) NSArray *appleStandHourResults;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
