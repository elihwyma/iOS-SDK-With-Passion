/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBMoveGestureFloatingSwitcherModifier : SBGestureSwitcherModifier

{
    long long _initialFloatingConfiguration;
    long long _interfaceOrientation;
    struct CGPoint _translation;
}

@property (nonatomic) long long initialFloatingConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) struct CGPoint translation;

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (id)topMostAppLayouts;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (struct CGRect)containerViewBounds;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;

@end
