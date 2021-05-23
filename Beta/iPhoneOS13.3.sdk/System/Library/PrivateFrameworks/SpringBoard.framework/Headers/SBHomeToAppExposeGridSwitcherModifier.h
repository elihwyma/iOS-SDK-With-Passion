/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBHomeToGridSwitcherModifier;

@interface SBHomeToAppExposeGridSwitcherModifier : SBTransitionSwitcherModifier

{
    SBHomeToGridSwitcherModifier *_homeToGridModifier;
}

- (id)handleEvent:(id)arg1;
- (void)_invalidateChildActionIfNeeded:(id)arg1;
- (id)initWithTransitionID:(id)arg1 homeToGridModifier:(id)arg2;

@end
