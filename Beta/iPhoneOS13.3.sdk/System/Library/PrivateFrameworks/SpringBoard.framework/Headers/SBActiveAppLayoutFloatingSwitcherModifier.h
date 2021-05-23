/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBStackedFloatingSwitcherModifier, _SBActiveAppFloorFloatingSwitcherModifier;

@interface SBActiveAppLayoutFloatingSwitcherModifier : SBSwitcherModifier

{
    SBStackedFloatingSwitcherModifier *_stackedModifier;
    _SBActiveAppFloorFloatingSwitcherModifier *_floorModifier;
}

- (id)initWithActiveAppLayout:(id)arg1 floatingConfiguration:(long long)arg2;

@end
