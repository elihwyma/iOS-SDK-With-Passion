/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <HealthKit/HKWorkout.h>

@interface HKWorkout (FitnessUI)

+ (_Bool)fiui_isHeartRateSupportedForActivityType:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
+ (id)fiui_supportedMetricsForActivityType:(id)arg1;
+ (unsigned long long)fiui_associatedMetricForGoalType:(unsigned long long)arg1;
+ (_Bool)_isHeartRateSupportedInPowerSettingsForActivityType:(unsigned long long)arg1;
+ (_Bool)_isHeartRateSupportedInPrivacySettings;
+ (double)fiui_weightedAverageHeartRateWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)fiui_supportedGoalTypesForActivityType:(id)arg1;
+ (_Bool)fiui_shouldTrackPaceWithOdometerForActivityType:(unsigned long long)arg1;
+ (_Bool)fiui_activitySupportsMetricType:(unsigned long long)arg1 activityType:(id)arg2;

- (long long)fiui_swimmingLocationType;
- (long long)fiui_strokeStyle;
- (_Bool)fiui_isConnectedGymWorkout;
- (_Bool)fiui_hasAveragePace;
- (id)fiui_elevation;
- (id)fiui_eventsOfType:(long long)arg1;
- (id)_fiui_averagePaceQty;
- (long long)fiui_numberOfEventsOfType:(long long)arg1;
- (id)fiui_activityType;
- (double)fiui_completionFactor;
- (id)fiui_keyValueSummary;
- (_Bool)fiui_hasWeatherData;
- (_Bool)fiui_hasElevation;
- (double)fiui_duration;
- (id)fiui_totalDistance;
- (double)fiui_totalStepCount;
- (double)fiui_averageCadence;
- (double)fiui_averagePower;
- (double)fiui_averagePace;
- (id)fiui_finalWorkoutUUID;
- (id)fiui_connectedGymBrandName;
- (double)fiui_averageTimePerLap;
- (id)fiui_lapLength;
- (id)fiui_splitsFromDistanceSamples:(id)arg1 distanceInMetersPerSplit:(double)arg2 workoutStartDate:(id)arg3;
- (id)fiui_workoutSplitsForUserPreferredDistanceUnit:(id)arg1;

@end
