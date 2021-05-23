/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBReachabilitySettings : PTSettings

{
    _Bool _allowOnAllDevices;
    double _reachabilityDefaultKeepAlive;
    double _reachabilityInteractiveKeepAlive;
    double _yOffsetFactor;
    double _homeGestureSwipeDownHysteresis;
    double _homeGestureSwipeDownHeight;
    double _systemWideSwipeDownHeight;
    SBFFluidBehaviorSettings *_animationSettings;
}

@property (nonatomic) _Bool allowOnAllDevices;
@property (nonatomic) double reachabilityDefaultKeepAlive;
@property (nonatomic) double reachabilityInteractiveKeepAlive;
@property (nonatomic) double yOffsetFactor;
@property (nonatomic) double homeGestureSwipeDownHysteresis;
@property (nonatomic) double homeGestureSwipeDownHeight;
@property (nonatomic) double systemWideSwipeDownHeight;
@property (retain, nonatomic) SBFFluidBehaviorSettings *animationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (double)yOffset;

@end
