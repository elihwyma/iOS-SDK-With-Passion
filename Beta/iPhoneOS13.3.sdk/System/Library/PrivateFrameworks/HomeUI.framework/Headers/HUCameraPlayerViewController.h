/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <AVKit/AVPlayerViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class AVControlItem, AVHomeLoadingButtonControlItem, AVPlayerLooper, AVQueuePlayer, HFCameraItem, HFCameraPlaybackEngine, HFItem, HFItemManager, HMCameraProfile, HMHome, HUCalendarScrubberContainerViewController, HUCameraMiniScrubberViewController, HUCameraPlayerAVBehavior, HUCameraPlayerAccessoryViewController, HUCameraPlayerConfiguration, HUCameraPlayerFooterViewController, HUCameraPlayerLiveContentViewController, HUCameraPlayerPlaceholderContentViewController, HUCameraRecordingPlayerView, HUCameraStatusOverlayView, HUClipScrubberViewController, HULegibilityLabel, NAUILayoutConstraintSet, NSArray, NSLayoutConstraint, NSString, NSTimer, UIAlertController, UIViewController;

@protocol HUCameraPlayerScrubbing, HUCameraPlayerViewControllerDelegate, HUPresentationDelegate;

@interface HUCameraPlayerViewController : AVPlayerViewController <Swift>

{
    _Bool _recordedClipInterfaceAvailable;
    _Bool _enteringFullScreen;
    _Bool _viewVisible;
    _Bool _viewDisappearing;
    _Bool _observingReadyForDisplay;
    _Bool _applicationIsActive;
    _Bool _shouldResumePlaying;
    id <HUPresentationDelegate> presentationDelegate;
    id <HUCameraPlayerViewControllerDelegate> _cameraDelegate;
    HFCameraItem *_cameraItem;
    HUCameraPlayerAVBehavior *_behavior;
    HUCameraPlayerConfiguration *_playerConfiguration;
    double _cornerRadius;
    HFItemManager *_itemManager;
    HFCameraPlaybackEngine *_playbackEngine;
    HUCameraStatusOverlayView *_cameraStatusView;
    AVControlItem *_microphoneControlItem;
    NSArray *_savedControlItems;
    AVHomeLoadingButtonControlItem *_nextControlItem;
    HUCalendarScrubberContainerViewController *_calendarContainerViewController;
    HUCameraPlayerAccessoryViewController *_accessoryViewController;
    HUCameraPlayerFooterViewController *_footerViewController;
    HUCameraPlayerLiveContentViewController *_liveContentViewController;
    HUClipScrubberViewController *_clipScrubberViewController;
    HUCameraMiniScrubberViewController *_miniScrubberViewController;
    HUCameraPlayerPlaceholderContentViewController *_placeholderContentViewController;
    NAUILayoutConstraintSet *_staticConstraintSet;
    NAUILayoutConstraintSet *_statusIndicatorConstraintSet;
    NAUILayoutConstraintSet *_scrubberConstraintSet;
    NAUILayoutConstraintSet *_calendarConstraintSet;
    NSLayoutConstraint *_cameraStatusViewTopConstraint;
    NSLayoutConstraint *_dayLabelTopConstraint;
    HUCameraRecordingPlayerView *_demoPlayerView;
    AVPlayerLooper *_looper;
    AVQueuePlayer *_demoModeQueuePlayer;
    UIAlertController *_airplaneAlertController;
    HULegibilityLabel *_dayLabel;
    HULegibilityLabel *_timeLabel;
    NSTimer *_liveTimer;
}

@property (retain, nonatomic) HFItemManager *itemManager;
@property (retain, nonatomic) HFCameraItem *cameraItem;
@property (retain, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) HUCameraPlayerConfiguration *playerConfiguration;
@property (retain, nonatomic) HUCameraStatusOverlayView *cameraStatusView;
@property (retain, nonatomic) HUCameraPlayerAVBehavior *behavior;
@property (retain, nonatomic) AVControlItem *microphoneControlItem;
@property (retain, nonatomic) NSArray *savedControlItems;
@property (retain, nonatomic) AVHomeLoadingButtonControlItem *nextControlItem;
@property (retain, nonatomic) HUCalendarScrubberContainerViewController *calendarContainerViewController;
@property (retain, nonatomic) HUCameraPlayerAccessoryViewController *accessoryViewController;
@property (retain, nonatomic) HUCameraPlayerFooterViewController *footerViewController;
@property (retain, nonatomic) HUCameraPlayerLiveContentViewController *liveContentViewController;
@property (nonatomic, readonly) UIViewController<HUCameraPlayerScrubbing> *activeScrubberViewController;
@property (retain, nonatomic) HUClipScrubberViewController *clipScrubberViewController;
@property (retain, nonatomic) HUCameraMiniScrubberViewController *miniScrubberViewController;
@property (retain, nonatomic) HUCameraPlayerPlaceholderContentViewController *placeholderContentViewController;
@property (nonatomic) _Bool recordedClipInterfaceAvailable;
@property (nonatomic, getter=isEnteringFullScreen) _Bool enteringFullScreen;
@property (nonatomic, getter=isViewVisible) _Bool viewVisible;
@property (nonatomic, getter=isViewDisappearing) _Bool viewDisappearing;
@property (nonatomic, getter=isObservingReadyForDisplay) _Bool observingReadyForDisplay;
@property (nonatomic) _Bool applicationIsActive;
@property (retain, nonatomic) NAUILayoutConstraintSet *staticConstraintSet;
@property (retain, nonatomic) NAUILayoutConstraintSet *statusIndicatorConstraintSet;
@property (retain, nonatomic) NAUILayoutConstraintSet *scrubberConstraintSet;
@property (retain, nonatomic) NAUILayoutConstraintSet *calendarConstraintSet;
@property (retain, nonatomic) NSLayoutConstraint *cameraStatusViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *dayLabelTopConstraint;
@property (retain, nonatomic) HUCameraRecordingPlayerView *demoPlayerView;
@property (retain, nonatomic) AVPlayerLooper *looper;
@property (weak, nonatomic) AVQueuePlayer *demoModeQueuePlayer;
@property (weak, nonatomic) UIAlertController *airplaneAlertController;
@property (nonatomic) _Bool shouldResumePlaying;
@property (retain, nonatomic) HULegibilityLabel *dayLabel;
@property (retain, nonatomic) HULegibilityLabel *timeLabel;
@property (retain, nonatomic) NSTimer *liveTimer;
@property (weak, nonatomic) id <HUCameraPlayerViewControllerDelegate> cameraDelegate;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFItem *hu_presentedItem;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;

+ (id)_legibilityLabelFactory;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)updateViewConstraints;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidToggleMuted:(_Bool)arg1;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(_Bool)arg1;
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)_presentDetailsViewController;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdateScrubbingStatus:(_Bool)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClipPlayer:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClips:(id)arg2;
- (void)playbackEngine:(id)arg1 didRemoveClips:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)_updateIdleTimer;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (void)_setupPlaybackEngine;
- (void)_updatedRecordedClipInterfaceAvailabilityAnimated:(_Bool)arg1;
- (void)_handleApplicationDidBecomeActive;
- (void)_handleApplicationWillResignActive;
- (_Bool)_homeHasSingleCameraProfile;
- (void)_removePlaybackHistoryUI;
- (void)_reloadClipsWithUpdate:(_Bool)arg1;
- (void)_configureFooterViewController;
- (void)_configureCalendarContainerViewControllerIfNeeded;
- (void)showCameraPicker;
- (id)_settingsImage;
- (void)_updatePlaceholderContent;
- (void)_updateStateForPlaybackPosition:(id)arg1 animated:(_Bool)arg2;
- (void)_updateMicrophoneButtonState;
- (void)_setupConstraintSets;
- (_Bool)hasRecordedClips;
- (_Bool)_shouldAutoPlayOnViewAppearance;
- (void)toggleDemoModeLiveStreamVideo:(_Bool)arg1;
- (void)_configureClipScrubberViewControllerIfNeeded;
- (void)_addFooterConstraints;
- (double)_cameraStatusViewConstantForTraitCollection;
- (void)_updateIndicatorColor;
- (_Bool)supportsRecordedClips;
- (void)_updateLivePreviewAspectRatio;
- (void)_displayAirplaneModeAlert;
- (void)_updatePlayerVolumeSliderState;
- (_Bool)_shouldDisableLiveStreamAfterCameraStatusChange;
- (id)_microphoneGlyphForState:(_Bool)arg1;
- (void)_presentNearbyAccessoriesViewController;
- (void)_dismissEditInterface;
- (void)_updateTimeLabelWithDate:(id)arg1 showingTime:(_Bool)arg2;
- (void)_updateDayLabelWithDate:(id)arg1;
- (void)_displayAudioControlsIfAvailable;
- (void)_configureClipScrubberViewController;
- (void)pauseEngineIfNeeded;
- (void)_presentInternalViewController:(id)arg1;
- (void)_updateCameraStatus;
- (void)_updateCanShowOverlayState;
- (id)_imageConfigurationForScrubberType;
- (void)_updateStateForScrubbingStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (void)startLiveTimer;
- (void)cancelLiveTimer;
- (void)_cleanUpIdleTimerState;
- (double)currentScrubberResolutionForBehavior:(id)arg1;
- (void)pictureInPictureDidToggleMicrophone;
- (id)initWithCameraPlayerConfiguration:(id)arg1;
- (long long)_imageScaleForScrubberType;

@end
