/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFWallpaperFileManager, HFWallpaperImageCache, HFWallpaperLegacyFileManager, NSMutableDictionary, NSString, NSUserDefaults;

@protocol HFNamedWallpaperSource, HMFLocking;

@interface HFWallpaperManager : NSObject

{
    id <HMFLocking> _lock;
    _Bool _wallpaperSourceRegistered;
    _Bool _hasPreheatedCache;
    id <HFNamedWallpaperSource> _namedWallpaperSource;
    HFWallpaperFileManager *_fileManager;
    HFWallpaperLegacyFileManager *_legacyFileManager;
    HFWallpaperImageCache *_imageCache;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_wallpapers;
    NSMutableDictionary *_wallpaperSlices;
}

@property (retain, nonatomic) id <HFNamedWallpaperSource> namedWallpaperSource;
@property (retain, nonatomic) HFWallpaperFileManager *fileManager;
@property (retain, nonatomic) HFWallpaperLegacyFileManager *legacyFileManager;
@property (retain, nonatomic) HFWallpaperImageCache *imageCache;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSMutableDictionary *wallpapers;
@property (retain, nonatomic) NSMutableDictionary *wallpaperSlices;
@property (nonatomic) _Bool hasPreheatedCache;
@property (nonatomic, readonly) _Bool wallpaperSourceRegistered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)setWallpaper:(id)arg1 image:(id)arg2 forHomeKitObject:(id)arg3;
- (id)wallpaperForHomeKitObject:(id)arg1;
- (id)sliceFromWallpaper:(id)arg1 variant:(long long)arg2;
- (id)defaultNamedWallpaperForCollection:(long long)arg1;
- (id)imageForNamedWallpaper:(id)arg1;
- (id)generateProcessedImageFromWallpaper:(id)arg1 originalImage:(id)arg2;
- (void)_migrateIfNeeded;
- (id)_cachedWallpaperForKey:(id)arg1;
- (id)_wallpaperForKey:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)_cachedWallpaperSliceForIdentifier:(id)arg1;
- (id)_sliceFromWallpaper:(id)arg1 variant:(long long)arg2 preloading:(_Bool)arg3;
- (id)_originalImageForWallpaper:(id)arg1;
- (void)_setWallpaper:(id)arg1 image:(id)arg2 forKey:(id)arg3;
- (void)_setWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3;
- (void)_dispatchWallpaperChangedForKey:(id)arg1;
- (void)_pruneUnusedWallpapers;
- (void)_preloadWallpapersForHome:(id)arg1;
- (void)_preloadWallpaperSlicesForKey:(id)arg1;
- (long long)_namedCollectionTypeForKey:(id)arg1;
- (void)_logUserMetricsAfterSettingWallpaper;
- (void)_pruneUnusedWallpapersWithExistingHomeKitIdentifiers:(id)arg1;
- (id)_resolveHomeKitObjectForKey:(id)arg1;
- (void)registerWallpaperSource:(id)arg1 processedSource:(id)arg2;
- (id)allNamedWallpapersForCollection:(long long)arg1;
- (void)preheatCache;

@end
