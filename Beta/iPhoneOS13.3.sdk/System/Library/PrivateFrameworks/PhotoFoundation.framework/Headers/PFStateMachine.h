/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PFStateMachineGraph, PFStateMachineNode;

@protocol OS_dispatch_queue;

@interface PFStateMachine : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id _uuid;
    PFStateMachineGraph *_graph;
    PFStateMachineNode *_previousNode;
    PFStateMachineNode *_currentNode;
    id _owner;
    NSString *_name;
    id _delayedEventCancelToken;
    NSMutableArray *_subflowStack;
}

@property (readonly) NSString *name;
@property (readonly) id uuid;

- (void)dealloc;
- (id)description;
- (id)owner;
- (id)graph;
- (void)handleEvent:(id)arg1;
- (id)initWithGraph:(id)arg1 name:(id)arg2 owner:(id)arg3;
- (id)previousNode;
- (id)currentNode;
- (void)_pushReturnTransition:(id)arg1;
- (id)_popReturnTransition;
- (void)_handleEvent:(id)arg1;
- (void)postEvent:(id)arg1 afterTimeout:(double)arg2;
- (void)atomicHandleEvent:(CDUnknownBlockType)arg1;
- (void)atomicHandleEventAsync:(CDUnknownBlockType)arg1;
- (id)atomicQueue;
- (void)_cancelLastDelayedEvent;
- (void)trace:(id)arg1;
- (void)traceObject:(id)arg1 state:(id)arg2;

@end
