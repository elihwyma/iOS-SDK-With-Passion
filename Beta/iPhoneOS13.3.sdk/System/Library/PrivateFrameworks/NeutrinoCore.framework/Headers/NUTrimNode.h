/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUTransformNode.h>

@interface NUTrimNode : NUTransformNode

{
    CDStruct_e83c9415 _range;
}

@property (readonly) CDStruct_e83c9415 range;

- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 input:(id)arg2;
- (id)_transformWithError:(out id *)arg1;
- (id)_evaluateVideoComposition:(out id *)arg1;

@end
