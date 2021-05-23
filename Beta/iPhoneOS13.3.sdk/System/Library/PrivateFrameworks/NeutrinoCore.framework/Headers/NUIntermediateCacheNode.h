/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUCacheNode.h>

@interface NUIntermediateCacheNode : NUCacheNode

- (id)_evaluateVideo:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id *)arg2;

@end
