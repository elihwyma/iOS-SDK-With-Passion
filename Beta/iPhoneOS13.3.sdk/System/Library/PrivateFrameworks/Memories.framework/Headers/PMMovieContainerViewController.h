/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class AVPlayerItem, NSLayoutConstraint, NSNumber, NSString, PMAVSynchronizedView, PMPosterContainerView, PMPosterViewController, PMRotationViewController, PMTitleSubtitleView, UITapGestureRecognizer;

@protocol PMMovieContainerViewControllerDelegate;

@interface PMMovieContainerViewController : UIViewController

{
    _Bool _preventRotation;
    _Bool _airplayActive;
    _Bool _registeredAsAirPlayProvider;
    id <PMMovieContainerViewControllerDelegate> _delegate;
    UITapGestureRecognizer *_visibilityTapGestureRecognizer;
    NSString *_savedAudioCategory;
    PMPosterViewController *_parentAirplayPlaceholderPosterViewController;
    long long _posterMoodIndex;
    long long _secondaryPosterMoodIndex;
    NSLayoutConstraint *_posterAspectConstraint;
    NSNumber *_titleScale;
    UITapGestureRecognizer *_zoomDoubleTap;
    PMRotationViewController *_rotationViewController;
    PMPosterContainerView *_posterContainerView;
    PMPosterViewController *_posterViewController;
    PMAVSynchronizedView *_synchronizedView;
    id _playbackProgressTimeObserver;
}

@property (retain, nonatomic) NSString *savedAudioCategory;
@property (retain, nonatomic) PMPosterViewController *parentAirplayPlaceholderPosterViewController;
@property (nonatomic) long long posterMoodIndex;
@property (nonatomic) long long secondaryPosterMoodIndex;
@property (retain, nonatomic) NSLayoutConstraint *posterAspectConstraint;
@property (nonatomic) _Bool airplayActive;
@property (nonatomic) _Bool registeredAsAirPlayProvider;
@property (copy, nonatomic) NSNumber *titleScale;
@property (retain, nonatomic) UITapGestureRecognizer *visibilityTapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *zoomDoubleTap;
@property (retain, nonatomic) PMRotationViewController *rotationViewController;
@property (retain, nonatomic) PMPosterContainerView *posterContainerView;
@property (retain, nonatomic) PMPosterViewController *posterViewController;
@property (retain, nonatomic) PMAVSynchronizedView *synchronizedView;
@property (nonatomic, readonly) PMTitleSubtitleView *titleView;
@property (retain, nonatomic) id playbackProgressTimeObserver;
@property (weak, nonatomic) id <PMMovieContainerViewControllerDelegate> delegate;
@property (nonatomic) _Bool preventRotation;
@property (nonatomic, readonly) _Bool playerReadyForDisplay;
@property (nonatomic) double posterAspect;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) float playerRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly) int currentFrameTime;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)player;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (_Bool)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg1;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (void)addObserversToPlayer;
- (void)toggleZoom:(id)arg1;
- (void)toggleControlVisibility:(id)arg1;
- (double)heightOfTitleArea;
- (void)removeObserversFromPlayer;
- (void)addTimeObserverToPlayer;
- (void)updateAirplay;
- (void)activateAirplay;
- (void)deactivateAirplay;
- (id)airPlayScreenController;
- (void)_saveAudioCategory;
- (void)_makeAudioCategoryPlayback;
- (void)_restoreAudioCategory;
- (void)_notifyTitleScaleChanged;
- (_Bool)isPlayerAtEndOfProject;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hidePosterAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)playerResumeActive;
- (void)setupPosterViews;
- (void)teardownPosterViews;
- (void)showPosterAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hidePosterTitleAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerAsAirPlayProvider;
- (void)unregisterAsAirPlayProvider;
- (id)addAirPlayPlaceholderViewToParentView:(id)arg1;
- (void)removeAirPlayPlaceholderViewFromParentView:(id)arg1;
- (void)updatePostersViewsWithProduction:(id)arg1;
- (void)updatePostersViewsWithImages:(id)arg1;
- (void)setPlayerRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2;

@end
