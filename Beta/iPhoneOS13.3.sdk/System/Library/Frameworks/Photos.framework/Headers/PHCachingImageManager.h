/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSMutableSet, NSObject, NSString, PHImageCache, PHPhotoLibrary;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PHCachingImageManager

{
    NSMutableSet *_cachingRequestIDs;
    struct os_unfair_lock_s _cachingLock;
    PHImageCache *_imageCache;
    _Bool _imageCacheCommitScheduled;
    NSObject<OS_dispatch_queue> *_serialQueue;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_source> *_memoryEventSource;
    _Bool _allowsCachingHighQualityImages;
}

@property (nonatomic) _Bool allowsCachingHighQualityImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_chooseImageTableFormatForPreheatingFromFormats:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 returnBestTableRegardlessOfFit:(_Bool)arg4;

- (id)init;
- (void)imageCache:(id)arg1 didEvictCacheEntry:(id)arg2;
- (void)additionalWorkForImageRequestCompletedWithResult:(id)arg1 request:(id)arg2 context:(id)arg3;
- (id)_tableFormats;
- (id)_imageTableForPreheatingDegradedOpportunisticRequestsWithPhotoLibrary:(id)arg1;
- (void)_preheatImageTable:(id)arg1 forAssets:(id)arg2;
- (id)_cacheFailReasonFromInfo:(id)arg1;
- (_Bool)_canPopulateCacheForResult:(id)arg1;
- (_Bool)_cacheImageResult:(id)arg1 forRequest:(id)arg2;
- (void)_handleCachingImageRequestResult:(id)arg1 request:(id)arg2 context:(id)arg3;
- (void)_commitCacheChanges;
- (void)_scheduleOrCommitCacheChangesIfNeeded;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(_Bool *)arg3 didFindImage:(_Bool *)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end
