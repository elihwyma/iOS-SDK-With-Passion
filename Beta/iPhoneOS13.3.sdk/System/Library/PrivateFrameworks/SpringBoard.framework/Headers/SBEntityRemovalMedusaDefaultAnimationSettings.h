/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBEntityRemovalMedusaDefaultAnimationSettings : PTSettings

{
    double _toBeRemovedFinalScale;
    double _toBeRemovedFinalAlpha;
    double _toBeRemovedFinalBlurRadius;
    double _toBeMadeFullscreenFrameAnimationDelay;
    SBFFluidBehaviorSettings *_toBeMadeFullscreenFrameAnimationSettings;
    SBFFluidBehaviorSettings *_toBeRemovedScaleAnimationSettings;
    SBFFluidBehaviorSettings *_toBeRemovedAlphaAnimationSettings;
}

@property (nonatomic) double toBeRemovedFinalScale;
@property (nonatomic) double toBeRemovedFinalAlpha;
@property (nonatomic) double toBeRemovedFinalBlurRadius;
@property (nonatomic) double toBeMadeFullscreenFrameAnimationDelay;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenFrameAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedScaleAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedAlphaAnimationSettings;

+ (id)settingsControllerModule;
+ (id)_settingsModule;

- (void)setDefaultValues;

@end
