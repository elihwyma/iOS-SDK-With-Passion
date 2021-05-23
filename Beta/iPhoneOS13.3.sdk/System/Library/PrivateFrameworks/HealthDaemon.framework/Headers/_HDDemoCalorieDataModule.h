/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/_HDDemoDataModule.h>

@interface _HDDemoCalorieDataModule : _HDDemoDataModule

- (double)nextFireInterval;
- (void)timerDidFireWithInterval:(double)arg1;
- (double)_caloriesBurnedWithTimeInterval:(double)arg1;

@end
