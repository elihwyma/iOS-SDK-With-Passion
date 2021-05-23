/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSDate, NSString, SBAppLayout, SBFluidSwitcherGesture, SBHomeGestureSettings, SBMainDisplayLayoutState, SBWorkspaceApplicationSceneTransitionContext;

@interface SBFluidSwitcherLayoutContext : NSObject <Swift>

{
    _Bool _hasUserInteractedWithActiveApplication;
    SBFluidSwitcherGesture *_activeGesture;
    SBWorkspaceApplicationSceneTransitionContext *_activeTransitionContext;
    SBMainDisplayLayoutState *_currentLayoutState;
    SBMainDisplayLayoutState *_previousLayoutState;
    long long _previousInterfaceOrientation;
    SBAppLayout *_currentAppLayout;
    SBAppLayout *_transitioningFromAppLayout;
    SBAppLayout *_transitioningToAppLayout;
    NSDate *_lastTransitionCompletionDate;
    SBHomeGestureSettings *_homeGestureSettings;
}

@property (retain, nonatomic) SBMainDisplayLayoutState *currentLayoutState;
@property (retain, nonatomic) SBMainDisplayLayoutState *previousLayoutState;
@property (nonatomic) long long previousInterfaceOrientation;
@property (retain, nonatomic) SBAppLayout *currentAppLayout;
@property (retain, nonatomic) SBAppLayout *transitioningFromAppLayout;
@property (retain, nonatomic) SBAppLayout *transitioningToAppLayout;
@property (retain, nonatomic) NSDate *lastTransitionCompletionDate;
@property (nonatomic) _Bool hasUserInteractedWithActiveApplication;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (nonatomic, readonly) SBMainDisplayLayoutState *layoutState;
@property (retain, nonatomic) SBFluidSwitcherGesture *activeGesture;
@property (nonatomic, readonly) SBWorkspaceApplicationSceneTransitionContext *activeTransitionContext;
@property (nonatomic, readonly) SBMainDisplayLayoutState *transitioningFromLayoutState;
@property (nonatomic, readonly) SBMainDisplayLayoutState *transitioningToLayoutState;
@property (nonatomic, readonly) double secondsSinceLastTransitionCompletion;
@property (nonatomic, readonly) unsigned long long supportedOrientationsForGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithLayoutState:(id)arg1;
- (_Bool)shouldAddAppLayoutToFront:(id)arg1 whenBeginningGestureOfType:(long long)arg2;
- (_Bool)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 currentAppLayouts:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)didEndTransitioningToLayoutStateWithContext:(id)arg1;
- (void)willBeginTransitioningToLayoutStateWithContext:(id)arg1;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (_Bool)_shouldUpdateSwitcherModelBasedOnTimeOrUserInteraction;

@end
