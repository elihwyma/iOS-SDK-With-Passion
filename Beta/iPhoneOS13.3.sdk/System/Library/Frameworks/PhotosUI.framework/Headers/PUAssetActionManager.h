/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PXSectionedSelectionManager;

@protocol PUAssetActionManagerDelegate;

@interface PUAssetActionManager : NSObject

{
    id <PUAssetActionManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <PUAssetActionManagerDelegate> delegate;
@property (nonatomic, readonly) PXSectionedSelectionManager *px_selectionManager;

+ (CDUnknownBlockType)_unlockDeviceHandler;
+ (void)setUnlockDeviceHandler:(CDUnknownBlockType)arg1;
+ (id)actionManagerLog;

- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)_assetsByAssetCollectionForAssetReferences:(id)arg1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2;
- (id)actionPerformerForSettingFavoriteTo:(_Bool)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (_Bool)canPerformAction:(unsigned long long)arg1 onAllAssetReferences:(id)arg2;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;

@end
