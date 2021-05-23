/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFMutexLock, NFStateMachineState, NSMutableDictionary;

@interface NFStateMachine : NSObject

{
    unsigned long long _status;
    NFStateMachineState *_state;
    id _owner;
    NSMutableDictionary *_states;
    NSMutableDictionary *_events;
    NFMutexLock *_lock;
    long long _statusToken;
}

@property (weak, nonatomic) id owner;
@property (retain, nonatomic) NSMutableDictionary *states;
@property (retain, nonatomic) NSMutableDictionary *events;
@property (retain, nonatomic) NFStateMachineState *state;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NFMutexLock *lock;
@property (nonatomic) long long statusToken;

- (id)description;
- (id)debugDescription;
- (void)activate;
- (void)deactivate;
- (void)activateIfNeeded;
- (void)addEvent:(id)arg1;
- (void)addState:(id)arg1;
- (id)initWithState:(id)arg1 withOwner:(id)arg2;
- (void)deactivateIfNeeded;
- (id)fireEventWithName:(id)arg1 withContext:(id)arg2;

@end
