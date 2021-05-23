/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@interface NUAbstractScaleNode : NURenderNode

@property (nonatomic, readonly) NURenderNode *inputNode;

- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)_scaleImage:(id)arg1 by:(CDStruct_912cb5d2)arg2 sampleMode:(long long)arg3;

@end
