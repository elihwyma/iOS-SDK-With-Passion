/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXRunNode.h>

@class PHAdjustmentData, PUEditableMediaProvider;

@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUEditableMediaProviderAdjustmentDataNode : PXRunNode

{
    int _requestID;
    id <PUEditableAsset> _asset;
    PHAdjustmentData *_adjustmentData;
    PUEditableMediaProvider *_mediaProvider;
}

@property (nonatomic, readonly) id <PUEditableAsset> asset;
@property (nonatomic, readonly) PHAdjustmentData *adjustmentData;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;

- (void)run;
- (void)didCancel;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)_handleDidLoadAdjustmentData:(id)arg1 error:(id)arg2;

@end
