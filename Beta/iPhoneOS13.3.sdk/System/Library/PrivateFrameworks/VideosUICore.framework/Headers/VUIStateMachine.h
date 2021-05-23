/*
 Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_os_log;

@interface VUIStateMachine : NSObject

{
    CDUnknownBlockType _stateChangeHandler;
    NSMutableArray *_events;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_defaultHandlers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_blocksToExecuteAfterStateTransition;
    _Bool _handlingEvent;
    _Bool _shouldAcceptEvents;
    _Bool _callsStateChangeHandlerSynchronously;
    NSString *_name;
    NSString *_currentState;
    long long _mode;
    NSObject<OS_os_log> *_logObject;
    NSArray *_ignorableEvents;
}

@property (copy) NSString *currentState;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long mode;
@property _Bool shouldAcceptEvents;
@property (retain, nonatomic) NSObject<OS_os_log> *logObject;
@property (copy) NSArray *ignorableEvents;
@property (nonatomic) _Bool callsStateChangeHandlerSynchronously;

+ (void)initialize;
+ (void)registerStateMachine:(id)arg1;
+ (id)stateMachineWithName:(id)arg1;
+ (void)deregisterStateMachine:(id)arg1;
+ (id)stateMachinesOfType:(Class)arg1;

- (void)_processNextEvent;
- (void)postEvent:(id)arg1;
- (void)purgeEventQueue;
- (void)deregisterHandlers;
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 stateChangeHandler:(CDUnknownBlockType)arg4;
- (void)postEvent:(id)arg1 withContext:(id)arg2 userInfo:(id)arg3;
- (void)registerHandlerForEvent:(id)arg1 onState:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3;
- (void)postEvent:(id)arg1 withContext:(id)arg2;
- (void)registerHandlerForEvent:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)registerHandlerForEvents:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)registerDefaultHandlerForEvent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)registerStateTransitionFromState:(id)arg1 onEvent:(id)arg2 toState:(id)arg3;
- (void)executeBlockAfterCurrentStateTransition:(CDUnknownBlockType)arg1;
- (void)logUnhandledEvents;
- (void)_executePostTransitionBlocks;
- (void)_processEvent:(id)arg1;
- (void)_dispatchEvent:(id)arg1;
- (CDUnknownBlockType)_eventHandlerForEvent:(id)arg1;
- (void)_transitionToState:(id)arg1 withEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4;

@end
