/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBSwitcherModifierActionSnapshot, SBSwitcherModifierEventSnapshot, SBSwitcherModifierStackSnapshot;

@interface SBSwitcherModifierTimelineEntry : NSObject

{
    SBSwitcherModifierEventSnapshot *_eventSnapshot;
    SBSwitcherModifierStackSnapshot *_postEventStackSnapshot;
    SBSwitcherModifierActionSnapshot *_actionSnapshot;
}

@property (retain, nonatomic) SBSwitcherModifierEventSnapshot *eventSnapshot;
@property (retain, nonatomic) SBSwitcherModifierStackSnapshot *postEventStackSnapshot;
@property (retain, nonatomic) SBSwitcherModifierActionSnapshot *actionSnapshot;

@end
