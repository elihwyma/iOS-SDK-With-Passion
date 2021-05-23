/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetActionPerformer.h>

@class PXCMMPhotoKitImportStatusManager, PXSectionedSelectionManager;

@interface PXCMMAssetActionPerformer : PXAssetActionPerformer

{
    PXSectionedSelectionManager *_cmmSelectionManager;
    PXCMMPhotoKitImportStatusManager *_importStatusManager;
}

@property (retain, nonatomic) PXSectionedSelectionManager *cmmSelectionManager;
@property (retain, nonatomic) PXCMMPhotoKitImportStatusManager *importStatusManager;

@end
