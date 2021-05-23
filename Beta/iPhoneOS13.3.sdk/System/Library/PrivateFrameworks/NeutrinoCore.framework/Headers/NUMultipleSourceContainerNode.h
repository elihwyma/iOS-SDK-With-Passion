/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceContainerNode.h>

@class NSArray;

@interface NUMultipleSourceContainerNode : NUSourceContainerNode

{
    NSArray *_sources;
}

- (id)initWithAssetIdentifier:(id)arg1;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(CDStruct_912cb5d2 *)arg2 error:(out id *)arg3;
- (id)primarySourceNode;
- (id)initWithSourceNodes:(id)arg1 assetIdentifier:(id)arg2;

@end
