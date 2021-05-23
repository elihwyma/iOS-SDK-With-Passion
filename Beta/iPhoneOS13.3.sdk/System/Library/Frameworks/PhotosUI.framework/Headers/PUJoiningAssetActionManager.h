/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionManager.h>

@class NSMapTable;

@interface PUJoiningAssetActionManager : PUAssetActionManager

{
    NSMapTable *__actionManagerByClass;
    PUAssetActionManager *__actionManagerForNoAsset;
}

@property (nonatomic, readonly) NSMapTable *_actionManagerByClass;
@property (retain, nonatomic, setter=_setActionManagerForNoAsset:) PUAssetActionManager *_actionManagerForNoAsset;

- (id)init;
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSettingFavoriteTo:(_Bool)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (void)registerActionManager:(id)arg1 forAssetClass:(Class)arg2;
- (id)_actionManagerForAsset:(id)arg1;
- (id)_actionManagerForAssets:(id)arg1;
- (id)_actionManagerForAssetsByAssetCollection:(id)arg1;

@end
