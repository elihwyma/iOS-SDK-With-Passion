/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCameraViewController.h>

@class NSDictionary, NSString, PLCropOverlay, PLPhotoTileViewController, PLVideoView, UIView;

@interface CAMImagePickerCameraViewController : CAMCameraViewController

{
    _Bool _editingAllowed;
    _Bool _videoEditingAllowed;
    _Bool _currentlyReviewing;
    _Bool _usingTelephonyUI;
    _Bool _statusBarWasHidden;
    int _photoSavingOptions;
    UIView *_customOverlayView;
    PLCropOverlay *__cropOverlay;
    PLPhotoTileViewController *__photoTileViewController;
    PLVideoView *__videoView;
    NSDictionary *_mostRecentPhotoProperties;
    NSDictionary *_mostRecentVideoProperties;
}

@property (nonatomic, readonly) PLCropOverlay *_cropOverlay;
@property (nonatomic, readonly) PLPhotoTileViewController *_photoTileViewController;
@property (nonatomic, readonly) PLVideoView *_videoView;
@property (nonatomic, getter=_isEditingAllowed, setter=_setEditingAllowed:) _Bool editingAllowed;
@property (nonatomic, getter=_isVideoEditingAllowed, setter=_setVideoEditingAllowed:) _Bool videoEditingAllowed;
@property (nonatomic, getter=_isCurrentlyReviewing, setter=_setCurrentlyReviewing:) _Bool currentlyReviewing;
@property (nonatomic, getter=_isUsingTelephonyUI, setter=_setUsingTelephonyUI:) _Bool usingTelephonyUI;
@property (nonatomic, getter=_photoSavingOptions, setter=_setPhotoSavingOptions:) int photoSavingOptions;
@property (copy, nonatomic, getter=_mostRecentPhotoProperties, setter=_setMostRecentPhotoProperties:) NSDictionary *mostRecentPhotoProperties;
@property (copy, nonatomic, getter=_mostRecentVideoProperties, setter=_setMostRecentVideoProperties:) NSDictionary *mostRecentVideoProperties;
@property (nonatomic, getter=_statusBarWasHidden, setter=_setStatusBarWasHidden:) _Bool statusBarWasHidden;
@property (nonatomic, getter=isShowingStandardControls) _Bool showingStandardControls;
@property (nonatomic) long long imagePickerVideoQuality;
@property (nonatomic) double maximumVideoRecordingDuration;
@property (retain, nonatomic) UIView *customOverlayView;
@property (nonatomic) struct CGAffineTransform customPreviewViewTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isEmulatingImagePicker;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (_Bool)_showsCameraControls;
- (void)_setShowsCameraControls:(_Bool)arg1;
- (id)_cameraOverlayView;
- (void)_setCameraOverlayView:(id)arg1;
- (struct CGAffineTransform)_cameraViewTransform;
- (void)_setCameraViewTransform:(struct CGAffineTransform)arg1;
- (void)_takePicture;
- (_Bool)_startVideoCapture;
- (void)_stopVideoCapture;
- (long long)_cameraDevice;
- (void)_setCameraDevice:(long long)arg1;
- (long long)_cameraCaptureMode;
- (void)_setCameraCaptureMode:(long long)arg1;
- (long long)_cameraFlashMode;
- (void)_setCameraFlashMode:(long long)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (id)initWithInitialImagePickerProperties:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (void)cropOverlayWasCancelled:(id)arg1;
- (double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
- (void)cropOverlayWasToggled:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayPause:(id)arg1;
- (_Bool)videoViewCanBeginPlayback:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(_Bool)arg2;
- (_Bool)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (long long)_videoConfigurationForImagePickerQualityType:(long long)arg1;
- (long long)_captureModeForImagePickerCameraCaptureMode:(long long)arg1;
- (long long)_captureDeviceForImagePickerCameraDevice:(long long)arg1;
- (id)_containingImagePickerController;
- (void)_applyPropertiesFromImagePicker:(id)arg1;
- (void)_createCropOverlayIfNecessary;
- (long long)_imagePickerQualityTypeForVideoConfiguration:(long long)arg1;
- (void)_updateFromEditabilityChange;
- (void)_handleEditabilityChanged:(id)arg1;
- (long long)_imagePickerCameraDeviceForCaptureDevice:(long long)arg1;
- (long long)_imagePickerCameraCaptureModeForCaptureMode:(long long)arg1;
- (long long)_imagePickerCameraFlashModeForFlashMode:(long long)arg1;
- (long long)_flashModeForImagePickerCameraFlashMode:(long long)arg1;
- (id)_currentCancelButtonTitle;
- (void)_handleCapturedImagePickerVideoAtPath:(id)arg1 withEditingMetadata:(id)arg2;
- (void)_removeFileAtPath:(id)arg1;
- (void)_resetTileViewControllerAndVideoView;
- (void)_handleCapturedImagePickerPhotoWithCropOverlayOutput:(id)arg1;
- (void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5;
- (void)handleReviewButtonReleased:(id)arg1;

@end
