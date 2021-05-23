/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBApplication.h>

@interface SBCameraApplication : SBApplication

{
    _Bool _hasPreHeatInFlight;
}

@property (nonatomic) _Bool hasPreHeatInFlight;

- (_Bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (void)_cancelPreheatForUserLaunchIfNecessary;

@end
