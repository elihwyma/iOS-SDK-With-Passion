/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBSwitcherTransitionRequest;

@interface SBPerformTransitionSwitcherModifierAction : SBSwitcherModifierAction

{
    _Bool _gestureInitiated;
    SBSwitcherTransitionRequest *_transitionRequest;
}

@property (nonatomic, readonly) SBSwitcherTransitionRequest *transitionRequest;
@property (nonatomic, readonly, getter=isGestureInitiated) _Bool gestureInitiated;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 gestureInitiated:(_Bool)arg2;

@end
