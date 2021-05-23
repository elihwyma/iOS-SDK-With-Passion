/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBHIconZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHScaleZoomSettings : SBHIconZoomSettings

{
    _Bool _crossfadeWithZoom;
    _Bool _fadesIconGrid;
    SBFAnimationSettings *_outerFolderFadeSettings;
    SBFAnimationSettings *_crossfadeSettings;
    SBFAnimationSettings *_iconGridFadeSettings;
}

@property (retain, nonatomic) SBFAnimationSettings *outerFolderFadeSettings;
@property (nonatomic) _Bool crossfadeWithZoom;
@property (retain, nonatomic) SBFAnimationSettings *crossfadeSettings;
@property (nonatomic) _Bool fadesIconGrid;
@property (retain, nonatomic) SBFAnimationSettings *iconGridFadeSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)effectiveCrossfadeAnimationSettings;

@end
