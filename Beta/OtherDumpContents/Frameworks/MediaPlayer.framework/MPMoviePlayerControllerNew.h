/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMoviePlayerControllerNew : NSObject <MPMediaPlayback, MPMovieViewDelegate> {
    NSDictionary * _HTTPHeaderFields;
    long long  _additionalButtons;
    NSMutableSet * _asyncImageGenerators;
    MPMovieAccessLog * _cachedAccessLog;
    MPMovieErrorLog * _cachedErrorLog;
    bool  _canPostDidFinishNotificationOnItemChange;
    bool  _canShowControlsOverlayBeforeResignedActive;
    long long  _controlStyle;
    float  _currentPlaybackRate;
    <MPMoviePlayerControllerDelegate> * _delegate;
    bool  _didAppear;
    bool  _didResignActive;
    double  _endPlaybackTime;
    unsigned long long  _finishNotificationsPosted;
    bool  _ignorePlaybackStateChanges;
    double  _initialPlaybackTime;
    bool  _isActive;
    bool  _isChangingMoviePath;
    bool  _isResigningActive;
    MPMoviePlayerController * _moviePlayer;
    long long  _movieSourceType;
    MPMovieView * _movieView;
    NSArray * _movies;
    bool  _moviesNeedReload;
    bool  _playWhenSourceTypeIsDetermined;
    NSError * _playbackError;
    MPAVController * _player;
    UIWindow * _preApexSupportWindow;
    bool  _prepareWhenSourceTypeIsDetermined;
    bool  _preparedQueue;
    NSMutableArray * _queuedThumbnailRequests;
    bool  _readyForDisplay;
    long long  _repeatMode;
    bool  _setUseApplicationAudioSessionWhenPlaybackEnds;
    bool  _shouldAutoplay;
    bool  _shouldIgnoreItemChange;
    bool  _shouldRestartPlaybackFromBeginning;
    long long  _stateBeforeSettingPlaybackTime;
    double  _timeWhenResignedActive;
    NSMutableDictionary * _timedMetadataForUniqueKey;
    bool  _useApplicationAudioSession;
    bool  _useHostedWindowWhenFullscreen;
    MPInlineVideoController * _videoViewController;
    bool  _wasPlayingBeforeSuspended;
    bool  _willSoonEndUsingVideoLayer;
}

@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPreparedToPlay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_HTTPHeaderFields;
- (long long)_additionalButtons;
- (id)_advertisementView;
- (bool)_areControlsHidden;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_cacheAccessAndErrorLogs;
- (bool)_canContinuePlayingWhenLocked;
- (void)_clearPlaybackStateAfterTimeJumpIfNecessary;
- (id)_currentItem;
- (id)_delegate;
- (void)_didBecomeActiveNotification:(id)arg1;
- (bool)_didPostFinishNotificationForReason:(long long)arg1;
- (void)_endPlayback;
- (void)_endUsingVideoLayer;
- (void)_ensureActive;
- (void)_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)_handlePlaybackEnd;
- (id)_hostedWindow;
- (unsigned int)_hostedWindowContextID;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (bool)_isNavigationBarHidden;
- (bool)_isReadyForDisplay;
- (bool)_isTVOutEnabled;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemPlaybackErrorNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_movieDurationAvailableNotification:(id)arg1;
- (void)_movieNaturalSizeAvailableNotification:(id)arg1;
- (id)_movieOptions;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_movieSourceTypeAvailableNotification:(id)arg1;
- (id)_movieSubtitle;
- (id)_movieTitle;
- (void)_movieTypeAvailableNotification:(id)arg1;
- (id)_movies;
- (id)_navigationBar;
- (void)_pausePlaybackForSuspension;
- (double)_playableEndTime;
- (double)_playableStartTime;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_postDidFinishNotificationWithReason:(long long)arg1;
- (void)_postNotificationName:(id)arg1 object:(id)arg2;
- (void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_prepareToPlayWithStartIndex:(unsigned long long)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_resignActive;
- (id)_resolvedContentURL;
- (void)_restartPlaybackFromBeginning;
- (double)_seekableEndTime;
- (double)_seekableStartTime;
- (void)_serverDiedNotification:(id)arg1;
- (void)_setAdditionalButtons:(long long)arg1;
- (void)_setControlsHidden:(bool)arg1;
- (void)_setControlsHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setCurrentPlaybackTime:(double)arg1 timeOption:(long long)arg2;
- (void)_setDelegate:(id)arg1;
- (void)_setHTTPHeaderFields:(id)arg1;
- (void)_setMovieMediaTypesOverride:(unsigned long long)arg1;
- (void)_setMoviePlayer:(id)arg1;
- (void)_setMovieSubtitle:(id)arg1;
- (void)_setMovieTitle:(id)arg1;
- (void)_setMovies:(id)arg1;
- (void)_setNavigationBarHidden:(bool)arg1;
- (void)_setShouldEnforceHDCP:(bool)arg1;
- (void)_setUseApplicationAudioSession:(bool)arg1;
- (void)_setUseHostedWindowWhenFullscreen:(bool)arg1;
- (void)_setVideoViewControllerOverlayStyle;
- (bool)_shouldContinuePlaybackInBackground;
- (bool)_shouldEnforceHDCP;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_timedMetadataImageAvailableNotification:(id)arg1;
- (void)_updateDisabledPartsFromDelegate;
- (bool)_useHostedWindowWhenFullscreen;
- (id)_videoView;
- (id)_videoViewController;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)_willResignActiveNotification:(id)arg1;
- (void)_willTerminateNotification:(id)arg1;
- (id)accessLog;
- (bool)allowsAirPlay;
- (id)asset;
- (id)backgroundView;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)cancelAllThumbnailImageRequests;
- (id)contentURL;
- (long long)controlStyle;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (void)endSeeking;
- (id)errorLog;
- (id)init;
- (double)initialPlaybackTime;
- (bool)inlinePlaybackUsesTVOut;
- (bool)isAirPlayVideoActive;
- (bool)isFullscreen;
- (bool)isPreparedToPlay;
- (unsigned long long)loadState;
- (unsigned long long)movieMediaTypes;
- (long long)movieSourceType;
- (void)movieView:(id)arg1 willMoveToSuperview:(id)arg2;
- (void)movieView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)movieViewDidMoveToWindow:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)pause;
- (void)play;
- (double)playableDuration;
- (long long)playbackState;
- (id)playerItem;
- (void)prepareToPlay;
- (long long)repeatMode;
- (void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(long long)arg2;
- (long long)scalingMode;
- (void)setAllowsAirPlay:(bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setControlStyle:(long long)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setInlinePlaybackUsesTVOut:(bool)arg1;
- (void)setMovieControlMode:(long long)arg1;
- (void)setMovieSourceType:(long long)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setScalingMode:(long long)arg1;
- (void)setShouldAutoplay:(bool)arg1;
- (void)setUseApplicationAudioSession:(bool)arg1;
- (bool)shouldAutoplay;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)stop;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(long long)arg2;
- (id)timedMetadata;
- (id)timedMetadataForKey:(id)arg1;
- (bool)useApplicationAudioSession;
- (bool)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)videoControllerDidHideOverlay:(id)arg1;
- (void)videoControllerDidShowOverlay:(id)arg1;
- (bool)videoControllerShouldAutohide:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1;
- (id)view;
- (void)viewControllerRequestsExit:(id)arg1 reason:(long long)arg2;

@end