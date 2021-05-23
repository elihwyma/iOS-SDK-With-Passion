/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class CATextLayer, LPFullScreenVideoController, LPImage, LPImageViewStyle, LPVideo, LPVideoViewConfiguration, LPVideoViewStyle, NSString, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPVideoView

{
    LPVideo *_video;
    LPVideoViewStyle *_style;
    LPImage *_posterFrame;
    LPImageViewStyle *_posterFrameStyle;
    LPVideoViewConfiguration *_configuration;
    UIView *_playButtonContainerView;
    UIView *_playButtonView;
    UIView *_muteButtonContainerView;
    UIImageView *_muteButtonView;
    UIView *_videoPlaceholderView;
    UIView *_visualEffectView;
    UIView *_pulsingLoadView;
    UIView *_containerView;
    UIView *_playbackView;
    CATextLayer *_debugIndicator;
    LPFullScreenVideoController *_fullScreenController;
    _Bool _playing;
    _Bool _hasBuilt;
    _Bool _wasPlayingOrWaitingToPlayWhenUnparented;
    _Bool _wasPlayingWhenSuspended;
    _Bool _showingPlayButton;
    _Bool _waitingForPlaybackDueToAutoplay;
    _Bool _hasEverPlayed;
    unsigned long long _lastInteractionTimestamp;
    unsigned long long _playbackWatchdogTimerID;
    unsigned int _loggingID;
    _Bool _usesSharedAudioSession;
    _Bool _waitingForPlayback;
    _Bool _fullScreen;
    double _volume;
}

@property (copy, nonatomic, readonly) LPVideoViewConfiguration *configuration;
@property (nonatomic, readonly) _Bool shouldAutoPlay;
@property (nonatomic, readonly) _Bool shouldShowMuteButton;
@property (nonatomic, readonly) _Bool usesSharedAudioSession;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic, getter=isWaitingForPlayback) _Bool waitingForPlayback;
@property (nonatomic, getter=isFullScreen) _Bool fullScreen;
@property (nonatomic) _Bool hasEverPlayed;
@property (nonatomic) double volume;
@property (nonatomic, readonly) LPVideo *video;
@property (nonatomic, readonly) UIView *playbackView;
@property (nonatomic, readonly) unsigned int loggingID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, readonly) _Bool shouldUnmuteWhenUserAdjustsVolume;
@property (nonatomic, readonly) unsigned long long lastInteractionTimestamp;
@property (nonatomic, readonly) double unobscuredAreaFraction;

- (id)init;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)isParented;
- (void)enterFullScreen;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5;
- (void)recreateFullScreenViewControllerIfNeeded;
- (void)destroyFullScreenViewController;
- (void)didChangePlayingState:(_Bool)arg1;
- (void)resetToPlaceholderView;
- (void)didChangeMutedState:(_Bool)arg1;
- (void)layoutComponentView;
- (void)fullScreenVideoDidPresent;
- (void)fullScreenVideoWillDismiss;
- (id)createFullScreenVideoViewController;
- (_Bool)usesCustomFullScreenImplementation;
- (id)createVideoPlayerView;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didEncounterPossiblyTransientPlaybackError;
- (void)didEncounterPlaybackError;
- (void)fullScreenVideoDidDismiss;
- (void)enterCustomFullScreen;
- (void)componentViewDidMoveToWindow;
- (void)_buildVideoPlaceholderView;
- (void)tapRecognized:(id)arg1;
- (void)_swapVideoPlaceholderForVideoForAutoPlay:(_Bool)arg1;
- (void)updatePlayButtonVisibility;
- (id)_createPulsingLoadIndicator;
- (void)_startPlaybackWatchdogTimer;
- (void)showMuteButton;
- (id)_createPosterFrameView;
- (void)removePlaceholderViews;
- (void)updateMuteButtonImage;
- (void)showPlayButtonAnimated:(_Bool)arg1;
- (void)hidePlayButtonAnimated:(_Bool)arg1;
- (void)_muteButtonHighlightLongPressRecognized:(id)arg1;
- (void)_muteButtonTapRecognized:(id)arg1;
- (void)userInteractedWithVideoView;
- (void)hideMuteButton;
- (void)fadeInMuteButton;

@end
