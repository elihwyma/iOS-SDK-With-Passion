/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBGridSwipeUpGestureSwitcherModifier;

@interface SBSwitcherSwipeUpGestureFloatingSwitcherModifier : SBGestureSwitcherModifier

{
    SBGridSwipeUpGestureSwitcherModifier *_gridSwipeUpGestureModifier;
}

- (id)handleEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1;

@end
