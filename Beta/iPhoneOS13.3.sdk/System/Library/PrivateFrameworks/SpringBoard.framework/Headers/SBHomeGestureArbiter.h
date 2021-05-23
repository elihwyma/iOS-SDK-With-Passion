/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableArray, NSString, SBHomeGestureParticipant;

@protocol BSInvalidatable;

@interface SBHomeGestureArbiter : NSObject <Swift>

{
    id <BSInvalidatable> _stateCaptureHandle;
    NSMutableArray *_participants;
    SBHomeGestureParticipant *_owningParticipant;
    SBHomeGestureParticipant *_hardwareButtonServiceParticipant;
    id <BSInvalidatable> _hardwareButtonObserverAssertion;
}

@property (retain, nonatomic) id <BSInvalidatable> stateCaptureHandle;
@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) SBHomeGestureParticipant *owningParticipant;
@property (retain, nonatomic) SBHomeGestureParticipant *hardwareButtonServiceParticipant;
@property (retain, nonatomic) id <BSInvalidatable> hardwareButtonObserverAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)participantWithIdentifier:(long long)arg1 delegate:(id)arg2;
- (void)buttonService:(id)arg1 buttonKind:(long long)arg2 eventsConsumedDidChange:(unsigned long long)arg3;
- (void)_updateHardwareButtonServiceParticipant;
- (void)_unregisterParticipant:(id)arg1;
- (void)_registerParticipant:(id)arg1;
- (void)_updateOwningParticipant;

@end
