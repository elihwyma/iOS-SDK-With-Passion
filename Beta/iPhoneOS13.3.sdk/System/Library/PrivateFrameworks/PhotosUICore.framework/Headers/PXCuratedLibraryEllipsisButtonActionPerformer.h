/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PXCuratedLibraryActionManager, PXGLayout, PXPhotoKitAssetCollectionActionManager;

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

{
    PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
    PXGLayout *_layout;
    PXCuratedLibraryActionManager *_actionManager;
}

@property (nonatomic, readonly) PXCuratedLibraryActionManager *actionManager;
@property (weak, nonatomic) PXGLayout *layout;

- (void)performUserInteractionTask;
- (_Bool)performerResetsAfterCompletion;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 actionManager:(id)arg3;
- (id)buttonSpriteReference;
- (void)_presentToUserOptionsFromActionPerformers:(id)arg1 forAssetCollectionReference:(id)arg2;

@end
