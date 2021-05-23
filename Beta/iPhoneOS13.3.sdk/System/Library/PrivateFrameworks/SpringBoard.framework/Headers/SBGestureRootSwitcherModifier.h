/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSString, SBAppLayout;

@interface SBGestureRootSwitcherModifier : SBSwitcherModifier

{
    _Bool _shouldVerifyModifierStackCoherencyCheckAfterHandlingEvent;
    NSString *_activeTransitionKey;
    SBAppLayout *_selectedAppLayout;
    long long _currentEnvironmentMode;
}

@property (nonatomic, readonly) SBAppLayout *selectedAppLayout;
@property (nonatomic, readonly) long long currentEnvironmentMode;

- (long long)gestureType;
- (id)handleGestureEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)_gestureModifier;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)_forwardEventAndUpdateInternalState:(id)arg1;
- (void)_performModifierStackCoherencyCheckIfNeededAfterHandlingEvent:(id)arg1;
- (id)_transitionModifier;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (id)initWithStartingEnvironmentMode:(long long)arg1;

@end
