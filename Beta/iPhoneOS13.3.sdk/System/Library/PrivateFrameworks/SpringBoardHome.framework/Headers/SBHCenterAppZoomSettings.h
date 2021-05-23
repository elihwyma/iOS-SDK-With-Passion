/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBHCenterZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCenterAppZoomSettings : SBHCenterZoomSettings

{
    double _appHeadStart;
    SBFAnimationSettings *_appZoomSettings;
    SBFAnimationSettings *_appFadeSettings;
}

@property (nonatomic) double appHeadStart;
@property (retain, nonatomic) SBFAnimationSettings *appZoomSettings;
@property (retain, nonatomic) SBFAnimationSettings *appFadeSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
