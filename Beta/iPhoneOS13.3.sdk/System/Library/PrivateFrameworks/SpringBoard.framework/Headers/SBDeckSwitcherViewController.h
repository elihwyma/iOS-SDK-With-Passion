/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBFluidSwitcherViewController.h>

@class NSString, SBSwitcherAppSuggestionViewController;

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController

{
    SBSwitcherAppSuggestionViewController *_appSuggestionController;
}

@property (retain, nonatomic) SBSwitcherAppSuggestionViewController *appSuggestionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (id)bestAppSuggestion;
- (id)handleGestureDidBegin:(id)arg1;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3;
- (void)performTransitionWithContext:(id)arg1 animated:(_Bool)arg2 alongsideAnimationHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBestAppSuggestion:(id)arg1;
- (long long)orientationForSuggestionViewController:(id)arg1;
- (void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2;

@end
