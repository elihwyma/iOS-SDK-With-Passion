/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBDisplayLayoutTransition, NSString, SBHomeGesturePanGestureRecognizer, SBHomeGestureParticipant, SBSearchBackdropView, UIViewController, _SBDashBoardSpotlightViewController, _UILegibilitySettings;

@protocol SBUISpotlightInitiating, SPUIRemoteSearchViewDelegate;

@interface SBDashBoardSpotlightViewController : CSCoverSheetViewControllerBase <Swift>

{
    SBSearchBackdropView *_backdropView;
    _UILegibilitySettings *_spotlightLegibilitySettings;
    UIViewController<SBUISpotlightInitiating> *_initiatingViewController;
    _SBDashBoardSpotlightViewController *_spotlightViewController;
    SBHomeGesturePanGestureRecognizer *_bottomEdgeRecognizer;
    SBHomeGestureParticipant *_homeGestureParticipant;
    FBDisplayLayoutTransition *_displayLayoutTransition;
}

@property (retain, nonatomic) _SBDashBoardSpotlightViewController *spotlightViewController;
@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeRecognizer;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (retain, nonatomic) FBDisplayLayoutTransition *displayLayoutTransition;
@property (retain, nonatomic) _UILegibilitySettings *spotlightLegibilitySettings;
@property (weak, nonatomic) id <SPUIRemoteSearchViewDelegate> spotlightDelegate;
@property (retain, nonatomic) UIViewController<SBUISpotlightInitiating> *initiatingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)presentationStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)transitionDidFinish:(id)arg1;
- (void)transitionWillBegin:(id)arg1;
- (_Bool)_isTransitioning;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationType;
- (long long)presentationTransition;
- (void)transitionDidReverse:(id)arg1;
- (void)transitionWillFinish:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)presentationCancelsTouches;
- (id)displayLayoutElementIdentifier;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_relinquishHomeGestureOwnership;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (void)_requestHomeGestureOwnership;
- (id)transitionContextToShowSpotlight:(_Bool)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (_Bool)_transitioningIntoSpotlight:(id)arg1;
- (_Bool)_initiallyTransitioningToSpotlight:(id)arg1;
- (_Bool)_shouldCancelInteractiveDismissGesture:(id)arg1;

@end
