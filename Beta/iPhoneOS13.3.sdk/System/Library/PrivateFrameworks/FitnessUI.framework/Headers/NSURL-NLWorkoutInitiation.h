/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSURL.h>

@interface NSURL (NLWorkoutInitiation)

+ (id)fiui_URLTimeUnit;
+ (id)fiui_URLDistanceUnit;
+ (id)fiui_URLEnergyUnit;
+ (id)_launchURLWithHostname:(id)arg1 workoutIdentifier:(id)arg2;
+ (id)fiui_workoutPickerURLComponents;
+ (id)_fiui_supportedSchemes;
+ (_Bool)_fiui_isValidWorkoutScheme:(id)arg1;
+ (id)_fiui_supportedQueryItemNames;
+ (id)fiui_workoutInitiationURLWithWorkout:(id)arg1 presentConfiguration:(_Bool)arg2 skipCountdown:(_Bool)arg3;
+ (id)fiui_endWorkoutURLWithIdentifier:(id)arg1;
+ (id)fiui_pauseWorkoutURLWithIdentifier:(id)arg1;
+ (id)fiui_startBackdatedWorkoutURLWithDate:(id)arg1 workoutIdentifier:(id)arg2 workoutType:(unsigned long long)arg3 isIndoor:(_Bool)arg4 swimmingLocationType:(long long)arg5 showPicker:(_Bool)arg6;
+ (id)fiui_workoutPickerURL;

- (id)fiui_activityType;
- (_Bool)fiui_isEndWorkoutURL;
- (_Bool)fiui_isPauseWorkoutURL;
- (_Bool)fiui_isStartBackdatedWorkoutURL;
- (_Bool)fiui_isValidStartWorkoutURL;
- (_Bool)fiui_isValidMachineWorkoutLaunchURL;
- (_Bool)fiui_presentGoalConfiguration;
- (unsigned long long)fiui_goalType;
- (double)fiui_goalValue;

@end
