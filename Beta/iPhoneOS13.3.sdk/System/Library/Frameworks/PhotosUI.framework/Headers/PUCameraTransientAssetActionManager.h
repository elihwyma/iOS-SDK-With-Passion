/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionManager.h>

@interface PUCameraTransientAssetActionManager : PUAssetActionManager

- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;

@end
