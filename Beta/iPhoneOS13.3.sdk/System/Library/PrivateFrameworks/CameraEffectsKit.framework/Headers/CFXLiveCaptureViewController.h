/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class CFXEffectComposition, CFXRenderer, JTImage, JTImageView, JTVideoWriter, NSMutableArray, NSObject, NSString, UIView;

@protocol CFXLiveCaptureViewControllerDelegate, OS_dispatch_queue;

@interface CFXLiveCaptureViewController : UIViewController

{
    JTImage *_liveCaptureRenderedImage;
    _Bool _useLocalCameraViewfinder;
    _Bool _isCapturing_recordingQ;
    id <CFXLiveCaptureViewControllerDelegate> _delegate;
    CFXEffectComposition *_composition;
    UIView *_containerView;
    long long _captureMode;
    JTImageView *_renderImageView;
    UIView *_debugControlsView;
    UIView *_uncroppedRenderImagePlaceHolderView;
    CFXRenderer *_renderer;
    NSObject<OS_dispatch_queue> *_recordingQ;
    JTVideoWriter *_videoWriter;
    NSObject<OS_dispatch_queue> *_liveCaptureRenderedImageQ;
    NSMutableArray *_renderFrameCompletionBlocks;
    CDStruct_1b6d18a9 _lastRenderTime;
    CDStruct_1b6d18a9 _lastRenderPreparedTime;
}

@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) JTImageView *renderImageView;
@property (weak, nonatomic) UIView *debugControlsView;
@property (retain, nonatomic) UIView *uncroppedRenderImagePlaceHolderView;
@property (retain, nonatomic) CFXRenderer *renderer;
@property (retain, nonatomic) CFXEffectComposition *composition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingQ;
@property (nonatomic) CDStruct_1b6d18a9 lastRenderTime;
@property (nonatomic) CDStruct_1b6d18a9 lastRenderPreparedTime;
@property (nonatomic) _Bool isCapturing_recordingQ;
@property (retain, nonatomic) JTVideoWriter *videoWriter;
@property (retain, nonatomic) JTImage *liveCaptureRenderedImage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *liveCaptureRenderedImageQ;
@property (retain, nonatomic) NSMutableArray *renderFrameCompletionBlocks;
@property (weak, nonatomic) id <CFXLiveCaptureViewControllerDelegate> delegate;
@property (nonatomic, readonly) CDStruct_c3b9c2ee normalizedMinimumHitTestArea;
@property (nonatomic) _Bool useLocalCameraViewfinder;
@property (nonatomic, readonly) UIView *localCameraViewfinderView;
@property (nonatomic, readonly) UIView *uncroppedCameraViewfinderPlaceholderView;
@property (nonatomic) long long captureMode;
@property (nonatomic, readonly) _Bool isCapturing;
@property (nonatomic, readonly) _Bool livePlayerIsSaturated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)instantiate;

- (id)initWithCoder:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (void)willDropCameraFrame;
- (void)CFX_installGestures;
- (void)stopRenderingCameraFrames;
- (void)CFX_createUncroppedCameraPlaceholderViewIfNecessary;
- (void)removeAllEffectsOfType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllEffects:(CDUnknownBlockType)arg1;
- (void)CFX_setAnimationEnabledForOverlays:(_Bool)arg1;
- (void)CFX_livePreviewTapped:(id)arg1;
- (void)CFX_livePreviewPanned:(id)arg1;
- (void)CFX_livePreviewPinched:(id)arg1;
- (void)CFX_livePreviewRotated:(id)arg1;
- (void)CFX_livePreviewDoubleTapped:(id)arg1;
- (struct CGPoint)locationInCaptureViewForGestureRecognizer:(id)arg1;
- (void)renderer:(id)arg1 didPrepareToRenderFrameAtTime:(CDStruct_1b6d18a9)arg2;
- (void)renderer:(id)arg1 didRenderFrame:(id)arg2;
- (void)renderVideoFrame:(id)arg1;
- (void)processAudioSample:(struct opaqueCMSampleBuffer *)arg1;
- (void)shutdownLivePlayer;
- (void)startButtonTouchUpInside:(id)arg1;
- (void)stopButtonTouchUpInside:(id)arg1;
- (void)toggleDebugControlsView:(id)arg1;
- (void)setlastRenderPreparedTime:(CDStruct_1b6d18a9)arg1;
- (void)executeAfterNextFrameIsRendered:(CDUnknownBlockType)arg1;
- (void)startRenderingCameraFrames;
- (void)pauseRenderingCameraFrames;
- (void)resumeRenderingCameraFrames;
- (void)flushRenderer;
- (void)clearFaceTrackingRenderer;
- (void)startVideoRecordingWithFlashMode:(long long)arg1;
- (void)stopVideoRecording:(CDUnknownBlockType)arg1;
- (void)cancelVideoRecording;
- (void)takeStillPhotoWithFlashMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
