/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUVideoCacheNode.h>

@interface PIAutoLoopCacheNode : NUVideoCacheNode

+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;

- (id)persistentURL;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)descriptionSubClassHook;
- (long long)subsampleFactorForScale:(CDStruct_912cb5d2)arg1;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id *)arg2;
- (id)outputSettings:(out id *)arg1;
- (id)persistentLongExposureURL;
- (id)persistentMaskURL;

@end
