/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout, SBInsertionSwitcherModifier;

@interface SBFilteredAppExposeInsertionSwitcherModifier : SBSwitcherModifier

{
    SBAppLayout *_appLayout;
    SBInsertionSwitcherModifier *_insertionSwitcherModifier;
}

- (id)handleEvent:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)initWithAppLayout:(id)arg1 insertionSwitcherModifier:(id)arg2;

@end
