/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPViewController.h>

@class MPAVController, MPAVItem, MPSwipableView, MPTVOutWindow, MPVideoBackgroundView, MPVideoView, NSString, UIActivityIndicatorView, UIAlertController, UIColor, UIImage, UIView, _UIHostedWindow;

@protocol MPVideoOverlay;

@interface MPVideoViewController : MPViewController

{
    MPVideoBackgroundView *_backgroundView;
    MPSwipableView *_backstopView;
    _Bool _batteryMonitoringWasEnabled;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    unsigned long long _visibleParts;
    unsigned int _tvOutEnabled:1;
    unsigned int _allowsTVOutInBackground:1;
    long long _itemTypeOverride;
    long long _scaleMode;
    long long _scaleModeOverride;
    UIColor *_backstopColor;
    UIActivityIndicatorView *_loadingIndicator;
    MPTVOutWindow *_tvOutWindow;
    unsigned long long _backgroundTaskId;
    long long _artworkImageStyle;
    UIImage *_posterImage;
    unsigned int _canAnimateControlsOverlay:1;
    unsigned int _canShowControlsOverlay:1;
    unsigned int _disableControlsAutohide:1;
    unsigned int _playAfterPop:1;
    unsigned int _scheduledLoadingIndicator:1;
    unsigned int _displayPlaybackErrorAlerts:1;
    unsigned int _allowsDetailScrubbing:1;
    unsigned int _attemptAutoPlayWhenControlsHidden:1;
    unsigned int _alwaysAllowHidingControlsOverlay:1;
    unsigned int _hasShownFirstVideoFrame:1;
    unsigned int _allowsWirelessPlayback:1;
    unsigned int _disableAutoRotation:1;
    unsigned int _inlinePlaybackUsesTVOut:1;
    UIAlertController *_alertController;
}

@property (nonatomic, readonly) _Bool canShowQTAudioOnlyUI;
@property (nonatomic, readonly) UIView<MPVideoOverlay> *videoOverlayViewIfLoaded;
@property (nonatomic) _Bool allowsTVOutInBackground;
@property (nonatomic, readonly, getter=isTransitioningToFullscreen) _Bool transitioningToFullscreen;
@property (nonatomic, readonly, getter=isTransitioningFromFullscreen) _Bool transitioningFromFullscreen;
@property (nonatomic, readonly) UIView *artworkImageView;
@property (nonatomic, readonly) _Bool showArtworkInImageView;
@property (nonatomic, readonly) _Bool showArtworkForTVOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) MPAVItem *item;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) MPAVController *player;
@property (retain, nonatomic, readonly) UIView *view;
@property (nonatomic) _Bool allowsDetailScrubbing;
@property (nonatomic) _Bool allowsWirelessPlayback;
@property (nonatomic) _Bool alwaysAllowHidingControlsOverlay;
@property (nonatomic) long long artworkImageStyle;
@property (nonatomic) _Bool attemptAutoPlayWhenControlsHidden;
@property (nonatomic, readonly) UIView *backgroundView;
@property (retain, nonatomic) UIColor *backstopColor;
@property (nonatomic) _Bool canAnimateControlsOverlay;
@property (nonatomic, readonly) _Bool canChangeScaleMode;
@property (nonatomic) _Bool canShowControlsOverlay;
@property (nonatomic) _Bool controlsOverlayVisible;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) _Bool disableAutoRotation;
@property (nonatomic) _Bool disableControlsAutohide;
@property (nonatomic) unsigned long long disabledParts;
@property (nonatomic) _Bool displayPlaybackErrorAlerts;
@property (nonatomic, readonly) _UIHostedWindow *hostedWindow;
@property (nonatomic, readonly) unsigned int hostedWindowContextID;
@property (nonatomic) _Bool inlinePlaybackUsesTVOut;
@property (nonatomic) long long itemTypeOverride;
@property (nonatomic, getter=isFullscreen) _Bool fullscreen;
@property (retain, nonatomic) UIImage *posterImage;
@property (nonatomic) long long scaleMode;
@property (nonatomic) _Bool TVOutEnabled;
@property (nonatomic, readonly) _Bool viewControllerWillRequestExit;
@property (retain, nonatomic, readonly) UIView<MPVideoOverlay> *videoOverlayView;
@property (retain, nonatomic, readonly) MPVideoView *videoView;
@property (nonatomic) unsigned long long visibleParts;
@property (nonatomic) _Bool autoPlayWhenLikelyToKeepUp;

+ (long long)_activityIndicatorViewStyle;
+ (struct CGRect)calculateArtworkImageViewFrameInRect:(struct CGRect)arg1;
+ (_Bool)supportsFullscreenDisplay;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)exitFullscreen;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canHideOverlay:(_Bool)arg1;
- (void)displayVideoView;
- (void)prepareToDisplayVideo;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2 force:(_Bool)arg3;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setScaleModeOverride:(long long)arg1 animated:(_Bool)arg2;
- (void)setUseHostedWindowWhenFullscreen:(_Bool)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setOwnsStatusBar:(_Bool)arg1;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(_Bool)arg2;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (_Bool)isFullscreenForLayoutPurposes;
- (long long)displayArtworkImageStyle;
- (struct CGRect)calculateFullScreenArtworkImageViewFrame;
- (struct CGRect)calculateArtworkImageViewFrame;
- (long long)_itemTypeWithActualTypePreference;
- (id)newArtworkImageView;
- (void)reloadArtworkImageView;
- (void)enableAirPlayVideoRoutesIfNecessary;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)setScaleMode:(long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)visiblePartsForProposedParts:(unsigned long long)arg1;
- (void)toggleScaleMode:(_Bool)arg1;
- (void)_endBackgroundTask;
- (void)_videoView_applicationSuspendedNotification:(id)arg1;
- (void)_videoView_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_videoView_availableRoutesDidChangeNotification:(id)arg1;
- (void)_videoView_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)_videoView_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_exitPlayerForPlaybackError;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)videoView_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (void)videoView_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)_updateBackgroundView:(_Bool)arg1;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)_popForTimeJump:(id)arg1;
- (void)_itemDurationDidChange:(id)arg1;
- (void)_delayedPopForTimeJump;
- (void)_delayedShowLoading;
- (void)tearDownTVOutWindow;
- (void)displayVideoViewOnScreen;
- (void)displayVideoViewOnTV;
- (void)handleScaleModeChange;
- (void)handleExternalPlaybackDidChange;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)backgroundViewDidUpdate;
- (unsigned long long)disabledPartsForProposedParts:(unsigned long long)arg1;
- (_Bool)_canEnableAirPlayVideoRoutes;
- (void)_delayedUpdateBackgroundView;
- (void)_hideLoadingIndicator;
- (_Bool)_showDestinationPlaceholder;
- (void)_updateIdleTimerDisabledFromPlaybackState:(long long)arg1;
- (void)_updateProgressControlForItem:(id)arg1;

@end
