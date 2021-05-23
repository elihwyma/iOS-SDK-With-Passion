/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetActionManager.h>

@class NSMutableDictionary, PXCMMPhotoKitImportStatusManager;

@interface PXCMMAssetActionManager : PXAssetActionManager

{
    NSMutableDictionary *_performerClassByType;
    PXCMMPhotoKitImportStatusManager *_importStatusManager;
}

- (_Bool)canPerformActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (_Bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;
- (id)initWithSelectionManager:(id)arg1 importStatusManager:(id)arg2 allowsSelection:(_Bool)arg3;

@end
