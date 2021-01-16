//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/CALayerDelegate-Protocol.h>
#import <LinkPresentation/LPMediaPlayer-Protocol.h>

@class CATextLayer, LPFullScreenVideoController, LPImage, LPImageViewStyle, LPVideo, LPVideoViewConfiguration, LPVideoViewStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPVideoView : LPComponentView <CALayerDelegate, UIGestureRecognizerDelegate, LPMediaPlayer>
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
    BOOL _playing;
    BOOL _hasBuilt;
    BOOL _wasPlayingOrWaitingToPlayWhenUnparented;
    BOOL _wasPlayingWhenSuspended;
    BOOL _showingPlayButton;
    BOOL _waitingForPlaybackDueToAutoplay;
    BOOL _hasEverPlayed;
    NSUInteger _lastInteractionTimestamp;
    NSUInteger _playbackWatchdogTimerID;
    unsigned int _loggingID;
    BOOL _usesSharedAudioSession;
    BOOL _waitingForPlayback;
    BOOL _fullScreen;
    double _volume;
}

@property(readonly, nonatomic) unsigned int loggingID; // @synthesize loggingID=_loggingID;
@property(readonly, nonatomic) UIView *playbackView; // @synthesize playbackView=_playbackView;
@property(readonly, nonatomic) LPVideo *video; // @synthesize video=_video;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) BOOL hasEverPlayed; // @synthesize hasEverPlayed=_hasEverPlayed;
@property(nonatomic, getter=isFullScreen) BOOL fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic, getter=isWaitingForPlayback) BOOL waitingForPlayback; // @synthesize waitingForPlayback=_waitingForPlayback;
@property(readonly, nonatomic) BOOL usesSharedAudioSession; // @synthesize usesSharedAudioSession=_usesSharedAudioSession;
// - (void).cxx_destruct;
@property(nonatomic, getter=isActive) BOOL active;
- (void)_muteButtonTapRecognized:(id)arg1;
- (void)_muteButtonHighlightLongPressRecognized:(id)arg1;
- (void)fullScreenVideoDidDismiss;
- (void)fullScreenVideoWillDismiss;
- (void)fullScreenVideoDidPresent;
- (void)enterFullScreen;
- (void)recreateFullScreenViewControllerIfNeeded;
- (void)destroyFullScreenViewController;
- (void)tapRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_buildVideoPlaceholderView;
- (id)_createPosterFrameView;
@property(nonatomic, getter=isMuted) BOOL muted;
@property(readonly, nonatomic) BOOL shouldShowMuteButton;
- (void)fadeInMuteButton;
- (void)hideMuteButton;
- (void)showMuteButton;
- (void)hidePlayButtonAnimated:(BOOL)arg1;
- (void)showPlayButtonAnimated:(BOOL)arg1;
- (void)updatePlayButtonVisibility;
- (void)didChangeMutedState:(BOOL)arg1;
- (void)updateMuteButtonImage;
- (void)didEncounterPossiblyTransientPlaybackError;
- (void)didEncounterPlaybackError;
- (void)didChangePlayingState:(BOOL)arg1;
- (void)removePlaceholderViews;
- (void)resetToPlaceholderView;
- (void)enterCustomFullScreen;
- (BOOL)usesCustomFullScreenImplementation;
- (id)createFullScreenVideoViewController;
- (void)prepareForDisplayWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)createVideoPlayerView;
- (void)userInteractedWithVideoView;
@property(readonly, nonatomic) double unobscuredAreaFraction;
@property(readonly, nonatomic) NSUInteger lastInteractionTimestamp;
@property(readonly, nonatomic) BOOL shouldUnmuteWhenUserAdjustsVolume;
@property(nonatomic, getter=isPlaying) BOOL playing;
- (void)_swapVideoPlaceholderForVideoForAutoPlay:(BOOL)arg1;
- (void)_startPlaybackWatchdogTimer;
- (id)_createPulsingLoadIndicator;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutComponentView;
@property(readonly, nonatomic) BOOL shouldAutoPlay;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)componentViewDidMoveToWindow;
- (BOOL)isParented;
@property(readonly, copy, nonatomic) LPVideoViewConfiguration *configuration;
- (void)dealloc;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5;
- (id)init;

@end
