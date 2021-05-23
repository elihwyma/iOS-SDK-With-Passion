/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGTextureProvider.h>

@class NSCache, NSObject;

@protocol OS_dispatch_queue;

@interface PXGCGImageTextureProvider : PXGTextureProvider

{
    NSCache *_imageCache;
    NSCache *_additionalInfoCache;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (id)init;
- (void)invalidateCache;
- (void)requestCGImageWithCacheKey:(id)arg1 imageProvider:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)requestCGImageAndAdditionalInfoWithCacheKey:(id)arg1 imageProvider:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)cacheAdditionalInfo:(id)arg1 withKey:(id)arg2;

@end
