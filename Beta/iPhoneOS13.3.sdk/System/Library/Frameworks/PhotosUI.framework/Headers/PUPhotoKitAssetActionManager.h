/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionManager.h>

@class PUPhotoKitDataSourceManager;

@interface PUPhotoKitAssetActionManager : PUAssetActionManager

{
    _Bool _enableNavigateToPhotos;
    PUPhotoKitDataSourceManager *_dataSourceManager;
}

@property (retain, nonatomic) PUPhotoKitDataSourceManager *dataSourceManager;
@property (nonatomic) _Bool enableNavigateToPhotos;

+ (Class)actionPerformerClassForActionType:(unsigned long long)arg1;

- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSettingFavoriteTo:(_Bool)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(CDStruct_1b6d18a9)arg2;
- (id)_photoKitAssetsDataSource;
- (_Bool)_actionTypeIsSimple:(unsigned long long)arg1;

@end
