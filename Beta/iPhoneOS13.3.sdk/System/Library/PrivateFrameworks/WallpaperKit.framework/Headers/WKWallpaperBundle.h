/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface WKWallpaperBundle : NSObject

{
    _Bool _appearanceAware;
    _Bool _distintWallpapersForLocations;
    _Bool _dynamicWallpaperBundle;
    unsigned long long _version;
    unsigned long long _identifier;
    NSString *_name;
    NSString *_family;
    NSURL *_thumbnailImageURL;
    NSURL *__bundleURL;
    NSMutableDictionary *__defaultAppearanceWallpapers;
    NSMutableDictionary *__darkAppearanceWallpapers;
}

@property (retain, nonatomic) NSURL *_bundleURL;
@property (retain, nonatomic) NSMutableDictionary *_defaultAppearanceWallpapers;
@property (retain, nonatomic) NSMutableDictionary *_darkAppearanceWallpapers;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) unsigned long long identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *family;
@property (copy, nonatomic, readonly) NSURL *thumbnailImageURL;
@property (nonatomic, readonly, getter=isAppearanceAware) _Bool appearanceAware;
@property (nonatomic, readonly, getter=hasDistintWallpapersForLocations) _Bool distintWallpapersForLocations;
@property (nonatomic, readonly, getter=isDynamicWallpaperBundle) _Bool dynamicWallpaperBundle;

+ (_Bool)shouldLoadWallpaperBundleAtURL:(id)arg1;

- (id)initWithURL:(id)arg1;
- (id)fileBasedWallpaperForLocation:(id)arg1 andAppearance:(id)arg2;
- (void)_loadBundle;
- (id)valueBasedWallpaperForLocation:(id)arg1;
- (unsigned long long)wallpaperBackingTypeForLocation:(id)arg1;
- (id)fileBasedWallpaperForLocation:(id)arg1;
- (void)_loadDynamicWallpaper:(id)arg1;
- (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1;
- (void)_processAssetDictionary:(id)arg1 forLocation:(id)arg2;
- (id)_stillWallpaperWithMetadataDictionary:(id)arg1 wallpaperAppearance:(id)arg2;
- (id)_liveWallpaperWithMetadataDictionary:(id)arg1 wallpaperAppearance:(id)arg2;
- (id)valueBasedWallpaperForLocation:(id)arg1 andAppearance:(id)arg2;
- (id)_processCommonFileBackedWallpaperMetadataWithDictionary:(id)arg1 wallpaperAppearance:(id)arg2;
- (id)initWithDynamicDictionary:(id)arg1 identifier:(unsigned long long)arg2;

@end
