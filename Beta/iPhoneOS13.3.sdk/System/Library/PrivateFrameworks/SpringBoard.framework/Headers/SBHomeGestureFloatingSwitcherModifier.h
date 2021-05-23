/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class NSString, SBAppLayout, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBStackedFloatingSwitcherModifier;

@interface SBHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier

{
    SBStackedFloatingSwitcherModifier *_stackedLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBAppLayout *_selectedAppLayout;
    _Bool _continuingGesture;
    _Bool _lastGestureWasAnArcSwipe;
    struct CGPoint _translation;
    struct CGPoint _velocity;
    double _rubberbandedYTranslation;
    double _scaleProgress;
    double _multitaskingHintProgress;
    _Bool _gestureHasBegun;
    _Bool _gestureHasEnded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (long long)liveContentRasterizationStyle;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (_Bool)wantsMinificationFilter;
- (void)didMoveToParentModifier:(id)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (_Bool)wantsResignActiveAssertion;
- (long long)sceneDeactivationReason;
- (long long)keyboardSuppressionMode;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (long long)currentFinalDestination;
- (id)_actionForActivatingFinalDestination:(long long)arg1;
- (double)unconditionalDistanceThresholdForHome;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 continuingGesture:(_Bool)arg3 lastGestureWasAnArcSwipe:(_Bool)arg4;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;

@end
