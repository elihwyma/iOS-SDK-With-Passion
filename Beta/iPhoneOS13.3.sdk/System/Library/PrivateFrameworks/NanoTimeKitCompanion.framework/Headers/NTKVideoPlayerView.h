/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKVideoPlayerView, NSString, NTKTaskScheduler, NTKVideoPlayerDataSource, UIImageView;

@protocol NTKVideoPlayerFaceViewDelegate;

@interface NTKVideoPlayerView : UIView

{
    NTKTaskScheduler *_taskScheduler;
    UIView *_curtainView;
    UIView *_posterContainerView;
    UIImageView *_posterImageView;
    CLKVideoPlayerView *_videoPlayerView;
    struct UIEdgeInsets _videoPlayerEdgeInsets;
    long long _currentDataMode;
    unsigned long long _prerollState;
    _Bool _videoPlayerInViewHierarchy;
    _Bool _isHandlingTapGesture;
    _Bool _paused;
    _Bool _frozen;
    _Bool _slow;
    _Bool _orbing;
    _Bool _pausedViewEnabled;
    _Bool _shouldApplyVideoInsetToPosterImage;
    id <NTKVideoPlayerFaceViewDelegate> _delegate;
    NTKVideoPlayerDataSource *_dataSource;
    unsigned long long _playerBehavior;
    double _fadeAnimationDuration;
}

@property (weak, nonatomic) id <NTKVideoPlayerFaceViewDelegate> delegate;
@property (retain, nonatomic) NTKVideoPlayerDataSource *dataSource;
@property (nonatomic) unsigned long long playerBehavior;
@property (nonatomic) double fadeAnimationDuration;
@property (nonatomic, getter=isPausedViewEnabled) _Bool pausedViewEnabled;
@property (nonatomic) _Bool shouldApplyVideoInsetToPosterImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (void)_pause;
- (void)setPosterImage:(id)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (_Bool)_shouldPause;
- (void)_play;
- (void)_prerollVideo;
- (id)videoPlayerView;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerView:(id)arg1 didFinishPrerolling:(_Bool)arg2;
- (void)_createVideoPlayerViewIfNeeded;
- (void)_hideCurtainView;
- (void)_handleScreenWake;
- (void)_showCurtainView;
- (void)handleWristRaiseScreenWake;
- (void)handleOrdinaryScreenWake;
- (void)handleScreenOff;
- (void)applyDataMode:(long long)arg1 comingFromDataMode:(long long)arg2;
- (void)setVideoPlayerResizeGravity:(long long)arg1;
- (void)applyFrozen:(_Bool)arg1;
- (void)applySlow:(_Bool)arg1;
- (void)applyOrbing:(_Bool)arg1;
- (void)videoPlayerViewWasTapped;
- (void)faceLibraryWasDismissed;
- (void)transitionToEditing;
- (void)setVideoPlayerTransform:(struct CGAffineTransform)arg1;
- (void)setVideoPlayerInset:(struct UIEdgeInsets)arg1;
- (void)_createPosterImageView;
- (void)_createCurtainView;
- (void)_cancelScheduledPreroll;
- (_Bool)_shouldChangeVideoOnWake;
- (void)_advanceListingForEvent:(unsigned long long)arg1;
- (void)_schedulePreroll;
- (void)_updatePauseState;
- (_Bool)_shouldChangeVideoOnTap;
- (void)_playNextVideoForEvent:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_fadeToPosterImage;
- (void)_fadeFromPosterImageIfVisible:(CDUnknownBlockType)arg1;
- (void)_loadCurrentListing;
- (void)_loadVideoPlayerView;
- (void)_hidePosterImageView;
- (void)_showPosterImageView;
- (void)_unloadVideoPlayerView;
- (void)_rewindLoadedVideoToBeginning;
- (void)_playIfNotPaused;
- (void)_fadeToCurtainView:(CDUnknownBlockType)arg1;
- (void)_fadeFromPosterImageAndCurtainViewIfVisible;
- (void)_queueSubsequentListingIfSupported;
- (void)_fadeFromCurtainViewIfVisible;
- (void)_resetVideoPlayer;
- (void)handleStyleDidChange;

@end
