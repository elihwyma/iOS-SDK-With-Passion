/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceContainerNode.h>

@interface NULivePhotoSourceContainerNode : NUSourceContainerNode

{
    NUSourceContainerNode *_image;
    NUSourceContainerNode *_video;
}

- (id)initWithAssetIdentifier:(id)arg1;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(CDStruct_912cb5d2 *)arg2 error:(out id *)arg3;
- (id)primarySourceNode;
- (id)initWithImageContainerNode:(id)arg1 videoContainerNode:(id)arg2 assetIdentifier:(id)arg3;
- (id)containerNodeForPipelineState:(id)arg1;

@end
