/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <HealthKit/HKWorkoutEvent.h>

@class HKQuantity;

@interface HKWorkoutEvent (FIUISplitsAdditions)

@property (nonatomic, readonly) _Bool fiui_isSplitEvent;
@property (nonatomic, readonly) HKQuantity *fiui_splitDistance;
@property (nonatomic, readonly) double fiui_splitPaceInMetersPerSecond;
@property (nonatomic, readonly) double fiui_splitActiveDuration;

@end
