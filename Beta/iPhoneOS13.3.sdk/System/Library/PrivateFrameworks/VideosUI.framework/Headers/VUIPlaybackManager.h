/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class AVExternalPlaybackController, AVPlayerViewController, MPAVRoutingController, NSString, TVPStateMachine, UIButton, UIImage, UIViewController, VUINowPlayingFeatureMonitor, VUIPlayer, VUIVideoAdvisoryLogoImageDownloader, VUIVideoAdvisoryView, VideosExtrasContext, VideosExtrasPresenter;

@protocol TVPMediaItem;

@interface VUIPlaybackManager : NSObject

{
    _Bool _requiresLinearPlayback;
    _Bool _shouldDisplayTVRatingWhenVideoBoundsIsAvailable;
    _Bool _shouldAnimateTVRatingView;
    VUIPlayer *_mainPlayer;
    VUIPlayer *_backgroundAudioPlayer;
    VUIPlayer *_extrasPlayer;
    VUIPlayer *_activePlayer;
    TVPStateMachine *_stateMachine;
    VideosExtrasContext *_extrasContext;
    AVPlayerViewController *_avPlayerViewController;
    AVPlayerViewController *_mainAVPlayerViewController;
    AVPlayerViewController *_extrasAVPlayerViewController;
    UIViewController *_presentingViewController;
    long long _dismissalOperation;
    MPAVRoutingController *_routingController;
    AVExternalPlaybackController *_avExternalPlaybackController;
    VideosExtrasPresenter *_extrasPresenter;
    VUINowPlayingFeatureMonitor *_featureMonitor;
    UIButton *_skipButton;
    VUIVideoAdvisoryLogoImageDownloader *_logoImageDownloader;
    UIImage *_ratingImage;
    VUIVideoAdvisoryView *_ratingView;
}

@property (retain, nonatomic) VUIPlayer *mainPlayer;
@property (retain, nonatomic) VUIPlayer *backgroundAudioPlayer;
@property (retain, nonatomic) VUIPlayer *extrasPlayer;
@property (weak, nonatomic) VUIPlayer *activePlayer;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) VideosExtrasContext *extrasContext;
@property (retain, nonatomic) AVPlayerViewController *avPlayerViewController;
@property (retain, nonatomic) AVPlayerViewController *mainAVPlayerViewController;
@property (retain, nonatomic) AVPlayerViewController *extrasAVPlayerViewController;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) long long dismissalOperation;
@property (retain, nonatomic) MPAVRoutingController *routingController;
@property (nonatomic) _Bool requiresLinearPlayback;
@property (retain, nonatomic) AVExternalPlaybackController *avExternalPlaybackController;
@property (retain, nonatomic) VideosExtrasPresenter *extrasPresenter;
@property (retain, nonatomic) VUINowPlayingFeatureMonitor *featureMonitor;
@property (retain, nonatomic) UIButton *skipButton;
@property (retain, nonatomic) VUIVideoAdvisoryLogoImageDownloader *logoImageDownloader;
@property (retain, nonatomic) UIImage *ratingImage;
@property (retain, nonatomic) VUIVideoAdvisoryView *ratingView;
@property (nonatomic) _Bool shouldDisplayTVRatingWhenVideoBoundsIsAvailable;
@property (nonatomic) _Bool shouldAnimateTVRatingView;
@property (nonatomic, readonly) _Bool isFullscreenPlaybackUIBeingShown;
@property (nonatomic, readonly) _Bool isPlaybackUIBeingShown;
@property (nonatomic, readonly) _Bool isPIPing;
@property (nonatomic, readonly) NSObject<TVPMediaItem> *currentMediaItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1;
+ (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_performRatingAndAgeVerificationWithMediaItem:(id)arg1 presentingController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_presentCellularPlaybackIsDisabledAlertControllerWithPresentingViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)_shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1;
+ (void)_verifyMediaItemIsPlayableOnCellular:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_showCellularPlaybackQualityOptionsForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)_rentalPlaybackStartDateWithMediaItem:(id)arg1;
+ (void)preflightPlaybackWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleTapGesture:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)playerViewController:(id)arg1 contentViewWillTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id)arg3;
- (void)_skipButtonTapped:(id)arg1;
- (void)_registerStateMachineHandlers;
- (void)dismissPlaybackAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_currentMediaItemDidChange:(id)arg1;
- (void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(_Bool)arg2;
- (void)extrasRequestReloadWithContext:(id)arg1;
- (void)_registerApplicationNotifications;
- (void)_notifyAVPlayerViewControllerDisplaySize;
- (void)_showOrUpdateTVRatingIfNeeded;
- (void)_configureStillWatchingFeatureMonitoringIfLivePlayback;
- (void)_setExtrasButtonVisible:(_Bool)arg1;
- (void)_updateRequiresLinearPlayback;
- (void)_updateTimeBoundFeature:(id)arg1 animated:(_Bool)arg2;
- (void)_updateTimeTriggeredFeature:(id)arg1 animated:(_Bool)arg2;
- (void)_downloadRatingImageIfAvailable:(id)arg1;
- (void)_addRollsInfoFeaturesFromMediaItem:(id)arg1;
- (void)_addSkipInfoFeaturesFromMediaItem:(id)arg1;
- (void)_addTVRatingFeatureFromMediaItem:(id)arg1;
- (void)_showTVRating:(_Bool)arg1 withImage:(id)arg2 animated:(_Bool)arg3;
- (void)_showSkipButtonWithTitle:(id)arg1 show:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_addTappableViewToRemoveSkipButton;
- (void)_removeTappableViewForSkipButtonIfNeeded;
- (id)_stillWatchingAlertDurationOverride;
- (void)_showStillWatchingAlertFeature:(id)arg1;
- (void)_playbackStateDidChange:(id)arg1;
- (void)_playbackErrorDidOccur:(id)arg1;
- (void)_externalPlaybackTypeDidChange:(id)arg1;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)_avPlayerViewControllerPresentationDidTimeout;
- (void)_updateStopWhenBackgroundedFeatureForApplicationState:(long long)arg1 isFullScreen:(_Bool)arg2;
- (void)_updateRollsInfoFromMainPlayersCurrentMediaItem;
- (void)extrasRequestsPlaybackStop;
- (void)extrasDoneButtonPressed;
- (void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)extrasBackButtonPressed;
- (void)extrasContext:(id)arg1 hadFatalError:(id)arg2;
- (void)extrasContextDidLoadMainMenuItems:(id)arg1;
- (void)extrasContext:(id)arg1 extrasVisibilityNeedsUpdate:(_Bool)arg2;
- (void)featureMonitor:(id)arg1 featureDidChangeState:(id)arg2 animated:(_Bool)arg3;
- (void)presentPlaylist:(id)arg1 fromViewController:(id)arg2 dismissalOperation:(long long)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentExtrasWithURL:(id)arg1 storeID:(id)arg2 actionParams:(id)arg3 fromViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
