/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBTransaction.h>

@class BSAtomicSignal, FBProcess, FBProcessExecutionContext, FBProcessManager, FBWaitForProcessDeathTransaction, RBSProcessIdentity;

@interface FBApplicationProcessLaunchTransaction : FBTransaction

{
    FBProcessManager *_processManager;
    RBSProcessIdentity *_identity;
    FBProcess *_process;
    CDUnknownBlockType _executionContextProvider;
    FBWaitForProcessDeathTransaction *_deathTransaction;
    FBProcessExecutionContext *_executionContext;
    BSAtomicSignal *_interruptedOrComplete;
    _Bool _failedLaunch;
    _Bool _exited;
}

@property (nonatomic, readonly) FBProcess *process;
@property (nonatomic, readonly) _Bool failedLaunch;
@property (nonatomic, readonly) _Bool exited;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_willComplete;
- (void)_didComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (id)initWithProcessIdentity:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (void)_queue_launchProcess:(id)arg1;
- (void)_queue_processWillLaunch:(id)arg1;
- (void)_queue_finishProcessLaunch:(_Bool)arg1;
- (id)initWithApplicationProcess:(id)arg1;
- (void)_queue_noteExited;

@end
