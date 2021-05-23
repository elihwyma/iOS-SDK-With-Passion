/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@protocol SBFluidSwitcherScrollProviding;

@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier

{
    SBAppLayout *_appLayout;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
    double _progress;
    _Bool _hasPrepared;
    _Bool _simulatingPostRemovalState;
    unsigned long long _interpolationDirection;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)appLayouts;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (id)appLayoutsForInsertionOrRemoval;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 multitaskingModifier:(id)arg2;
- (void)_calculateInterpolationDirection;
- (unsigned long long)_interpolatingAdjacentIndexForIndex:(unsigned long long)arg1;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(CDUnknownBlockType)arg1;

@end
