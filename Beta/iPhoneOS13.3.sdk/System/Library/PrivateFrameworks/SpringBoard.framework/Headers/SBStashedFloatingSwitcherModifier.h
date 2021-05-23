/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBActiveAppLayoutFloatingSwitcherModifier;

@interface SBStashedFloatingSwitcherModifier : SBSwitcherModifier

{
    SBActiveAppLayoutFloatingSwitcherModifier *_activeModifier;
}

- (id)init;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;

@end
