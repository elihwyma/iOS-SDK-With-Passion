/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class AVPlayerLooper, AVQueuePlayer, HMCameraClip, HMCameraClipFetchVideoAssetContextOperation, HMCameraProfile, HUCameraRecordingPlayerView, NSOperationQueue, NSString, NSURL, UIActivityIndicatorView, UIButton, UILabel, UITextView;

@interface HUCameraRecordingExportPreviewViewController : UIViewController

{
    _Bool _hasVideoPreview;
    HMCameraClip *_cameraClip;
    HMCameraProfile *_cameraProfile;
    NSURL *_exportURL;
    HMCameraClipFetchVideoAssetContextOperation *_videoDownloadOperation;
    AVQueuePlayer *_queuePlayer;
    AVPlayerLooper *_looper;
    HUCameraRecordingPlayerView *_playerView;
    UILabel *_descriptionLabel;
    UIButton *_submitButton;
    UITextView *_learnMoreTextView;
    CDUnknownBlockType _completionHandler;
    id _queuePlayerObserver;
    UIActivityIndicatorView *_loadingIndicatorView;
    NSOperationQueue *_backgroundSessionQueue;
}

@property (weak, nonatomic) HMCameraClip *cameraClip;
@property (weak, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) NSURL *exportURL;
@property (retain, nonatomic) HMCameraClipFetchVideoAssetContextOperation *videoDownloadOperation;
@property (nonatomic) _Bool hasVideoPreview;
@property (weak, nonatomic) AVQueuePlayer *queuePlayer;
@property (retain, nonatomic) AVPlayerLooper *looper;
@property (retain, nonatomic) HUCameraRecordingPlayerView *playerView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) UITextView *learnMoreTextView;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) id queuePlayerObserver;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) NSOperationQueue *backgroundSessionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_addConstraints;
- (void)prepareRecordingForExport;
- (void)cancelSubmission;
- (void)_loadPreviewInterface;
- (void)_loadLoadingInterface;
- (void)playVideoFile;
- (void)didDismissPrivacyViewController;
- (void)_displayFailureToSubmitAlert;
- (void)_stripAndTruncateRecording;
- (void)submitCurrentClip;
- (void)showPrivacyInformation;
- (id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
