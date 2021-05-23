/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <PrototypeTools/PTSettings.h>

@class PTOutlet, SBFWallpaperParallaxSettings;

@interface SBFWallpaperSettings : PTSettings

{
    PTOutlet *_resetWallpaperOutlet;
    SBFWallpaperParallaxSettings *_homeScreenParallaxSettings;
    SBFWallpaperParallaxSettings *_lockScreenParallaxSettings;
}

@property (retain, nonatomic) PTOutlet *resetWallpaperOutlet;
@property (retain, nonatomic) SBFWallpaperParallaxSettings *homeScreenParallaxSettings;
@property (retain, nonatomic) SBFWallpaperParallaxSettings *lockScreenParallaxSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parallaxSettingsForVariant:(long long)arg1;

@end
