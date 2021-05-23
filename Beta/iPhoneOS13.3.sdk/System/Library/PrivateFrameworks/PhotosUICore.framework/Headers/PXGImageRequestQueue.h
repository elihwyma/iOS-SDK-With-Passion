/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXGImageRequestPerformer;

@interface PXGImageRequestQueue : NSObject

{
    struct PXGImageRequest *_requests;
    long long _capacity;
    long long _count;
    id <PXGImageRequestPerformer> _imageRequestPerformer;
}

@property (nonatomic) long long count;
@property (retain, nonatomic) id <PXGImageRequestPerformer> imageRequestPerformer;

- (void)dealloc;
- (void)cancelTextureRequests:(id)arg1;
- (void)enqueueRequestsWithSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1 textureRequestIDs:(struct _NSRange)arg2 displayAssetFetchResult:(id)arg3 observer:(id)arg4 presentationStyles:(unsigned long long)arg5 targetSize:(struct CGSize)arg6 screenScale:(double)arg7;
- (void)performRequestsWithAllowedIDs:(id)arg1;
- (void)_removeAllRequests;
- (void)_discardIndexes:(id)arg1;

@end
