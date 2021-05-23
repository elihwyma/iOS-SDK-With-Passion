/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionPerformer.h>

@class PXForYouSuggestionDisplayAsset, PXPhotoKitAdjustedUIMediaProvider;

@protocol PUForYouSuggestionActionPerformerDelegate;

__attribute__((visibility("hidden")))
@interface PUForYouSuggestionActionPerformer : PUAssetActionPerformer

{
    PXForYouSuggestionDisplayAsset *_asset;
    PXPhotoKitAdjustedUIMediaProvider *_mediaProvider;
    id <PUForYouSuggestionActionPerformerDelegate> _statusDelegate;
}

@property (nonatomic, readonly) PXForYouSuggestionDisplayAsset *asset;
@property (nonatomic, readonly) PXPhotoKitAdjustedUIMediaProvider *mediaProvider;
@property (weak, nonatomic) id <PUForYouSuggestionActionPerformerDelegate> statusDelegate;

- (id)init;
- (id)initWithAsset:(id)arg1;

@end
