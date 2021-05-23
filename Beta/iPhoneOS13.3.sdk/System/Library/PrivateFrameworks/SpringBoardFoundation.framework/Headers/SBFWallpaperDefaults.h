/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SBWallpaperDefaults;

@interface SBFWallpaperDefaults : NSObject

{
    SBWallpaperDefaults *_defaultsStore;
    NSMutableDictionary *_lockScreenDefaultsStoreWrapper;
    NSMutableDictionary *_homeScreenDefaultsStoreWrapper;
}

@property (nonatomic, readonly) SBWallpaperDefaults *defaultsStore;
@property (nonatomic, readonly) NSMutableDictionary *lockScreenDefaultsStoreWrapper;
@property (nonatomic, readonly) NSMutableDictionary *homeScreenDefaultsStoreWrapper;

+ (id)defaults;

- (id)init;
- (id)description;
- (_Bool)hasVideo;
- (void)setHasVideo:(_Bool)arg1;
- (double)stillTimeInVideo;
- (void)setStillTimeInVideo:(double)arg1;
- (id)initWithDefaultsStore:(id)arg1;
- (id)imageHashForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)setImageHash:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)updateDefaultsForLocations:(long long)arg1 updater:(CDUnknownBlockType)arg2;
- (id)proceduralIdentifierForVariant:(long long)arg1;
- (id)proceduralOptionsForVariant:(long long)arg1;
- (void)setProceduralIdentifier:(id)arg1 forLocations:(long long)arg2;
- (void)setProceduralOptions:(id)arg1 forLocations:(long long)arg2;
- (void)setProceduralUserSet:(_Bool)arg1 forLocations:(long long)arg2;
- (id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)resetDefaults;
- (id)wallpaperColorDataForVariant:(long long)arg1;
- (id)wallpaperColorNameForVariant:(long long)arg1;
- (void)setColorData:(id)arg1 forLocations:(long long)arg2;
- (void)setColorName:(id)arg1 forLocations:(long long)arg2;
- (id)wallpaperGradientDataForVariant:(long long)arg1;
- (void)setGradientData:(id)arg1 forLocations:(long long)arg2;
- (double)parallaxFactorForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (double)zoomScaleForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (struct CGRect)cropRectForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)supportsCroppingForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)resetParallaxFactorDefaults;
- (void)resetZoomScaleDefaults;
- (void)resetCroppingDefaults;
- (void)resetMagnifyDefaults;
- (void)resetPortraitDefaults;
- (void)resetHasVideoDefaults;
- (void)resetStillTimeInVideoDefaults;
- (void)resetNameDefaults;
- (void)resetImageHashDefaults;
- (_Bool)magnifyEnabledForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)isPortraitForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)nameForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)hasVideoForVariant:(long long)arg1;
- (double)stillTimeInVideoForVariant:(long long)arg1;
- (void)setSupportsCropping:(_Bool)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setCropRect:(struct CGRect)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setMagnifyEnabled:(_Bool)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setZoomScale:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setPortrait:(_Bool)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setName:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)_updateDefaultsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 updater:(CDUnknownBlockType)arg3;
- (id)_defaultsWrapperForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)_setDefaultsWithDictionary:(id)arg1 variant:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)_keyForWallpaperMode:(long long)arg1;
- (_Bool)proceduralUserSetForVariant:(long long)arg1;

@end
