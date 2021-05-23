/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFStateMachine, NFStateMachineEvent, NFStateMachineState;

@protocol NFStateMachineContextType;

@interface NFStateMachineTransition : NSObject

{
    NFStateMachine *_stateMachine;
    NFStateMachineEvent *_event;
    NFStateMachineState *_fromState;
    NFStateMachineState *_toState;
    id <NFStateMachineContextType> _context;
}

@property (retain, nonatomic) NFStateMachine *stateMachine;
@property (retain, nonatomic) NFStateMachineState *fromState;
@property (retain, nonatomic) NFStateMachineState *toState;
@property (retain, nonatomic) NFStateMachineEvent *event;
@property (retain, nonatomic) id <NFStateMachineContextType> context;

- (id)description;
- (id)initWithStateMachine:(id)arg1 event:(id)arg2 fromState:(id)arg3 toState:(id)arg4 context:(id)arg5;

@end
