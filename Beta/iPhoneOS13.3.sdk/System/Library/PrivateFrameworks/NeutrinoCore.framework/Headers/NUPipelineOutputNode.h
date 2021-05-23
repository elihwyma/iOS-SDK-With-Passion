/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@interface NUPipelineOutputNode : NURenderNode

- (id)initWithInput:(id)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateImage:(out id *)arg1;

@end
