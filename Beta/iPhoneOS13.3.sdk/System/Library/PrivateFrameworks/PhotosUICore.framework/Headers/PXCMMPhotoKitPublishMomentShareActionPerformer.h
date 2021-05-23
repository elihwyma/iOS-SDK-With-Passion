/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMPublishActionPerformer.h>

@class NSDate, PHMomentShare, UIAlertController;

@interface PXCMMPhotoKitPublishMomentShareActionPerformer : PXCMMPublishActionPerformer

{
    UIAlertController *_progressAlertController;
    int _thumbnailRequestID;
    int _previewRequestID;
    PHMomentShare *_momentShare;
    _Bool _didFinalize;
    NSDate *_initialStartDate;
    NSDate *_previewRequestStartDate;
    NSDate *_creationRequestStartDate;
    NSDate *_publishStartDate;
    NSDate *_finishedDate;
}

- (void)performUserInteractionTask;
- (void)_requestPreviewImagesForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)_keyAssetForMomentShareCreationWithAssets:(id)arg1;
- (id)_creationRequestForMomentShareParticipant:(id)arg1;
- (void)_presentInternalSharingAlert;
- (void)_createMomentShare;
- (void)_createMomentShareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_creatingMomentShareDidCompleteWithMomentShare:(id)arg1 error:(id)arg2;
- (void)_presentBudgetOverridePromptForMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_budgetOverridePromptForMomentShare:(id)arg1 completedWithOutcome:(_Bool)arg2 error:(id)arg3;
- (void)_setupSharingProgressController;
- (void)_publishMomentShare:(id)arg1;
- (void)_publishMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_publishingMomentShare:(id)arg1 didCompleteWithShareURL:(id)arg2 error:(id)arg3;
- (void)_acceptSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_finalizePublishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_presentAlertControllerForCurrentCPLStateIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleSharingProgressCancellation;
- (void)_performCleanupIfNeeded;

@end
