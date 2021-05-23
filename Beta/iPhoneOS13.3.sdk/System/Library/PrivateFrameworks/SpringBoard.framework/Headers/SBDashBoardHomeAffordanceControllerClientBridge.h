/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@protocol CSHomeGestureParticipating;

@interface SBDashBoardHomeAffordanceControllerClientBridge : NSObject

{
    id <CSHomeGestureParticipating> _coverSheetHomeGestureParticipant;
}

- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)initWithCoverSheetHomeGestureParticipant:(id)arg1;

@end
