/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PHFetchResult;

@interface PXCuratedLibraryShowMapActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

{
    PHFetchResult *_assetsFetchResult;
}

@property (nonatomic, readonly) PHFetchResult *assetsFetchResult;

+ (_Bool)canPerformWithFetchResult:(id)arg1;

- (id)activityType;
- (void)performUserInteractionTask;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)activitySystemImageName;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 assetsFetchResult:(id)arg3;

@end
