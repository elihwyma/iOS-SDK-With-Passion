/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVHomeIPCameraBehavior, AVHomeIPCameraPlayerController, AVObservationController, AVPlayerController, AVPlayerViewController, AVZoomingBehavior, NSString, UIView;

@interface AVHomeIPCameraBehaviorContext : NSObject <Swift>

{
    _Bool _playbackControlsIncludeTransportControls;
    _Bool _playbackControlsIncludeDisplayModeControls;
    _Bool _playbackControlsIncludeVolumeControls;
    _Bool _zoomingEnabled;
    _Bool _microphoneEnabled;
    _Bool _livePreviewActive;
    _Bool _playbackControlsShowsLoadingIndicator;
    AVPlayerViewController *_playerViewController;
    AVHomeIPCameraBehavior *_behavior;
    UIView *_livePreviewContainerView;
    AVZoomingBehavior *_zoomingBehavior;
    AVHomeIPCameraPlayerController *_livePreviewPlayerController;
    AVPlayerController *_playerControllerToRestore;
    AVObservationController *_observationController;
    struct CGSize _livePreviewAspectRatio;
}

@property (weak, nonatomic) AVHomeIPCameraBehavior *behavior;
@property (retain, nonatomic) AVZoomingBehavior *zoomingBehavior;
@property (weak, nonatomic) AVHomeIPCameraPlayerController *livePreviewPlayerController;
@property (retain, nonatomic) AVPlayerController *playerControllerToRestore;
@property (retain, nonatomic) AVObservationController *observationController;
@property (nonatomic) _Bool playbackControlsShowsLoadingIndicator;
@property (nonatomic) _Bool playbackControlsIncludeTransportControls;
@property (nonatomic) _Bool playbackControlsIncludeDisplayModeControls;
@property (nonatomic) _Bool playbackControlsIncludeVolumeControls;
@property (nonatomic, getter=isZoomingEnabled) _Bool zoomingEnabled;
@property (nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled;
@property (nonatomic, readonly) UIView *livePreviewContainerView;
@property (nonatomic, getter=isLivePreviewActive) _Bool livePreviewActive;
@property (nonatomic) struct CGSize livePreviewAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) AVPlayerViewController *playerViewController;

- (void)dealloc;
- (void)viewDidLoad;
- (void)beginScrubbing;
- (void)endScrubbing;
- (void)willStartPictureInPictureWithViewController:(id)arg1;
- (void)didStopPictureInPicture;
- (id)initWithAVKitOwner:(id)arg1;
- (void)willAddBehavior:(id)arg1;
- (void)didAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (void)scrubToTime:(double)arg1 resolution:(double)arg2;
- (void)setBackgroundColor:(id)arg1 forContainerOfControlItem:(id)arg2;
- (void)_updatePlaybackControlsControllerAndZoomingBehavior;

@end
