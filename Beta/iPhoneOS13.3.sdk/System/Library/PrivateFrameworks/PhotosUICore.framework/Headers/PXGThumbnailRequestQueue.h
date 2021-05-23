/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXGThumbnailRequestQueue : NSObject

{
    long long _capacity;
    long long _count;
    struct PXGThumbnailRequest *_requests;
}

@property (nonatomic) long long count;
@property (nonatomic, readonly) struct PXGThumbnailRequest *requests;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)enqueueRequestsWithItemRange:(struct _NSRange)arg1 textureRequestIDs:(struct _NSRange)arg2 displayAssetFetchResult:(id)arg3 targetSize:(struct CGSize)arg4;
- (void)sortRequests;
- (void)removeAllRequests;

@end
