/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMSession.h>

@class PHAsset, PHMomentShare, PHSuggestion, PXCMMPhotoKitImportStatusManager, PXPhotoKitAssetsDataSourceManager, PXPhotoKitMomentShareStatus;

@interface PXCMMPhotoKitSession : PXCMMSession

{
    PXCMMPhotoKitImportStatusManager *_cmmImportStatusManager;
    PXPhotoKitMomentShareStatus *_momentShareStatus;
    PHMomentShare *_momentShare;
    PHSuggestion *_suggestion;
    PHMomentShare *_originatingMomentShare;
    PHAsset *_anchorAsset;
}

@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) PHSuggestion *suggestion;
@property (nonatomic, readonly) PHMomentShare *originatingMomentShare;
@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (weak, nonatomic) PHAsset *anchorAsset;

- (id)description;
- (id)initWithContext:(id)arg1;
- (id)notificationSuppressionContexts;
- (id)momentShareStatusPresentationWithPresentationStyle:(long long)arg1;
- (id)importStatusManager;
- (id)diagnosticDictionary;
- (id)initWithPhotoKitContext:(id)arg1;

@end
