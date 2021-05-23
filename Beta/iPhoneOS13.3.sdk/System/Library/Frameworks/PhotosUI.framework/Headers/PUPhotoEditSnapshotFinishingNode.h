/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXRunNode.h>

@class PUEditableMediaProviderAdjustmentDataNode, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode, PUPhotoEditBaseMediaNode;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSnapshotFinishingNode : PXRunNode

{
    PUEditableMediaProviderAdjustmentDataNode *_adjustmentNode;
    PUPhotoEditBaseMediaNode *_baseMediaNode;
    PUEditableMediaProviderImageDataNode *_currentImageNode;
    PUEditableMediaProviderVideoAssetNode *_currentVideoNode;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode;
@property (nonatomic, readonly) PUPhotoEditBaseMediaNode *baseMediaNode;
@property (nonatomic, readonly) PUEditableMediaProviderImageDataNode *currentImageNode;
@property (nonatomic, readonly) PUEditableMediaProviderVideoAssetNode *currentVideoNode;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;

- (void)run;
- (id)initWithAdjustmentNode:(id)arg1 baseMediaNode:(id)arg2 currentImageNode:(id)arg3 currentVideoNode:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
