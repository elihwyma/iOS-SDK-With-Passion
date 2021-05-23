/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID;

@interface SBTransitionSwitcherModifier : SBSwitcherModifier

{
    _Bool _wantsResignActiveAndAsyncRenderingAssertions;
    unsigned long long _transitionPhase;
    NSUUID *_transitionID;
}

@property (nonatomic, readonly) unsigned long long transitionPhase;
@property (nonatomic, readonly) NSUUID *transitionID;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (_Bool)isPreparingLayout;
- (_Bool)isUpdatingLayout;
- (long long)liveContentRasterizationStyle;
- (id)handleTimerEvent:(id)arg1;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (long long)layoutUpdateMode;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (_Bool)wantsResignActiveAssertion;
- (long long)sceneDeactivationReason;
- (long long)keyboardSuppressionMode;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (long long)transitionLiveContentRasterizationStyle;
- (id)_handleTransitionEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)transitionDidEnd;
- (void)_setTransitionPhase:(unsigned long long)arg1;

@end
