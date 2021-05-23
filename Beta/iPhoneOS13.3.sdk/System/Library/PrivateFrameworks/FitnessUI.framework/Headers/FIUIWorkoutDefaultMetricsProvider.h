/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class FIUIWorkoutActivityType, NSArray;

@interface FIUIWorkoutDefaultMetricsProvider : NSObject

{
    FIUIWorkoutActivityType *_activityType;
    _Bool _supportsElevationMetrics;
    _Bool _supportsGroundElevationMetrics;
    long long _metricsVersion;
    NSArray *_defaultEnabledMetrics;
    NSArray *_supportedMetrics;
}

@property (nonatomic, readonly) long long metricsVersion;
@property (copy, nonatomic, readonly) NSArray *defaultEnabledMetrics;
@property (copy, nonatomic, readonly) NSArray *supportedMetrics;

- (id)initWithMetricsVersion:(long long)arg1 activityType:(id)arg2 deviceSupportsElevationMetrics:(_Bool)arg3 deviceSupportsGroundElevationMetrics:(_Bool)arg4;
- (id)_defaultEnabledMetricsForActivityType:(id)arg1 metricsVersion:(long long)arg2;
- (id)_supportedMetricsForActivityType:(id)arg1 metricsVersion:(long long)arg2;
- (id)_defaultEnabledMetricsForSwimmingWithLocationType:(long long)arg1 metricsVersion:(long long)arg2;
- (id)_indoorDefaultEnabledMetricsForActivityType:(unsigned long long)arg1 metricsVersion:(long long)arg2;
- (id)_defaultOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1 metricsVersion:(long long)arg2 supportsElevationMetrics:(_Bool)arg3;
- (id)_defaultGloryIndoorEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_defaultPreGloryIndoorEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_defaultGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1 supportsElevationMetrics:(_Bool)arg2;
- (id)_defaultPreGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_machineProvidedMetricsForActivityType:(id)arg1;
- (id)supportedMetricsWithIsMachineWorkout:(_Bool)arg1 activityType:(id)arg2;
- (id)appendMachineMetricsToMetrics:(id)arg1 maxNumMetrics:(long long)arg2 activityType:(id)arg3;
- (_Bool)isMetricTypeSupported:(unsigned long long)arg1 isMachineWorkout:(_Bool)arg2 activityType:(id)arg3;

@end
