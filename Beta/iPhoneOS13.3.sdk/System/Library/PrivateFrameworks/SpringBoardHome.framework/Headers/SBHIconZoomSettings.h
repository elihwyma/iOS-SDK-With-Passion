/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBHIconAnimationSettings.h>

@interface SBHIconZoomSettings : SBHIconAnimationSettings

{
    _Bool _labelAlphaWithZoom;
}

@property (nonatomic) _Bool labelAlphaWithZoom;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
