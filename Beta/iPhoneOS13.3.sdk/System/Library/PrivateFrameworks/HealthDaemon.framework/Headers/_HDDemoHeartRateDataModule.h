/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/_HDDemoDataModule.h>

@interface _HDDemoHeartRateDataModule : _HDDemoDataModule

- (double)nextFireInterval;
- (void)timerDidFireWithInterval:(double)arg1;

@end
