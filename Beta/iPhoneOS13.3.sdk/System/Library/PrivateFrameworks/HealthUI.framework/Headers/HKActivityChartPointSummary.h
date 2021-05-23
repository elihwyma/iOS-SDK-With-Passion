/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

#import <HealthUI/Swift-Protocol.h>

@class NSString;

@interface HKActivityChartPointSummary : NSObject <Swift>

{
    NSString *_formattedDateString;
    NSString *_workoutSummaryString;
    NSString *_energyBurnSummaryString;
    NSString *_activityGoalSummaryString;
}

@property (nonatomic, readonly) NSString *formattedDateString;
@property (nonatomic, readonly) NSString *workoutSummaryString;
@property (nonatomic, readonly) NSString *energyBurnSummaryString;
@property (nonatomic, readonly) NSString *activityGoalSummaryString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_dateFormatter;
+ (id)_energyFormatter;
+ (id)_workoutDurationFormatter;
+ (id)_distanceFormatter;

- (void)_createWorkoutSummaryWithWorkouts:(id)arg1;
- (id)initWithActivityCache:(id)arg1 workouts:(id)arg2;

@end
