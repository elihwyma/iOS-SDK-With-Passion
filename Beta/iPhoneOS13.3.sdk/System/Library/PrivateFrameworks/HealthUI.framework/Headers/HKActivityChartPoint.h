/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKActivityCache, HKActivityChartPointSummary, HKUnit, NSArray, NSDate, NSNumber, NSString;

@interface HKActivityChartPoint : NSObject

{
    NSDate *_date;
    HKActivityCache *_activityCache;
    NSArray *_workouts;
    HKUnit *_unit;
    NSNumber *_activeEnergyBurnedMinusWorkouts;
    NSNumber *_workoutActiveEnergyBurned;
    NSArray *_workoutTimes;
    HKActivityChartPointSummary *_summary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)userInfo;
- (id)minYValue;
- (id)maxYValue;
- (id)yValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;
- (void)_calculateEnergyBurned;
- (void)_populateWorkoutTimes;
- (void)_createSummary;
- (id)initWithActivityCache:(id)arg1 workouts:(id)arg2 unit:(id)arg3;

@end
