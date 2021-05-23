/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitAssetActionManager.h>

@protocol PUVideoListAssetExpungeActionPerformerDelegate;

__attribute__((visibility("hidden")))
@interface PUVideoListAssetActionManager : PUPhotoKitAssetActionManager

{
    id <PUVideoListAssetExpungeActionPerformerDelegate> _actionPerformerDelegate;
}

@property (retain, nonatomic) id <PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate;

- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;

@end
