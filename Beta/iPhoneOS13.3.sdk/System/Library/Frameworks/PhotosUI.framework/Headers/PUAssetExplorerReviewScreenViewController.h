/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSIndexPath, NSMutableDictionary, NSSet, NSString, PUActivityProgressController, PUAssetExplorerReviewScreenActionManager, PUAssetExplorerReviewScreenAssetsDataSourceManager, PUAssetsDataSourceManager, PUBrowsingSession, PUJoiningMediaProvider, PUMediaProvider, PUReviewScreenBarsModel, PUReviewScreenSpec, UIAlertController;

@protocol PUAssetExplorerReviewScreenViewControllerDelegate, PUReviewAssetProvider;

@interface PUAssetExplorerReviewScreenViewController : UIViewController

{
    struct {
        _Bool respondsToDidPressCancel;
        _Bool respondsToDidPressRetake;
        _Bool respondsToDidPerformCompletionAction;
        _Bool respondsToCanPerformActionType;
        _Bool respondsToShouldEnableActionType;
        _Bool respondsToWillTransitionToSize;
    } _delegateFlags;
    id <PUAssetExplorerReviewScreenViewControllerDelegate> _delegate;
    NSIndexPath *_initialIndexPath;
    NSSet *_initialSelectedAssetUUIDs;
    NSSet *_initialDisabledLivePhotoAssetUUIDs;
    PUReviewScreenBarsModel *_reviewBarsModel;
    unsigned long long _sourceType;
    PUAssetsDataSourceManager *__clientDataSourceManager;
    PUAssetExplorerReviewScreenAssetsDataSourceManager *__reviewDataSourceManager;
    PUMediaProvider *__clientMediaProvider;
    PUJoiningMediaProvider *__reviewMediaProvider;
    id <PUReviewAssetProvider> __reviewAssetProvider;
    PUAssetExplorerReviewScreenActionManager *__actionManager;
    PUBrowsingSession *__browsingSession;
    NSMutableDictionary *__reviewAssetRequestsByUUID;
    NSMutableDictionary *__substituteAssetsByUUID;
    PUActivityProgressController *__requestProgressController;
    UIAlertController *__failedReviewAssetRequestAlertController;
    unsigned long long __options;
    PUReviewScreenSpec *__spec;
}

@property (nonatomic, readonly) PUAssetsDataSourceManager *_clientDataSourceManager;
@property (nonatomic, readonly) PUAssetExplorerReviewScreenAssetsDataSourceManager *_reviewDataSourceManager;
@property (nonatomic, readonly) PUMediaProvider *_clientMediaProvider;
@property (nonatomic, readonly) PUJoiningMediaProvider *_reviewMediaProvider;
@property (nonatomic, readonly) id <PUReviewAssetProvider> _reviewAssetProvider;
@property (nonatomic, readonly) PUAssetExplorerReviewScreenActionManager *_actionManager;
@property (nonatomic, readonly) PUBrowsingSession *_browsingSession;
@property (nonatomic, readonly) NSMutableDictionary *_reviewAssetRequestsByUUID;
@property (nonatomic, readonly) NSMutableDictionary *_substituteAssetsByUUID;
@property (retain, nonatomic, setter=_setRequestProgressController:) PUActivityProgressController *_requestProgressController;
@property (retain, nonatomic, setter=_setFailedReviewAssetRequestAlertController:) UIAlertController *_failedReviewAssetRequestAlertController;
@property (nonatomic, readonly) unsigned long long _options;
@property (nonatomic, readonly) PUReviewScreenSpec *_spec;
@property (weak, nonatomic) id <PUAssetExplorerReviewScreenViewControllerDelegate> delegate;
@property (nonatomic, readonly) PUAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (copy, nonatomic, readonly) NSIndexPath *initialIndexPath;
@property (copy, nonatomic, readonly) NSSet *initialSelectedAssetUUIDs;
@property (copy, nonatomic, readonly) NSSet *initialDisabledLivePhotoAssetUUIDs;
@property (nonatomic, readonly) PUReviewScreenBarsModel *reviewBarsModel;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_handleProgressControllerCanceled:(id)arg1;
- (void)_showFailedReviewAssetRequestAlert;
- (id)reviewAssetProviderRequestForDisplayAsset:(id)arg1;
- (_Bool)assetExplorerReviewScreenActionManager:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (_Bool)assetExplorerReviewScreenActionManager:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (id)reviewScreenBarsModelForAssetExplorerReviewScreenActionManager:(id)arg1;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didPressSelectForAsset:(id)arg2;
- (void)assetExplorerReviewScreenActionManagerDidPressCancel:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressDone:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressRetake:(id)arg1;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didToggleLivePhoto:(id)arg2;
- (void)assetExplorerReviewScreenActionManagerDidPressSend:(id)arg1;
- (void)funEffectsViewController:(id)arg1 didSaveAsset:(id)arg2 withCompletion:(unsigned long long)arg3;
- (void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2;
- (void)photoEditController:(id)arg1 didFinishEditingSessionForAsset:(id)arg2 completed:(_Bool)arg3;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7 reviewBarsModel:(id)arg8 options:(unsigned long long)arg9;
- (id)_createBrowsingSessionIfNecessary;
- (id)_remainingReviewAssetRequests;
- (id)_reviewAssetRequestForAssetUUID:(id)arg1;
- (id)_createReviewAssetRequestForAsset:(id)arg1;
- (void)_updateForCompletedReviewAssetRequest:(id)arg1;
- (void)_cancelReviewAssetRequestForAssetUUID:(id)arg1;
- (void)_cancelReviewAssetRequests;
- (void)_requestReviewAssetForAsset:(id)arg1;
- (void)_handleReviewAssetRequest:(id)arg1 completedWithSuccess:(_Bool)arg2 canceled:(_Bool)arg3 error:(id)arg4 reviewAsset:(id)arg5;
- (void)_handleFailedReviewAssetRequestAlertControllerDismissal;
- (id)_createProgressControllerForRemainingRequests:(id)arg1;
- (void)_tearDownProgressController;
- (id)_substituteAssetForUUID:(id)arg1;
- (void)_setSubstituteAsset:(id)arg1;
- (void)_updateWithSubstituteAsset:(id)arg1 shouldSelect:(_Bool)arg2;
- (void)_deleteAllLinkedFiles;
- (id)_getSelectedSubstituteAssetsAndRemoveFilesForUnneededAssets;
- (void)_handleCompletionAction:(unsigned long long)arg1;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didPressFunEffectsForAsset:(id)arg2;
- (void)_performCancelAction;
- (void)_performRetakeAction;
- (void)_performCompletionAction:(unsigned long long)arg1;
- (void)_performCompletionActionSteps:(unsigned long long)arg1;
- (void)_presentConfidentialityAlertWithConfirmAction:(CDUnknownBlockType)arg1 abortAction:(CDUnknownBlockType)arg2;

@end
