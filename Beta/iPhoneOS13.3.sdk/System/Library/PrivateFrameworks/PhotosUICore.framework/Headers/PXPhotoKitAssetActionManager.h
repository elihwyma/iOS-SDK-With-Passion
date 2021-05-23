/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetActionManager.h>

@class NSMapTable, NSMutableDictionary, PHPerson, PXAssetActionPerformer, PXPhotoKitAssetsDataSourceManager, PXPhotosDataSource;

@interface PXPhotoKitAssetActionManager : PXAssetActionManager

{
    PXPhotoKitAssetsDataSourceManager *_dataSourceManager;
    PHPerson *_person;
    NSMutableDictionary *__performerClassByType;
    NSMapTable *__actionTypeByBarButtonItem;
    PXPhotosDataSource *__dataSourceSnapshot;
    PXAssetActionPerformer *__activePerformer;
}

@property (nonatomic, readonly) NSMutableDictionary *_performerClassByType;
@property (nonatomic, readonly) NSMapTable *_actionTypeByBarButtonItem;
@property (nonatomic, readonly) PXPhotosDataSource *_dataSourceSnapshot;
@property (retain, nonatomic, setter=_setActivePerformer:) PXAssetActionPerformer *_activePerformer;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PHPerson *person;

- (_Bool)canPerformActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)barButtonItemForActionType:(id)arg1;
- (id)alertActionForActionType:(id)arg1;
- (void)_handleBarButtonItem:(id)arg1;
- (void)_handleActionPerformerComplete:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (id)initWithSelectionManager:(id)arg1;
- (_Bool)canPerformAssetVariationActions;
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;
- (void)registerPerformerClass:(Class)arg1 forType:(id)arg2;
- (void)_handlePreviewAction:(id)arg1 actionType:(id)arg2;
- (void)_handleActionType:(id)arg1;

@end
