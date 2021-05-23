/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBEntityRemovalDosidoDefaultAnimationSettings : PTSettings

{
    double _fromViewFinalScale;
    double _fromViewFinalAlpha;
    double _fromViewFinalBlurRadius;
    double _fromViewAlphaAnimationDelay;
    SBFFluidBehaviorSettings *_fromViewScaleAnimationSettings;
    SBFFluidBehaviorSettings *_fromViewAlphaAnimationSettings;
    double _toViewInitialPushInScale;
    double _toViewScreenInitialAlpha;
    double _toViewInitialDimmingAlpha;
    double _toViewInitialBlurProgress;
    double _toViewScaleAndAlphaResetAnimationDelay;
    double _toViewDimmingViewFadeOutDelay;
    SBFFluidBehaviorSettings *_toViewScaleAndAlphaResetAnimationSettings;
    SBFFluidBehaviorSettings *_toViewWallpaperScaleAnimationSettings;
    SBFFluidBehaviorSettings *_toViewDimmingViewAlphaAnimationSettings;
}

@property (nonatomic) double fromViewFinalScale;
@property (nonatomic) double fromViewFinalAlpha;
@property (nonatomic) double fromViewFinalBlurRadius;
@property (nonatomic) double fromViewAlphaAnimationDelay;
@property (retain, nonatomic) SBFFluidBehaviorSettings *fromViewScaleAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *fromViewAlphaAnimationSettings;
@property (nonatomic) double toViewInitialPushInScale;
@property (nonatomic) double toViewScreenInitialAlpha;
@property (nonatomic) double toViewInitialDimmingAlpha;
@property (nonatomic) double toViewInitialBlurProgress;
@property (nonatomic) double toViewScaleAndAlphaResetAnimationDelay;
@property (nonatomic) double toViewDimmingViewFadeOutDelay;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toViewScaleAndAlphaResetAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toViewWallpaperScaleAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toViewDimmingViewAlphaAnimationSettings;

+ (id)settingsControllerModule;
+ (id)_settingsModule;

- (void)setDefaultValues;

@end
