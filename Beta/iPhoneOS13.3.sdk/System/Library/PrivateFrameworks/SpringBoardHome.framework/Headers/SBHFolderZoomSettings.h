/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBHScaleZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHFolderZoomSettings : SBHScaleZoomSettings

{
    SBFAnimationSettings *_innerFolderFadeSettings;
}

@property (retain, nonatomic) SBFAnimationSettings *innerFolderFadeSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
