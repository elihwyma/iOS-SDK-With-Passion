/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalAnimationSettings, SBFAnimationSettings, SBFWakeAnimationSettings;

@interface SBSystemAnimationSettings : PTSettings

{
    float _assistantAnimationDuration;
    float _assistantDismissAnimationDurationOverApp;
    float _spotlightNoninteractiveAnimationDuration;
    SBFAnimationSettings *_slideoverDosidoAnimationSettings;
    SBEntityRemovalAnimationSettings *_entityRemovalAnimationSettings;
    SBFWakeAnimationSettings *_wakeAnimationSettings;
}

@property (nonatomic) float assistantAnimationDuration;
@property (nonatomic) float assistantDismissAnimationDurationOverApp;
@property (nonatomic) float spotlightNoninteractiveAnimationDuration;
@property (retain, nonatomic) SBFAnimationSettings *slideoverDosidoAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalAnimationSettings *entityRemovalAnimationSettings;
@property (retain, nonatomic) SBFWakeAnimationSettings *wakeAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
