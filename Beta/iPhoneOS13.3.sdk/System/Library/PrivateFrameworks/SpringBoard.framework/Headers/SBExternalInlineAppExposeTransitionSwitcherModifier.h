/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBExternalInlineAppExposeTransitionSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (double)opacityForIndex:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (_Bool)wantsMinificationFilter;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;

@end
