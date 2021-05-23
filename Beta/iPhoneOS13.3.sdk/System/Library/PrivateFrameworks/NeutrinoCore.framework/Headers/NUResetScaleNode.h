/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUAbstractScaleNode.h>

@interface NUResetScaleNode : NUAbstractScaleNode

{
    CDStruct_1e2b2e48 _scale;
}

@property (nonatomic, readonly) CDStruct_912cb5d2 scale;

- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithInput:(id)arg1 scale:(CDStruct_912cb5d2)arg2;

@end
