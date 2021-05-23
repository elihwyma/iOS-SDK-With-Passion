/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBAppSwitcherOrbGestureAnimationSettings : PTSettings

{
    SBFFluidBehaviorSettings *_popToSwitcherSettings;
    SBFFluidBehaviorSettings *_peekingAndPanningSettings;
    SBFFluidBehaviorSettings *_breathingSettings;
    double _response;
}

@property (retain, nonatomic) SBFFluidBehaviorSettings *popToSwitcherSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *peekingAndPanningSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *breathingSettings;
@property (nonatomic) double response;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
