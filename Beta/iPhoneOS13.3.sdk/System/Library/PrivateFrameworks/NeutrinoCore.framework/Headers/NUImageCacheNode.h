/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUCacheNode.h>

@interface NUImageCacheNode : NUCacheNode

- (id)persistentURL;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (_Bool)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id *)arg2;

@end
