/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@protocol SBFluidSwitcherScrollProviding;

@interface SBRemovalSwitcherModifier : SBSwitcherModifier

{
    SBAppLayout *_appLayout;
    long long _reason;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
    _Bool _simulatingPostRemovalState;
    unsigned long long _indexToScrollToAfterRemoval;
    unsigned long long _indexOfAppLayoutPriorToRemoval;
    unsigned long long _phase;
}

- (id)appLayouts;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (long long)layoutUpdateMode;
- (id)appLayoutsForInsertionOrRemoval;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (struct CGPoint)scrollViewContentOffset;
- (id)handleRemovalEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 reason:(long long)arg2 multitaskingModifier:(id)arg3;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(CDUnknownBlockType)arg1;

@end
