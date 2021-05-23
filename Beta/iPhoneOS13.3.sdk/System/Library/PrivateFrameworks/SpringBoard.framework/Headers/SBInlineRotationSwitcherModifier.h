/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBInlineRotationSwitcherModifier : SBTransitionSwitcherModifier

- (_Bool)shouldPerformRotationAnimationForOrientationChange;
- (long long)layoutUpdateMode;

@end
