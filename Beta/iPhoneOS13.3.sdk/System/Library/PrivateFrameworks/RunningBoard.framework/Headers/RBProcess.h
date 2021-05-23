/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class BSAuditToken, BSMachPortTaskNameRight, NSString, RBLaunchdJob, RBProcessState, RBSProcessExitContext, RBSProcessExitStatus, RBSProcessHandle, RBSProcessIdentifier, RBSProcessIdentity, RBSProcessInstance;

@protocol OS_dispatch_source, RBBundleProperties, RBJetsamBandProviding;

@interface RBProcess : NSObject

{
    int _pid;
    RBLaunchdJob *_job;
    RBSProcessIdentity *_identity;
    RBSProcessHandle *_handle;
    BSMachPortTaskNameRight *_taskNameRight;
    NSString *_logProem;
    id <RBJetsamBandProviding> _jetsamProvider;
    RBProcess *_hostProcess;
    struct os_unfair_lock_s _lock;
    RBProcessState *_lock_appliedState;
    RBProcessState *_lock_state;
    int _appliedJetsamPriority;
    _Bool _platformBinary;
    _Bool _usesSocketMonitoring;
    _Bool _systemPreventsIdleSleep;
    unsigned char _manageFlags;
    NSObject<OS_dispatch_source> *_procSource;
    double _cachedProcessStartTime;
    _Bool _systemShell;
    _Bool _terminating;
    _Bool _suspended;
    int _requestedJetsamPriority;
    RBSProcessIdentifier *_identifier;
    RBSProcessInstance *_instance;
    RBSProcessExitContext *_lastExitContext;
    RBSProcessExitStatus *_intendedExitStatus;
    id <RBBundleProperties> _bundleProperties;
    BSAuditToken *_auditToken;
    NSString *_underlyingAssertion;
    double _processStartTime;
}

@property (copy, nonatomic, readonly) RBSProcessIdentifier *identifier;
@property (copy, nonatomic, readonly) RBSProcessHandle *handle;
@property (copy, nonatomic, readonly) RBSProcessIdentity *identity;
@property (copy, nonatomic, readonly) RBSProcessInstance *instance;
@property (copy, nonatomic, readonly) BSAuditToken *auditToken;
@property (nonatomic, readonly) RBLaunchdJob *job;
@property (nonatomic, readonly) id <RBBundleProperties> bundleProperties;
@property (nonatomic, readonly) RBProcess *hostProcess;
@property (nonatomic, getter=isTerminating) _Bool terminating;
@property (nonatomic, readonly) NSString *logProem;
@property (copy, nonatomic) RBSProcessExitStatus *intendedExitStatus;
@property (copy, nonatomic, readonly) RBSProcessExitContext *lastExitContext;
@property (nonatomic, readonly, getter=isBeingPtraced) _Bool beingPtraced;
@property (nonatomic, readonly, getter=isLifecycleManaged) _Bool lifecycleManaged;
@property (nonatomic, readonly, getter=isReported) _Bool reported;
@property (nonatomic, readonly, getter=isPlatformBinary) _Bool platformBinary;
@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;
@property (nonatomic, readonly) int currentJetsamPriority;
@property (nonatomic, readonly) int requestedJetsamPriority;
@property (nonatomic, readonly, getter=isSystemShell) _Bool systemShell;
@property (nonatomic, readonly) NSString *underlyingAssertion;
@property (nonatomic, readonly) double processStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (id)succinctDescription;
- (_Bool)matchesProcess:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (int)rbs_pid;
- (id)processPredicate;
- (void)_applyState:(id)arg1;
- (void)_lock_shutdownSockets;
- (void)_applyJetsamLenientModeState:(_Bool)arg1;
- (void)_lock_applyCurrentStateIfPossible;
- (_Bool)_lock_terminateWithContext:(id)arg1;
- (_Bool)_sendSignal:(int)arg1;
- (void)_lock_applyJetsamPriority;
- (void)_lock_applyRole;
- (void)_lock_applyJetsamLenientMode;
- (void)_lock_applyGPU;
- (void)_lock_applyCPULimits;
- (id)_lock_lockedFilePathsIgnoringAllowed;
- (id)_lock_allowedLockedFilePaths;
- (void)_lock_suspend;
- (void)_lock_resume;
- (void)_lock_disableCPULimits;
- (void)_lock_setCPULimits:(CDStruct_1ef3fb1f *)arg1 violationPolicy:(unsigned long long)arg2;
- (void)_lock_restoreCPULimitDefaults;
- (void)_lock_resumeCPUMonitoring;
- (id)_initWithInstance:(id)arg1 taskNameRight:(id)arg2 job:(id)arg3 bundleProperties:(id)arg4 jetsamBandProvider:(id)arg5 initialState:(id)arg6 hostProcess:(id)arg7 properties:(id)arg8 systemPreventsIdleSleep:(_Bool)arg9;
- (void)_systemPreventIdleSleepStateDidChange:(_Bool)arg1;
- (_Bool)terminateWithContext:(id)arg1;
- (void)invokeHandlerOnProcessDeath:(CDUnknownBlockType)arg1 onQueue:(id)arg2;

@end
