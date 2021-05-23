/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUCacheNode.h>

@protocol NUBufferImage;

@interface NUMemoryCacheNode : NUCacheNode

{
    id <NUBufferImage> _cachedImage;
}

@property (readonly) id <NUBufferImage> cachedImage;

- (id)persistentURL;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (_Bool)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id *)arg2;
- (void)resolveSourceWithResponse:(struct NUResponse *)arg1;

@end
