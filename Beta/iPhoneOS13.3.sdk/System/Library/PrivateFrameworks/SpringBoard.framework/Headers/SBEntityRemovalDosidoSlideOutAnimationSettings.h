/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalDosidoDefaultAnimationSettings, SBFFluidBehaviorSettings;

@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings

{
    double _fromViewSlideOutAnimationDelay;
    double _fromViewSlideOutHeightOffsetMultiplier;
    SBFFluidBehaviorSettings *_fromViewSlideOutAnimationSettings;
    SBEntityRemovalDosidoDefaultAnimationSettings *_defaultAnimationSettings;
}

@property (nonatomic) double fromViewSlideOutAnimationDelay;
@property (nonatomic) double fromViewSlideOutHeightOffsetMultiplier;
@property (retain, nonatomic) SBFFluidBehaviorSettings *fromViewSlideOutAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *defaultAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
