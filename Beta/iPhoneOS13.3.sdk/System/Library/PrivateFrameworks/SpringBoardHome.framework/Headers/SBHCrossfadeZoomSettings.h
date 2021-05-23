/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBHScaleZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCrossfadeZoomSettings : SBHScaleZoomSettings

{
    _Bool _morphWithZoom;
    SBFAnimationSettings *_morphSettings;
}

@property (nonatomic) _Bool morphWithZoom;
@property (retain, nonatomic) SBFAnimationSettings *morphSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)effectiveMorphAnimationSettings;

@end
