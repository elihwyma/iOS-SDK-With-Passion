/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@class CUState, CUStateMachine, NSDictionary, NSPointerArray;

@interface SUICProgressStateMachine : NSObject

{
    CUStateMachine *_underlyingStateMachine;
    NSDictionary *_stateForStateName;
    unsigned long long _currentState;
    CUState *_abstractState;
    NSPointerArray *_stateMachineObservers;
}

@property (retain, nonatomic, getter=_stateMachineObservers, setter=_setStateMachineObservers:) NSPointerArray *stateMachineObservers;
@property (readonly) unsigned long long state;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)handleEvent:(unsigned long long)arg1;
- (void)_transitionToState:(unsigned long long)arg1 forEvent:(unsigned long long)arg2;
- (void)_ignoreEvent:(unsigned long long)arg1;
- (void)addObservers:(id)arg1;

@end
