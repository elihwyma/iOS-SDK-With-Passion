/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

#import <RunningBoard/Swift-Protocol.h>

@class NSCountedSet, NSMutableSet, NSString, RBProcessIndex, RBProcessMap;

@protocol OS_dispatch_queue, RBStateCaptureManaging;

@interface RBProcessMonitor : NSObject <Swift>

{
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    RBProcessMap *_suppressedState;
    RBProcessMap *_publishedState;
    NSCountedSet *_suppressedIdentities;
    struct os_unfair_lock_s _observersLock;
    NSMutableSet *_observers;
    id <RBStateCaptureManaging> _stateCaptureManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *monitorSerializationQueue;
@property (copy, nonatomic, readonly) NSString *stateCaptureTitle;

+ (id)_clientStateForServerState:(id)arg1 process:(id)arg2;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)captureState;
- (void)didUpdateProcessStates:(id)arg1;
- (void)removeStateForProcessIdentity:(id)arg1;
- (void)suppressUpdatesForIdentity:(id)arg1;
- (void)unsuppressUpdatesForIdentity:(id)arg1;
- (id)statesMatchingPredicate:(id)arg1;
- (void)didRemoveProcess:(id)arg1 withState:(id)arg2;
- (void)_queue_updateServerState:(id)arg1 forProcess:(id)arg2 force:(_Bool)arg3;
- (void)_queue_suppressUpdatesForIdentity:(id)arg1;
- (void)_queue_unsuppressUpdatesForIdentity:(id)arg1;
- (void)_queue_publishState:(id)arg1 forIdentity:(id)arg2;
- (id)statesMatchingConfiguration:(id)arg1;
- (void)didAddProcess:(id)arg1 withState:(id)arg2;
- (void)trackStateForProcessIdentity:(id)arg1;
- (id)initWithStateCaptureManager:(id)arg1;

@end
