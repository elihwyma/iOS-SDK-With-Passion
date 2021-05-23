/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@class NUSourceNode;

@interface NUSourceContainerNode : NURenderNode

@property (readonly) NUSourceNode *primarySourceNode;

+ (id)sourceContainerNodeFromSource:(id)arg1 error:(out id *)arg2;

- (unsigned long long)_hash;
- (id)initWithAssetIdentifier:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)preparedSourceNodeForPipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(out id *)arg4;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(CDStruct_912cb5d2 *)arg2 error:(out id *)arg3;
- (_Bool)isEqualToRenderNode:(id)arg1;

@end
