/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class BSMachPortTaskNameRight, BSProcessHandle, FBProcessCPUStatistics, FBProcessExecutionContext, FBProcessExitContext, FBProcessState, FBSApplicationInfo, FBWorkspace, NSError, NSHashTable, NSMutableArray, NSString, RBSAssertion, RBSProcessHandle, RBSProcessIdentity, RBSProcessState, RBSTarget;

@protocol FBProcessDelegate, OS_dispatch_queue;

@interface FBProcess : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    FBProcessExecutionContext *_executionContext;
    id <FBProcessDelegate> _delegate;
    int _pid;
    RBSProcessIdentity *_identity;
    BSProcessHandle *_handle;
    RBSProcessHandle *_rbsHandle;
    FBProcessState *_state;
    NSString *_bundleIdentifier;
    NSString *_executablePath;
    FBSApplicationInfo *_applicationInfo;
    FBWorkspace *_workspace;
    FBProcessCPUStatistics *_cpuStatistics;
    long long _backgroundingPolicy;
    FBProcessExitContext *_exitContext;
    NSHashTable *_observers;
    NSMutableArray *_launchCompletionBlocks;
    RBSProcessState *_rbsState;
    NSError *_bootstrapError;
    RBSAssertion *_launchAssertion;
    RBSAssertion *_continuousAssertion;
    _Bool _waitForDebugger;
    _Bool _updatingState;
    _Bool _didExit;
    _Bool _invalidated;
    _Bool _attemptedBootstrap;
    _Bool _launchFinalized;
    _Bool _launchSuccess;
    _Bool _submittedLaunchRequest;
    long long _executableLivesOnSystemPartition;
    int _pendingExit;
    double _execTime;
    RBSTarget *_target;
}

@property (nonatomic, readonly) _Bool executableLivesOnSystemPartition;
@property (nonatomic, readonly) long long backgroundingPolicy;
@property (nonatomic, readonly) double execTime;
@property (nonatomic, readonly) RBSTarget *target;
@property (copy, nonatomic, readonly) FBProcessState *state;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) FBProcessExecutionContext *executionContext;
@property (nonatomic, readonly) FBProcessExitContext *exitContext;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) BSProcessHandle *handle;
@property (nonatomic, readonly) RBSProcessIdentity *identity;
@property (nonatomic, readonly) FBSApplicationInfo *applicationInfo;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly, getter=isForeground) _Bool foreground;
@property (nonatomic, readonly) _Bool finishedLaunching;
@property (nonatomic, readonly, getter=isPendingExit) _Bool pendingExit;
@property (nonatomic, readonly, getter=isBeingDebugged) _Bool beingDebugged;
@property (nonatomic, readonly) FBWorkspace *workspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) BSMachPortTaskNameRight *taskNameRight;

+ (id)calloutQueue;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (id)succinctDescription;
- (_Bool)matchesProcess:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)processPredicate;
- (_Bool)isSystemApplicationProcess;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (_Bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (id)initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3;
- (_Bool)isExtensionProcess;
- (_Bool)isApplicationProcess;
- (void)_notePendingExitForReason:(id)arg1;
- (void)_queue_dropAssertions;
- (void)_queue_bootstrapAndExec;
- (void)_queue_executeLaunchCompletionBlocks:(_Bool)arg1;
- (void)_queue_rebuildState;
- (void)_queue_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_queue_setTaskState:(long long)arg1;
- (void)_queue_updateStateWithBlock:(CDUnknownBlockType)arg1;
- (void)_queue_setVisibility:(long long)arg1;
- (id)_queue_createBootstrapContext;
- (void)_queue_setPid:(int)arg1;
- (void)_queue_rebuildState:(id)arg1;
- (void)_queue_noteLaunchWillComplete;
- (void)_queue_processDidExitWithContext:(id)arg1;
- (void)_queue_launchComplete:(id)arg1;
- (void)_queue_noteLaunchDidComplete:(_Bool)arg1;
- (void)_queue_noteProcessDidExit:(id)arg1;
- (void)_queue_setDebugging:(_Bool)arg1;
- (void)launchWithDelegate:(id)arg1;
- (void)_executeBlockAfterLaunchCompletes:(CDUnknownBlockType)arg1;
- (void)_queue_sceneLifecycleStateChanged:(id)arg1;
- (void)_updateCPUStatistics;
- (_Bool)_wantsStateUpdates;
- (void)_noteStateDidUpdate:(id)arg1;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
