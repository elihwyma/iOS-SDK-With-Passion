/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/Swift-Protocol.h>

@class AVAsset, NSArray, NSData, NSString, PUEditableMediaProviderAdjustmentDataNode, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode;

@protocol PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditBaseMediaNode : PXRunNode <Swift>

{
    PUEditableMediaProviderImageDataNode *_imageDataNode;
    PUEditableMediaProviderVideoAssetNode *_videoAssetNode;
    PXRunNode *_gatheringNode;
    NSData *_imageData;
    AVAsset *_videoAsset;
    PUEditableMediaProviderAdjustmentDataNode *_adjustmentNode;
}

@property (nonatomic, readonly) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode;
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
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) AVAsset *videoAsset;

- (void)run;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;
- (id)initWithAdjustmentNode:(id)arg1;

@end
