/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBSearchBackdropView, SBSystemAnimationSettings, SPUIRemoteSearchViewController, UIView;

@protocol SBUISpotlightInitiating, SBViewControllerContextTransitioning;

@interface SBSpotlightTransitionAnimator : NSObject <Swift>

{
    SBSystemAnimationSettings *_settings;
    id <SBViewControllerContextTransitioning> _transitionContext;
    double _percentComplete;
    double _transitionDuration;
    unsigned long long _transitionToken;
    unsigned long long _operation;
    UIView *_touchSwallowingView;
    UIView *_containerView;
    UIView *_searchView;
    SBSearchBackdropView *_backdropView;
    _Bool _ownsBackdropView;
    struct {
        CDStruct_e3385c33 start;
        CDStruct_e3385c33 end;
    } _pulldownInterval;
    id <SBUISpotlightInitiating> _initiatingViewController;
    SPUIRemoteSearchViewController *_spotlightViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)percentComplete;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (_Bool)supportsRestarting;
- (void)_prepareToAnimate;
- (void)_prototypeSettingsChanged;
- (void)_animateInteractiveTransition:(id)arg1;
- (_Bool)shouldMoveIntoSearch;
- (void)_animateIntoSearch:(_Bool)arg1;
- (void)_cleanupAfterAnimating:(_Bool)arg1;
- (void)_updateTransitionIntoSearch:(_Bool)arg1 percentComplete:(double)arg2;
- (void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (_Bool)shouldMoveIntoSearchOnCancel;
- (void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (double)_percentVisibleForPercentComplete:(double)arg1;
- (void)_restoreSpotlightHeaderToInitiatingViewControllerForCancellation:(_Bool)arg1;
- (void)_restoreSpotlightHeaderToInitiatingViewController;

@end
