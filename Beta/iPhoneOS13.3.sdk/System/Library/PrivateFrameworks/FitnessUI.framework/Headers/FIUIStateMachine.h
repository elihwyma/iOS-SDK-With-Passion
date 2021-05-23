/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class FIUIState, NSMutableArray, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface FIUIStateMachine : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_states;
    FIUIState *_state;
    FIUIState *_initialState;
    _Bool _handlingEvent;
    NSMutableArray *_pendingEvents;
    NSString *_queueKey;
    NSMutableArray *_transitionalEvents;
    NSMutableSet *_parentStates;
    NSString *_label;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _diagnosticHandler;
    CDUnknownBlockType _transitionalEventFilter;
    long long _pendingEvent;
}

@property long long pendingEvent;
@property (retain, nonatomic) NSString *label;
@property (copy) CDUnknownBlockType errorHandler;
@property (copy) CDUnknownBlockType diagnosticHandler;
@property (copy) CDUnknownBlockType transitionalEventFilter;

- (void)dealloc;
- (id)description;
- (id)queue;
- (id)state;
- (void)addState:(id)arg1;
- (id)graphDescription;
- (void)addStates:(id)arg1;
- (void)_queue_handleEvents;
- (void)event:(long long)arg1;
- (void)_queue_processEvent:(long long)arg1;
- (void)_queue_setInitialStateIfNeeded:(id)arg1;
- (id)initWithLabel:(id)arg1 queue:(id)arg2;
- (void)eventAsync:(long long)arg1;
- (void)addChildStates:(id)arg1 toState:(id)arg2 withEntryState:(id)arg3;

@end
