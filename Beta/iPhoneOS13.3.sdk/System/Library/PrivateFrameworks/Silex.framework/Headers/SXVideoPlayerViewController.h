/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIViewController.h>

@class AVPlayerViewController, NSString, SVAdPrivacyButton, SVKeyValueObserver, SVLearnMoreButton, SXAutomaticFullscreenVideoPlaybackBehaviorManager, SXPlaybackCoordinator, SXVideoAdSkipButton, SXVideoPlaybackQueue, SXVideoVolumeObserver, UIActivityIndicatorView, UIGestureRecognizer;

@protocol SVVolumeReporting, SXVideoAdProviding, SXVideoPlayerViewControllerDataSource, SXVideoPlayerViewControllerDelegate;

@interface SXVideoPlayerViewController : UIViewController

{
    _Bool _fullscreen;
    _Bool _playButtonTapped;
    id <SXVideoPlayerViewControllerDelegate> _delegate;
    id <SXVideoPlayerViewControllerDataSource> _dataSource;
    unsigned long long _mode;
    unsigned long long _fullscreenBehavior;
    SXVideoPlaybackQueue *_queue;
    SXPlaybackCoordinator *_coordinator;
    id <SXVideoAdProviding> _videoAd;
    AVPlayerViewController *_playerViewController;
    SVLearnMoreButton *_learnMoreButton;
    SXVideoAdSkipButton *_skipButton;
    SVAdPrivacyButton *_adPrivacyButton;
    UIActivityIndicatorView *_activityIndicatorView;
    SVKeyValueObserver *_videoBoundsObserver;
    SXAutomaticFullscreenVideoPlaybackBehaviorManager *_fullscreenBehaviorManager;
    id <SVVolumeReporting> _volumeReporter;
    SXVideoVolumeObserver *_volumeObserver;
    UIGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) SXVideoPlaybackQueue *queue;
@property (retain, nonatomic) SXPlaybackCoordinator *coordinator;
@property (retain, nonatomic) id <SXVideoAdProviding> videoAd;
@property (nonatomic) _Bool playButtonTapped;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) SVLearnMoreButton *learnMoreButton;
@property (retain, nonatomic) SXVideoAdSkipButton *skipButton;
@property (retain, nonatomic) SVAdPrivacyButton *adPrivacyButton;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) SVKeyValueObserver *videoBoundsObserver;
@property (nonatomic, readonly) SXAutomaticFullscreenVideoPlaybackBehaviorManager *fullscreenBehaviorManager;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, getter=isFullscreen) _Bool fullscreen;
@property (nonatomic, readonly) id <SVVolumeReporting> volumeReporter;
@property (retain, nonatomic) SXVideoVolumeObserver *volumeObserver;
@property (nonatomic, readonly) UIGestureRecognizer *tapGesture;
@property (weak, nonatomic) id <SXVideoPlayerViewControllerDelegate> delegate;
@property (weak, nonatomic) id <SXVideoPlayerViewControllerDataSource> dataSource;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic) unsigned long long fullscreenBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *viewControllerForModalPresentation;

- (void)dealloc;
- (void)pause;
- (void)finished;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)updateViewConstraints;
- (void)tapped;
- (void)advance;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (_Bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)playbackCoordinatorResumedPlayback:(id)arg1;
- (void)playbackCoordinatorPausedPlayback:(id)arg1;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (void)fullscreenBehaviorManagerRequiresFullscreenPlayback:(id)arg1;
- (void)playWithButtonTapped:(_Bool)arg1;
- (id)initWithVolumeReporter:(id)arg1;
- (void)enterFullscreenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)adSkipButtonTapped:(id)arg1;
- (void)adPrivacyButtonTapped:(id)arg1;
- (void)setupQueueIfNeeded;
- (void)startPlaybackForCoordinatorIfAllowed:(id)arg1;
- (void)refreshControlsForPlaybackCoordinator:(id)arg1;
- (void)updateSkipButtonWithThreshold:(unsigned long long)arg1 time:(double)arg2;
- (_Bool)playbackAllowedForPlaybackCoordinator:(id)arg1;
- (void)transitionToCoordinator:(id)arg1;
- (void)exitFullscreenWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
