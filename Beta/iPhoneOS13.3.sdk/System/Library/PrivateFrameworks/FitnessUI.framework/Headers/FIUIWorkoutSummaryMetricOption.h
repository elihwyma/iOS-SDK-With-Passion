/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIWorkoutSummaryRowOption.h>

@interface FIUIWorkoutSummaryMetricOption : FIUIWorkoutSummaryRowOption

{
    unsigned long long _metricType;
}

@property (nonatomic, readonly) unsigned long long metricType;

- (_Bool)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2;
- (id)initWithRowType:(unsigned long long)arg1 metricType:(unsigned long long)arg2 condition:(CDUnknownBlockType)arg3;

@end
