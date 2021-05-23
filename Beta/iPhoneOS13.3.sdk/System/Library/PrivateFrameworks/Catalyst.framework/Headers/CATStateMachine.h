/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATState, NSMutableDictionary, NSString;

@interface CATStateMachine : NSObject

{
    NSMutableDictionary *mStateByName;
    NSString *mCalloutReason;
    NSString *_name;
    CATState *_initialState;
    CATState *_currentState;
    id _target;
    unsigned long long _logLevel;
}

@property (retain, nonatomic) CATState *currentState;
@property (copy, nonatomic, readonly) NSString *name;
@property (retain, nonatomic) CATState *initialState;
@property (weak, nonatomic, readonly) id target;
@property (nonatomic) unsigned long long logLevel;

+ (id)new;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)start;
- (id)initWithTarget:(id)arg1;
- (void)addState:(id)arg1;
- (id)stateWithName:(id)arg1;
- (void)transitionWithTriggeringEvent:(id)arg1;
- (void)delegateDidEnterState:(id)arg1 event:(id)arg2;
- (id)eventForTriggeringEvent:(id)arg1;
- (void)delegateWillExitState:(id)arg1 event:(id)arg2;
- (void)invokeAction:(SEL)arg1 event:(id)arg2;
- (id)addStateWithName:(id)arg1;
- (_Bool)canTransitionWithTriggeringEvent:(id)arg1;

@end
