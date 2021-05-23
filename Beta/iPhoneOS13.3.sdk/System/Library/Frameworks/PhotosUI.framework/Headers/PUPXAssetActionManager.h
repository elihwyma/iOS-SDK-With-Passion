/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionManager.h>

@class PXAssetActionManager;

__attribute__((visibility("hidden")))
@interface PUPXAssetActionManager : PUAssetActionManager

{
    PXAssetActionManager *_underlyingActionManager;
}

- (id)init;
- (id)px_selectionManager;
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2;
- (id)initWithUnderlyingActionManager:(id)arg1;
- (id)_selectionSnapshotForAssetReferences:(id)arg1;

@end
