/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMTransientDataSource, CAMTransientImageManager, NSMutableDictionary, NSMutableSet, NSString, PUOneUpPresentationHelper, PUPhotoKitDataSourceManager, PXPhotosDataSource, UIGestureRecognizer;

@protocol CAMCameraRollControllerImageWellDelegate, CAMCameraRollControllerPresentationDelegate, CAMCameraRollControllerSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CAMCameraRollController : NSObject

{
    struct {
        _Bool respondsToSourceAssetRect;
        _Bool respondsToShouldHideSourceAsset;
        _Bool respondsToPreviewGestureDidBecomeAvailable;
        _Bool respondsToPreviewSourceRect;
        _Bool respondsToImageForReveal;
        _Bool respondsToRevealWillBegin;
        _Bool respondsToRevealDidEnd;
        _Bool respondsToWillPresentCameraRoll;
        _Bool respondsToPrefersPresentingStatusbarHiddenDidChange;
        _Bool respondsToPreferredPresentationOrientation;
    } _presentationDelegateFlags;
    _Bool _prefersPresentingStatusbarHidden;
    _Bool __allowUpdating;
    _Bool __updateIsScheduled;
    _Bool __transientAssetsAreValid;
    _Bool __oneUpVisible;
    _Bool __oneUpFullyPresented;
    _Bool __didSetupMechanismsForStoppingCaptureSession;
    _Bool __didStopCaptureSession;
    _Bool __deferringStagedMediaLoading;
    _Bool __shouldSkipPhotosFrameworkPreheat;
    unsigned short _sessionIdentifier;
    id <CAMCameraRollControllerSessionDelegate> _sessionDelegate;
    id <CAMCameraRollControllerImageWellDelegate> _imageWellDelegate;
    id <CAMCameraRollControllerPresentationDelegate> _presentationDelegate;
    UIGestureRecognizer *_previewGestureRecognizer;
    PUOneUpPresentationHelper *__oneUpPresentationHelper;
    CAMTransientDataSource *__transientDataSource;
    CAMTransientImageManager *__transientImageManager;
    PUPhotoKitDataSourceManager *__photoKitDataSourceManager;
    NSMutableSet *__sessionAssetUUIDs;
    NSMutableSet *__ignoredEV0UUIDs;
    NSMutableDictionary *__HDRUUIDToIgnoredEV0UUIDs;
    PXPhotosDataSource *__photosDataSource;
    PXPhotosDataSource *__stagedDataSource;
    NSObject<OS_dispatch_source> *__memoryWarningSource;
    NSObject<OS_dispatch_queue> *__photosFrameworksPreheatQueue;
}

@property (nonatomic, setter=_setSessionIdentifier:) unsigned short sessionIdentifier;
@property (nonatomic, readonly) PUOneUpPresentationHelper *_oneUpPresentationHelper;
@property (nonatomic, readonly) CAMTransientDataSource *_transientDataSource;
@property (nonatomic, readonly) CAMTransientImageManager *_transientImageManager;
@property (nonatomic, readonly) PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
@property (nonatomic, readonly) NSMutableSet *_sessionAssetUUIDs;
@property (nonatomic, readonly) NSMutableSet *_ignoredEV0UUIDs;
@property (nonatomic, readonly) NSMutableDictionary *_HDRUUIDToIgnoredEV0UUIDs;
@property (retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource;
@property (retain, nonatomic, setter=_setStagedDataSource:) PXPhotosDataSource *_stagedDataSource;
@property (retain, nonatomic, setter=_setPreviewGestureRecognizer:) UIGestureRecognizer *previewGestureRecognizer;
@property (nonatomic, setter=_setAllowUpdating:) _Bool _allowUpdating;
@property (nonatomic, setter=_setUpdateIsScheduled:) _Bool _updateIsScheduled;
@property (nonatomic, setter=_setTransientAssetsAreValid:) _Bool _transientAssetsAreValid;
@property (nonatomic, getter=_isOneUpVisible, setter=_setOneUpVisible:) _Bool _oneUpVisible;
@property (nonatomic, getter=_isOneUpFullyPresented, setter=_setOneUpFullyPresented:) _Bool _oneUpFullyPresented;
@property (nonatomic, setter=_setDidSetupMechanismsForStoppingCaptureSession:) _Bool _didSetupMechanismsForStoppingCaptureSession;
@property (nonatomic, setter=_setDidStopCaptureSession:) _Bool _didStopCaptureSession;
@property (nonatomic, setter=_setPrefersPresentingStatusbarHidden:) _Bool prefersPresentingStatusbarHidden;
@property (nonatomic, getter=_isDeferringStagedMediaLoading, setter=_setDeferringStagedMediaLoading:) _Bool _deferringStagedMediaLoading;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *_memoryWarningSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_photosFrameworksPreheatQueue;
@property (nonatomic, setter=_setShouldSkipPhotosFrameworkPreheat:) _Bool _shouldSkipPhotosFrameworkPreheat;
@property (weak, nonatomic) id <CAMCameraRollControllerSessionDelegate> sessionDelegate;
@property (weak, nonatomic) id <CAMCameraRollControllerImageWellDelegate> imageWellDelegate;
@property (weak, nonatomic) id <CAMCameraRollControllerPresentationDelegate> presentationDelegate;
@property (nonatomic, readonly) _Bool canPresentCameraRollViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_update;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (_Bool)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)preload;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;
- (_Bool)_isPasscodeLocked;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
- (long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1;
- (_Bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (_Bool)oneUpPresentationHelperEnableFreezeLayoutOnOrientationChange:(id)arg1;
- (void)oneUpPresentationHelper:(id)arg1 previewScrubberDidBecomeAvailable:(id)arg2;
- (long long)oneUpPresentationHelperPreferredPresentationOrientation:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)handlePresentingPanGestureRecognizer:(id)arg1;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (struct CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;
- (void)ppt_awaitPreload:(CDUnknownBlockType)arg1;
- (void)ignoreImageWellChangeNotificationForEV0UUID:(id)arg1 withHDRUUID:(id)arg2;
- (void)processTransientAssetUpdate:(id)arg1 preventingInsertion:(_Bool)arg2;
- (void)processTransientPairedVideoUpdate:(id)arg1 filterType:(long long)arg2;
- (void)didPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2;
- (_Bool)isCaptureSessionCurrent:(unsigned short)arg1;
- (void)willPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2;
- (void)processPendingBursts;
- (_Bool)isCameraRollViewControllerPresented;
- (void)resetNavigation;
- (void)presentCameraRollViewControllerAnimated:(_Bool)arg1 interactive:(_Bool)arg2 deferringStagedMediaLoading:(_Bool)arg3;
- (id)persistedThumbnailImage;
- (void)beginAllowingStagedMediaLoading;
- (_Bool)dismissCameraRollViewControllerForced:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applicationResumed:(id)arg1;
- (void)_teardownMechanismsForStoppingCaptureSession;
- (void)_scheduleUpdateIfOneUpIsActive;
- (id)_cameraRollCollectionListFetchResult;
- (void)_ensureCameraRollViewController;
- (void)_startNewSession;
- (void)_invalidateTransientAssets;
- (void)_updateTransientDataSourceIfNeeded;
- (void)clearIgnoredImageWellUUIDs;
- (void)_setupMechanismsForStoppingCaptureSessionIfNecessary;
- (void)_stopCaptureSessionIfNecessary;
- (void)_scheduleStopCaptureSessionAfterDelay:(double)arg1;
- (void)_setupMemoryWarningNotificationsIfNecessary;
- (void)_registerBrowsingViewModelChangeObserver;
- (void)_stopCaptureSessionIfNecessaryForViewModelCurrentState;
- (void)_unregisterBrowsingViewModelChangeObserver;
- (void)_cancelDelayedStopCaptureSession;
- (void)_tearDownMemoryWarningNotifications;
- (void)_stopCaptureSessionIfNecessaryFromTimeout;
- (_Bool)_shouldStopCaptureSessionForVideoPlayerOfAssetViewModel:(id)arg1;
- (_Bool)_shouldStopCaptureSessionForIrisPlayerOfAssetViewModel:(id)arg1;
- (void)_stopCaptureSessionIfNecessaryForViewModel:(id)arg1 didChange:(id)arg2;

@end
