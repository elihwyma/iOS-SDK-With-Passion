/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSCoverSheetTransitionSettings, CSLockScreenSettings, NSObject, NSString, SBCoverSheetPositionView, SBCoverSheetSystemGesturesDelegate, SBHomeGestureSettings, SBScreenEdgePanGestureRecognizer, UIViewFloatAnimatableProperty;

@protocol OS_dispatch_group, SBCoverSheetSlidingViewControllerContentViewController, SBCoverSheetSlidingViewControllerDelegate;

@interface SBCoverSheetSlidingViewController : UIViewController <Swift>

{
    long long _dismissGestureState;
    _Bool _roundsCorners;
    _Bool _canBePulledDown;
    _Bool _canBePulledUp;
    _Bool _performingCatchUpForPresentation;
    UIViewController<SBCoverSheetSlidingViewControllerContentViewController> *_contentViewController;
    id <SBCoverSheetSlidingViewControllerDelegate> _delegate;
    SBScreenEdgePanGestureRecognizer *_dismissGestureRecognizer;
    SBScreenEdgePanGestureRecognizer *_dismissAddendumGestureRecognizer;
    long long _dismissalSlidingMode;
    long long _dismissalTransformMode;
    SBCoverSheetSystemGesturesDelegate *_systemGesturesDelegate;
    CSCoverSheetTransitionSettings *_transitionSettings;
    SBCoverSheetPositionView *_positionView;
    SBHomeGestureSettings *_homeGestureSettings;
    CSLockScreenSettings *_lockScreenSettings;
    long long _presentGestureState;
    UIViewFloatAnimatableProperty *_progressProperty;
    UIViewFloatAnimatableProperty *_catchupProperty;
    long long _groupCount;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
    struct CGPoint _lastTouchLocation;
}

@property (retain, nonatomic) SBCoverSheetPositionView *positionView;
@property (retain, nonatomic) SBScreenEdgePanGestureRecognizer *dismissGestureRecognizer;
@property (retain, nonatomic) SBScreenEdgePanGestureRecognizer *dismissAddendumGestureRecognizer;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (retain, nonatomic) CSLockScreenSettings *lockScreenSettings;
@property (nonatomic, setter=_logPresentGestureState:) long long presentGestureState;
@property (nonatomic) _Bool canBePulledDown;
@property (nonatomic) _Bool canBePulledUp;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *progressProperty;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *catchupProperty;
@property (nonatomic) _Bool performingCatchUpForPresentation;
@property (nonatomic) struct CGPoint lastTouchLocation;
@property (nonatomic) long long groupCount;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup;
@property (nonatomic, readonly) UIViewController<SBCoverSheetSlidingViewControllerContentViewController> *contentViewController;
@property (weak, nonatomic) id <SBCoverSheetSlidingViewControllerDelegate> delegate;
@property (nonatomic) long long dismissalSlidingMode;
@property (nonatomic) long long dismissalTransformMode;
@property (retain, nonatomic) SBCoverSheetSystemGesturesDelegate *systemGesturesDelegate;
@property (nonatomic) _Bool roundsCorners;
@property (weak, nonatomic) CSCoverSheetTransitionSettings *transitionSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)_isTransitioning;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)wantsFullScreenLayout;
- (_Bool)isTransitioning;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_createProperties;
- (long long)participantState;
- (id)coverSheetIdentifier;
- (void)_setCornerRounded:(_Bool)arg1;
- (_Bool)isDismissGestureActive;
- (_Bool)isAnyGestureActivelyRecognized;
- (void)_handleDismissGesture:(id)arg1;
- (void)_updateHomeGestureSettings:(id)arg1;
- (void)_updateCoverSheetDismissSettings:(id)arg1;
- (void)_addSystemGestureRecognizers;
- (void)_removeSystemGestureRecognizers;
- (void)_presentCoverSheetAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_dismissCoverSheetAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)isPresentGestureActive;
- (void)_transitionToViewControllerAppearState:(int)arg1 ifNeeded:(_Bool)arg2 forUserGesture:(_Bool)arg3;
- (void)_startCatchupAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_mathForGestureRecognizerPointsDown:(id)arg1 position:(double *)arg2 velocity:(double *)arg3 instantVelocity:(double *)arg4 averageVelocity:(double *)arg5;
- (void)_updateForLocation:(struct CGPoint)arg1 interactive:(_Bool)arg2;
- (void)_transitionToViewControllerAppearState:(int)arg1;
- (void)_finishTransitionToPresented:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_presentGestureBeganWithGestureRecognizer:(id)arg1;
- (void)_presentOrDismissGestureChangedWithGestureRecognizer:(id)arg1;
- (void)_presentOrDismissGestureEndedWithGestureRecognizer:(id)arg1;
- (void)_cancelTransitionForGesture:(id)arg1;
- (id)_grabberRecognizer;
- (void)_logDismissGestureState:(long long)arg1 forAddendumGesture:(_Bool)arg2;
- (void)_dismissGestureBeganWithGestureRecognizer:(id)arg1;
- (void)_dismissGestureChangedWithGestureRecognizer:(id)arg1;
- (_Bool)_isPresentingInterstitialForGestureRecognizer:(id)arg1;
- (struct CGPoint)_velocityForGesture:(id)arg1;
- (struct CGPoint)_locationForGesture:(id)arg1;
- (_Bool)_shouldRubberBandForGestureRecognizer:(id)arg1;
- (struct CGPoint)_adjustedTouchLocationForCurrentDismissalMode:(struct CGPoint)arg1;
- (struct CGPoint)_finalLocationForTransitionToPresented:(_Bool)arg1;
- (_Bool)_shouldEndPresentedForEndingGestureRecognizer:(id)arg1;
- (id)activeGestureRecognizer;
- (void)_studyLogForCompletionOfTransitionToPresented:(_Bool)arg1;
- (void)_studyLogForGestureRecognizerState:(long long)arg1 bounds:(struct CGRect)arg2 position:(double)arg3 velocity:(double)arg4;
- (struct CGPoint)_averageVelocityForGesture:(id)arg1;
- (void)_positionSubviewsForContentFrame:(struct CGRect)arg1 forPresentationValue:(_Bool)arg2;
- (struct CGRect)_animationTickedWithProgress:(double)arg1 forPresentationValue:(_Bool)arg2;
- (struct CGRect)_updatePositionViewForProgress:(double)arg1 forPresentationValue:(_Bool)arg2;
- (void)_animationTickForPresentationValue:(_Bool)arg1;
- (void)_endTransitionToAppeared:(_Bool)arg1;
- (void)_beginTransitionFromAppeared:(_Bool)arg1;
- (_Bool)isBottomMostSlider;
- (id)initWithContentViewController:(id)arg1 canBePulledDown:(_Bool)arg2 canBePulledUp:(_Bool)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;
- (void)setPresented:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setDismissGesturesEnabled:(_Bool)arg1;
- (_Bool)mathForGestureRecognizerPointsDown:(id)arg1;
- (void)_handlePresentGesture:(id)arg1;
- (void)_transitionToViewControllerAppearState:(int)arg1 forUserGesture:(_Bool)arg2;

@end
