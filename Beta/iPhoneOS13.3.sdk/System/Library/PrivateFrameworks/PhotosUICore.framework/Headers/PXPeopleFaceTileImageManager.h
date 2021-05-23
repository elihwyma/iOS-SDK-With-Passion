/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, PXLRUMemoryCache;

@protocol NSObject, OS_dispatch_queue;

@interface PXPeopleFaceTileImageManager : NSObject

{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_queue> *_requestLookupIsolationQueue;
    NSObject<OS_dispatch_queue> *_cropCacheQueue;
    NSMapTable *_faceTileRequestByRequestID;
    NSMapTable *_highPriorityCachedIdentifiers;
    NSObject<OS_dispatch_queue> *_highPriorityCachedIdentifiersQueue;
    PXLRUMemoryCache *_memoryCache;
    id <NSObject> _memoryWarningObserver;
    id <NSObject> _backgroundEntraceObserver;
}

@property (nonatomic, readonly) PXLRUMemoryCache *memoryCache;
@property (retain, nonatomic) id <NSObject> memoryWarningObserver;
@property (retain, nonatomic) id <NSObject> backgroundEntraceObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (id)imageTransformQueue;

- (id)init;
- (void)dealloc;
- (void)cancelRequest:(int)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_handleMemoryClearRequest;
- (int)requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5 fastDisplayBlock:(CDUnknownBlockType)arg6;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6 fastDisplayBlock:(CDUnknownBlockType)arg7;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 fastDisplayBlock:(CDUnknownBlockType)arg8;
- (int)_requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 fastDisplayBlock:(CDUnknownBlockType)arg8;
- (void)_requestFaceTileImageRequest:(id)arg1 faceImageRequest:(id)arg2 cacheResult:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4 fastDisplayBlock:(CDUnknownBlockType)arg5;
- (struct CGRect)_boundedCropRectForRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2 withTargetAspectRatio:(double)arg3;
- (void)_cropImage:(id)arg1 synchronous:(_Bool)arg2 cacheResult:(_Bool)arg3 isDegraded:(_Bool)arg4 forRequest:(id)arg5 cropInfo:(CDStruct_7898798c)arg6 didCallFastBlock:(_Bool)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (struct CGRect)_normalizedAspectCropRectForFaceRect:(struct CGRect)arg1 aspectRatio:(double)arg2 inImageRect:(struct CGRect)arg3;
- (_Bool)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams)arg2 isLowResResult:(_Bool *)arg3;
- (void)_addRequestResult:(id)arg1 forIdentifier:(id)arg2;
- (id)_fetchAssetFromFace:(id)arg1;
- (id)_fetchKeyFaceFromPerson:(id)arg1 error:(id *)arg2;
- (_Bool)isActiveRequestWithRequestID:(int)arg1;
- (void)invalidateCacheForPerson:(id)arg1;
- (void)addHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;
- (void)removeHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;
- (void)clearMemoryCache;
- (void)_startListeningForChanges;
- (void)_stopListeningForChanges;
- (_Bool)_doesChange:(id)arg1 containVisibleChangesToPHAssetWithOID:(id)arg2;

@end
