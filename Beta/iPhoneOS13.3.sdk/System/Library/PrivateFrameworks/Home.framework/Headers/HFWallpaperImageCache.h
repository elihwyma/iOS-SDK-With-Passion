/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class BSUIMappedImageCache, NSArray;

@protocol HFProcessedWallpaperSource, HMFLocking;

@interface HFWallpaperImageCache : NSObject

{
    id <HMFLocking> _lock;
    id <HFProcessedWallpaperSource> _processedWallpaperSource;
    BSUIMappedImageCache *_imageCache;
}

@property (retain, nonatomic) BSUIMappedImageCache *imageCache;
@property (retain) id <HFProcessedWallpaperSource> processedWallpaperSource;
@property (nonatomic, readonly) NSArray *supportedProcessedVariants;

- (id)init;
- (id)imageForVariant:(long long)arg1 wallpaper:(id)arg2 withOriginalImageGenerator:(CDUnknownBlockType)arg3;
- (void)saveVariantsForWallpaper:(id)arg1 originalImage:(id)arg2;
- (void)pruneUnusedWallpaperVariants:(id)arg1;
- (id)_cacheKeyForWallpaper:(id)arg1 withVariant:(long long)arg2;

@end
