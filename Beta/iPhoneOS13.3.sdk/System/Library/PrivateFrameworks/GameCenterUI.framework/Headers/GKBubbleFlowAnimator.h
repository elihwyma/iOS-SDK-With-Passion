/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKBubbleSet, MISSING_TYPE, NSString;

@interface GKBubbleFlowAnimator : NSObject

{
    GKBubbleSet *_mostRecentOverlayBubbleSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKBubbleSet *mostRecentOverlayBubbleSet;

+ (id)sharedAnimator;

- (void)dealloc;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (void)_prepareTransitionWithInfo:(id)arg1;
- (void)_finalPreparationsBeforeBeginningTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeInForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeOutForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForViewCrossfadeForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForAnimatingBubblePathsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithInfo:(id)arg1;
- (void)_cleanupSubviewsWeFadedOutForTransitionWithInfo:(id)arg1;
- (void)_finishTransitionWithInfo:(id)arg1;
- (void)_stopIdleAnimatingOffscreenBubblesAfterTransitionWithInfo:(id)arg1;
- (id)transitionInfoForBubbleFlowTransitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_animateBubblesTransitionWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_transitionInfoForBubbleFlowInvalidationOfViewController:(id)arg1;
- (id)_savvyViewControllerForViewController:(id)arg1 fromViewController:(id)arg2;
- (id)_transitionInfoForBubbleFlowSimpleUpdateOfViewController:(id)arg1;
- (id)_pathTransitionInfoFromPathAnimator:(id)arg1 forTransitionWithInfo:(id)arg2;
- (long long)syncOverlayViewBubbles:(id)arg1 withViewController:(id)arg2;
- (void)_syncBubbleVisibilityWithInfo:(id)arg1;
- (void)_addKeyframesForCustomFromAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomToAnimationsForTransitionWithInfo:(id)arg1;
- (MISSING_TYPE *)restingWorldPositionForBubble:(id)arg1 viewController:(id)arg2 forTransitionWithInfo:(id)arg3 getFrame:(struct CGRect *)arg4;
- (void)_resetContentInBubbles:(id)arg1 viewController:(id)arg2 adoptionFlags:(CDStruct_b207fc29)arg3;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesGoingOffscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesComingOnscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesStayingOnscreenAndInfo:(id)arg1;
- (void)animateBubblesFromViewController:(id)arg1 toViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateBubblePositionsForViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_moveBubblesToTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)_returnBubblesFromTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)overlayViewNeedsUpdateForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
