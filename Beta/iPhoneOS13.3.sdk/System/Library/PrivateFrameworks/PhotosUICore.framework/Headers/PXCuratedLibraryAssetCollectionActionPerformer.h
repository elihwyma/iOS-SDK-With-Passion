/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXAssetCollectionReference;

@interface PXCuratedLibraryAssetCollectionActionPerformer : PXCuratedLibraryActionPerformer

{
    PXAssetCollectionReference *_assetCollectionReference;
}

@property (nonatomic, readonly) PXAssetCollectionReference *assetCollectionReference;

- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;

@end
