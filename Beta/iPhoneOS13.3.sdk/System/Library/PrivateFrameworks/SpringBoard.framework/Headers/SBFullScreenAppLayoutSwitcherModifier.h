/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBCoplanarSwitcherModifier, _SBFullScreenAppFloorSwitcherModifier;

@interface SBFullScreenAppLayoutSwitcherModifier : SBSwitcherModifier

{
    SBCoplanarSwitcherModifier *_coplanarModifier;
    _SBFullScreenAppFloorSwitcherModifier *_floorModifier;
}

- (id)initWithActiveAppLayout:(id)arg1;

@end
