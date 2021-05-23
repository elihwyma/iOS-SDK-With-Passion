/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@protocol CSModalHomeGestureParticipating;

@interface SBDashBoardModalHomeAffordanceControllerClientBridge : NSObject <Swift>

{
    id <CSModalHomeGestureParticipating> _coverSheetModalHomeGestureParticipant;
}

- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)initWithCoverSheetModalHomeGestureParticipant:(id)arg1;

@end
