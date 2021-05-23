/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUCacheNode.h>

@interface PILongExposureCacheNode : NUCacheNode

- (id)persistentURL;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (_Bool)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id *)arg2;
- (id)resolvedSourceNode:(out id *)arg1;
- (id)initWithAutoLoopCacheNode:(id)arg1 urlKey:(id)arg2;
- (id)autoLoopCacheNode;

@end
