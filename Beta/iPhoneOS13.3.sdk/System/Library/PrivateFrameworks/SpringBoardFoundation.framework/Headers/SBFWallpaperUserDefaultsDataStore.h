/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFWallpaperDefaults, SBWallpaperDefaults;

@interface SBFWallpaperUserDefaultsDataStore : NSObject

{
    SBWallpaperDefaults *_userDefaults;
    SBFWallpaperDefaults *_wallpaperOptionsDefaults;
}

@property (nonatomic, readonly) SBFWallpaperDefaults *wallpaperOptionsDefaults;
@property (nonatomic, readonly) SBWallpaperDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
- (_Bool)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2;
- (id)initWithUserDefaults:(id)arg1;
- (void)updateProceduralWallpaperDefaultsWithIdentifier:(id)arg1 options:(id)arg2 forVariant:(long long)arg3;
- (id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperColorNameForVariant:(long long)arg1;
- (id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (_Bool)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (_Bool)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (_Bool)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)removeWallpaperImageHashDataForVariants:(long long)arg1;
- (id)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)setVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (_Bool)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)removeVideoForVariant:(long long)arg1;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (_Bool)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (_Bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (id)wallpaperColorForVariant:(long long)arg1;
- (_Bool)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (id)wallpaperGradientForVariant:(long long)arg1;
- (void)removeWallpaperGradientForVariants:(long long)arg1;

@end
