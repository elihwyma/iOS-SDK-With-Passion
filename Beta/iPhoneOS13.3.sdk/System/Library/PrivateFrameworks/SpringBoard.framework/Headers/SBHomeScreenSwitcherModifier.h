/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBCoplanarSwitcherModifier, _SBHomeScreenFloorSwitcherModifier;

@interface SBHomeScreenSwitcherModifier : SBSwitcherModifier

{
    _SBHomeScreenFloorSwitcherModifier *_homeScreenFloorModifier;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}

- (id)init;

@end
