/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, NSTimer, PXPlacesSearchProvider;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUSearchHomeThumbnailManager : NSObject

{
    NSCache *_cache;
    NSMutableDictionary *_metadataPlist;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    PXPlacesSearchProvider *_placesProvider;
    NSTimer *_diskTimer;
    NSMutableDictionary *_thumbnailsToWrite;
}

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSMutableDictionary *metadataPlist;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metadataQueue;
@property (retain, nonatomic) PXPlacesSearchProvider *placesProvider;
@property (retain, nonatomic) NSTimer *diskTimer;
@property (retain, nonatomic) NSMutableDictionary *thumbnailsToWrite;

+ (id)_filePathForHash:(id)arg1;
+ (id)_filePathForMetadataPlist;
+ (id)_thumbnailFilePath;

- (id)init;
- (void)thumbnailForKey:(id)arg1 type:(long long)arg2 traitCollection:(id)arg3 withSize:(struct CGSize)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchImageForLocation:(id)arg1 size:(struct CGSize)arg2 traitCollection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setInMemoryThumbnail:(id)arg1 forHashString:(id)arg2;
- (void)_setInMemoryAndPersistToDiskThumbnail:(id)arg1 forHashString:(id)arg2;
- (void)_createThumbnailDirectoryIfNeeded;
- (id)_hashStringForKey:(id)arg1 size:(struct CGSize)arg2 interfaceStyle:(long long)arg3 displayScale:(double)arg4;
- (void)_setMetadataDate:(id)arg1 forKey:(id)arg2;
- (void)_writeMetadataPlistToDisk;
- (id)_imageForHomeZeroKeywordWithMapImage:(id)arg1;

@end
