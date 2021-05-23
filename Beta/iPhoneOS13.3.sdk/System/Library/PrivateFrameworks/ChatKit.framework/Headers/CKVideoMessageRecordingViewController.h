/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKActionMenuController, CKActionMenuItem, CKMediaObject, CKRecordingElapsedTimeView, NSError, NSString, UIButton, UIImagePickerController, UIView, UIWindow;

@protocol CKVideoMessageRecordingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKVideoMessageRecordingViewController : UIViewController

{
    UIView *_presentationView;
    UIWindow *_overlayWindow;
    _Bool _presented;
    _Bool _previewWarmedUp;
    _Bool _showingVideo;
    _Bool _recording;
    _Bool _sending;
    _Bool _canceled;
    _Bool _triedToRecord;
    id <CKVideoMessageRecordingViewControllerDelegate> _videoMessageDelegate;
    UIView *_topBackgroundView;
    CKRecordingElapsedTimeView *_timerView;
    CKActionMenuController *_videoActionMenuController;
    CKActionMenuItem *_photoMenuItem;
    UIButton *_swapCameraButton;
    unsigned long long _enableCancel;
    CKMediaObject *_mediaObjectForSending;
    NSError *_captureError;
    CDUnknownBlockType _mediaExportCompletionBlock;
    UIImagePickerController *_cameraViewController;
}

@property (retain, nonatomic) UIView *topBackgroundView;
@property (retain, nonatomic) CKRecordingElapsedTimeView *timerView;
@property (retain, nonatomic) CKActionMenuController *videoActionMenuController;
@property (retain, nonatomic) CKActionMenuItem *photoMenuItem;
@property (retain, nonatomic) UIButton *swapCameraButton;
@property (nonatomic) _Bool recording;
@property (nonatomic) _Bool sending;
@property (nonatomic) _Bool canceled;
@property (nonatomic) _Bool triedToRecord;
@property (nonatomic) unsigned long long enableCancel;
@property (retain, nonatomic) CKMediaObject *mediaObjectForSending;
@property (retain, nonatomic) NSError *captureError;
@property (copy, nonatomic) CDUnknownBlockType mediaExportCompletionBlock;
@property (retain, nonatomic) UIImagePickerController *cameraViewController;
@property (weak, nonatomic) id <CKVideoMessageRecordingViewControllerDelegate> videoMessageDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)send;
- (void)viewDidLoad;
- (_Bool)shouldAutorotate;
- (id)childViewControllerForStatusBarHidden;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)record;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopRecordingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(_Bool)arg2;
- (void)ckVideoRecorderRecordingCanceled:(id)arg1;
- (void)ckVideoRecorder:(id)arg1 imageDataCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorder:(id)arg1 videoCaptured:(id)arg2 error:(id)arg3;
- (void)_previewWarmedUp:(id)arg1;
- (void)swapCamera:(id)arg1;
- (void)cancelMenuItemAction:(id)arg1;
- (void)photoMenuItemAction:(id)arg1;
- (void)videoMenuItemAction:(id)arg1;
- (void)presentVideoActionMenuController;
- (void)_cameraOrientationChanged:(id)arg1;
- (void)_animateVideoIn;
- (void)takePictureWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_cleanupCamera;
- (id)initWithPresentationView:(id)arg1;

@end
