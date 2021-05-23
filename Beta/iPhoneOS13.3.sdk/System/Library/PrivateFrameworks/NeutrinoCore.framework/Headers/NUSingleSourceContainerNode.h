/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceContainerNode.h>

@class NUSourceNode;

@interface NUSingleSourceContainerNode : NUSourceContainerNode

{
    NUSourceNode *_source;
}

- (id)initWithAssetIdentifier:(id)arg1;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(CDStruct_912cb5d2 *)arg2 error:(out id *)arg3;
- (id)initWithSourceNode:(id)arg1 assetIdentifier:(id)arg2;
- (id)primarySourceNode;

@end
