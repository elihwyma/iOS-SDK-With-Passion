/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBHomeGestureArbiter, SBHomeGestureParticipant, UIScreenEdgePanGestureRecognizer;

@interface SBDashBoardModalHomeAffordanceController : NSObject

{
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBHomeGestureParticipant *_participant;
    UIScreenEdgePanGestureRecognizer *_homeGestureRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *homeGestureRecognizer;

- (id)init;
- (void)registerHomeGestureParticipant:(id)arg1;
- (void)unregisterHomeGestureParticipant;
- (void)_addGrabberView:(id)arg1;

@end
