/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@interface NULivePhotoKeyFrameMetaDataNode : NURenderNode

{
    CDStruct_1b6d18a9 _timeFromAdjustment;
}

- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 input:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;

@end
