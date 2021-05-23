/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXActionMenuController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PHFetchResult, PXCMMSendBackSuggestionSource, PXPhotoKitAssetCollectionActionManager;

@interface PXPhotoDetailsActionMenuController : PXActionMenuController <Swift>

{
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PHFetchResult *_people;
    PXPhotoKitAssetCollectionActionManager *_assetActionManager;
}

@property (nonatomic, readonly) PXPhotoKitAssetCollectionActionManager *assetActionManager;
@property (retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (retain, nonatomic) PHFetchResult *people;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)assetCollectionActionManager;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (id)initWithActionManagers:(id)arg1;
- (id)availableActionTypes;
- (_Bool)shouldAllowPerformanceOfActionType:(id)arg1;
- (id)initWithSelectionManager:(id)arg1 displayTitleInfo:(id)arg2;

@end
