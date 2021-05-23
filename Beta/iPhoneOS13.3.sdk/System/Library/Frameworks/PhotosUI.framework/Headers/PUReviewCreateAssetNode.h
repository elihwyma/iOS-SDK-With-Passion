/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXRunNode.h>

@class NSArray, NSString, PUReviewAsset;

@protocol PUAdjustmentURLNode, PUImageDataRenderNode, PUImageInfoNode, PUReviewImageURLNode, PUReviewVideoURLNode, PUVideoAssetNode, PUVideoURLExportNode, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewCreateAssetNode : PXRunNode

{
    PUReviewAsset *_reviewAsset;
    PUReviewAsset *_inputAsset;
    id <PUReviewImageURLNode> _imageInfoNode;
    id <PUImageInfoNode> _renderImageInfoNode;
    id <PUImageDataRenderNode> _renderImageDataNode;
    id <PUReviewVideoURLNode> _videoURLNode;
    id <PUVideoAssetNode> _videoAssetNode;
    id <PUVideoURLExportNode> _renderVideoURLNode;
    id <PUVideoAssetNode> _renderVideoAssetNode;
    id <PUAdjustmentURLNode> _adjustmentURLNode;
}

@property (nonatomic, readonly) PUReviewAsset *inputAsset;
@property (nonatomic, readonly) id <PUReviewImageURLNode> imageInfoNode;
@property (nonatomic, readonly) id <PUImageInfoNode> renderImageInfoNode;
@property (nonatomic, readonly) id <PUImageDataRenderNode> renderImageDataNode;
@property (nonatomic, readonly) id <PUReviewVideoURLNode> videoURLNode;
@property (nonatomic, readonly) id <PUVideoAssetNode> videoAssetNode;
@property (nonatomic, readonly) id <PUVideoURLExportNode> renderVideoURLNode;
@property (nonatomic, readonly) id <PUVideoAssetNode> renderVideoAssetNode;
@property (nonatomic, readonly) id <PUAdjustmentURLNode> adjustmentURLNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) _Bool waiting;
@property (readonly, getter=isRunning) _Bool running;
@property (readonly, getter=isComplete) _Bool complete;
@property (readonly, getter=isCanceled) _Bool canceled;
@property (weak, nonatomic) id <PXRunNodeDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) PUReviewAsset *reviewAsset;

- (void)run;
- (id)initWithInputAsset:(id)arg1 imageInfoNode:(id)arg2 renderImageInfoNode:(id)arg3 renderImageDataNode:(id)arg4 videoURLNode:(id)arg5 videoAssetNode:(id)arg6 renderVideoURLNode:(id)arg7 renderVideoAssetNode:(id)arg8 adjustmentURLNode:(id)arg9;

@end
