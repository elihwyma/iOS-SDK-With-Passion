/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalMedusaDefaultAnimationSettings, SBFFluidBehaviorSettings;

@interface SBEntityRemovalMedusaSlideOutAnimationSettings : PTSettings

{
    double _toBeMadeFullScreenPushInScale;
    double _toBeMadeFullScreenScaleResetAnimationDelay;
    double _toBeRemovedSlideOutAnimationDelay;
    double _toBeRemovedSlideOutHeightOffsetMultiplier;
    SBFFluidBehaviorSettings *_toBeMadeFullscreenPushInScaleAnimationSettings;
    SBFFluidBehaviorSettings *_toBeMadeFullscreenScaleResetAnimationSettings;
    SBFFluidBehaviorSettings *_toBeRemovedSlideOutAnimationSettings;
    SBEntityRemovalMedusaDefaultAnimationSettings *_defaultAnimationSettings;
}

@property (nonatomic) double toBeMadeFullScreenPushInScale;
@property (nonatomic) double toBeMadeFullScreenScaleResetAnimationDelay;
@property (nonatomic) double toBeRemovedSlideOutAnimationDelay;
@property (nonatomic) double toBeRemovedSlideOutHeightOffsetMultiplier;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenPushInScaleAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenScaleResetAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedSlideOutAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalMedusaDefaultAnimationSettings *defaultAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
