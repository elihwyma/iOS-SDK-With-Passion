/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetActionPerformer.h>

@class NSArray, NSDictionary, PHPerson, PXPhotoKitAssetsDataSourceManager, PXPhotosDataSource;

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer

{
    _Bool _shouldSkipUserConfirmation;
    NSArray *_assets;
    NSDictionary *_assetsByAssetCollection;
    PXPhotoKitAssetsDataSourceManager *_photoKitDataSourceManager;
    PHPerson *_person;
}

@property (nonatomic, readonly) PXPhotosDataSource *photosDataSourceSnapshot;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *photoKitDataSourceManager;
@property (retain, nonatomic) PHPerson *person;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSDictionary *assetsByAssetCollection;
@property (nonatomic) _Bool shouldSkipUserConfirmation;

+ (id)createAlertActionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (_Bool)canPerformWithActionManager:(id)arg1;
+ (_Bool)canPerformOnSubsetOfSelection;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void)instantlyExcludeAssetsFromDataSource;
- (void)stopExcludingAssetsFromDataSource;
- (void)forceIncludeAssetsInDataSource;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (id)createPerformerWithClass:(Class)arg1 actionType:(id)arg2;

@end
