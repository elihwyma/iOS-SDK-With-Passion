/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableIndexSet, NSMutableSet;

@protocol OS_dispatch_queue;

@interface PXGAssetImageCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableIndexSet *_activeRequestIDs;
    NSMutableSet *_activeAssets;
    NSMutableArray *_entries;
    NSMutableArray *_reusableEntries;
}

- (id)init;
- (struct CGImage *)cachedImageWithOrientation:(unsigned int *)arg1 forAsset:(id)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4 forRequestID:(int)arg5;
- (void)cacheImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 forRequestID:(int)arg3;
- (void)clearCachedImagesForRequestIDs:(id)arg1;

@end
