/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBEntityRemovalDeclineFloatingSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    long long _floatingConfiguration;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (struct CGRect)containerViewBounds;
- (_Bool)_isIndexFromAppLayout:(unsigned long long)arg1;
- (_Bool)_isIndexToAppLayout:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4;

@end
