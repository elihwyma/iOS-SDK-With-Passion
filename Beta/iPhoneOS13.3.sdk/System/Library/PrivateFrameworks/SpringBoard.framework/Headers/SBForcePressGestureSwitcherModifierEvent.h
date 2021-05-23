/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@interface SBForcePressGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

{
    double _forcePercent;
}

@property (nonatomic) double forcePercent;

- (long long)type;

@end
