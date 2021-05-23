/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings;

@interface SBFWakeAnimationSettings : PTSettings

{
    double _backlightFadeDuration;
    double _speedMultiplierForWake;
    double _speedMultiplierForLiftToWake;
    SBFAnimationSettings *_dateWakeSettings;
    SBFAnimationSettings *_contentWakeSettings;
    double _awakeColorBrightness;
    double _awakeDateAlpha;
    SBFAnimationSettings *_awakeWallpaperFilterSettings;
    SBFAnimationSettings *_dateSleepSettings;
    double _sleepColorBrightness;
    SBFAnimationSettings *_sleepWallpaperFilterSettings;
}

@property (nonatomic) double backlightFadeDuration;
@property (nonatomic) double speedMultiplierForWake;
@property (nonatomic) double speedMultiplierForLiftToWake;
@property (retain, nonatomic) SBFAnimationSettings *dateWakeSettings;
@property (retain, nonatomic) SBFAnimationSettings *contentWakeSettings;
@property (nonatomic) double awakeColorBrightness;
@property (nonatomic) double awakeDateAlpha;
@property (retain, nonatomic) SBFAnimationSettings *awakeWallpaperFilterSettings;
@property (retain, nonatomic) SBFAnimationSettings *dateSleepSettings;
@property (nonatomic) double sleepColorBrightness;
@property (retain, nonatomic) SBFAnimationSettings *sleepWallpaperFilterSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
