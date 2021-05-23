/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

#import <RunningBoard/Swift-Protocol.h>

@class NSMutableSet, NSString, RBClientInheritanceManager, RBProcess, RBProcessMonitorObserver, RBSAssertionIdentifier, RBSProcessHandle, RBSProcessIdentifier, RBSProcessIdentity;

@protocol OS_xpc_object, RBAssertionManaging, RBEntitlementManaging, RBEntitlementPossessing, RBProcessManaging, RBProcessMonitoring, RBStateCaptureManaging;

__attribute__((visibility("hidden")))
@interface RBConnectionClient : NSObject <Swift>

{
    NSObject<OS_xpc_object> *_connection;
    struct os_unfair_lock_s _lock;
    id <RBAssertionManaging> _assertionManager;
    id <RBEntitlementManaging> _entitlementManager;
    id <RBProcessManaging> _processManager;
    id <RBProcessMonitoring> _processMonitor;
    id <RBStateCaptureManaging> _stateCaptureManager;
    RBProcess *_containingProcess;
    NSString *_logProem;
    RBProcess *_process;
    RBSProcessHandle *_processHandle;
    RBSProcessIdentity *_processIdentity;
    RBSProcessIdentifier *_processIdentifier;
    unsigned int _euid;
    RBClientInheritanceManager *_inheritanceManager;
    id <RBEntitlementPossessing> _entitlements;
    NSMutableSet *_assertionIdentifiers;
    NSMutableSet *_deathMonitors;
    RBProcessMonitorObserver *_stateObserver;
    RBSAssertionIdentifier *_expirationBoostAssertionIdentifier;
}

@property (nonatomic, readonly) RBProcess *process;
@property (copy, nonatomic, readonly) RBSProcessIdentifier *processIdentifier;
@property (copy, nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *stateCaptureTitle;

+ (id)sharedLaunchWorkloop;
+ (id)sharedTerminationWorkloop;

- (id)init;
- (void)invalidate;
- (_Bool)hasEntitlement:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)infoPlistResultForInstance:(id)arg1 forKeys:(id)arg2 error:(out id *)arg3;
- (_Bool)invalidateAssertionWithIdentifier:(id)arg1 error:(out id *)arg2;
- (id)assertionDescriptorsWithFlattenedAttributes:(_Bool)arg1 error:(out id *)arg2;
- (id)lookupHandleForKey:(id)arg1 error:(out id *)arg2;
- (id)lookupHandleForPredicate:(id)arg1 error:(out id *)arg2;
- (id)subscribeToProcessDeath:(id)arg1 error:(out id *)arg2;
- (id)lastExitContextForInstance:(id)arg1 error:(out id *)arg2;
- (id)limitationsForInstance:(id)arg1 error:(out id *)arg2;
- (id)hostProcessForInstance:(id)arg1 error:(out id *)arg2;
- (id)identifiersForStateCaptureSubsystemsWithError:(out id *)arg1;
- (id)busyExtensionInstancesFromSet:(id)arg1 error:(out id *)arg2;
- (id)handshakeWithRequest:(id)arg1;
- (id)captureState;
- (void)handleMessage:(id)arg1;
- (_Bool)hasEntitlementDomain:(unsigned long long)arg1;
- (void)didUpdateProcessStates:(id)arg1;
- (oneway void)invalidateAssertionWithIdentifier:(id)arg1;
- (void)acquireAssertionForDescriptor:(id)arg1 withReply:(id)arg2;
- (void)executeLaunchRequest:(id)arg1 withReply:(id)arg2;
- (void)executeTerminateRequest:(id)arg1 withReply:(id)arg2;
- (_Bool)subscribeToProcessStateChangesWithConfiguration:(id)arg1 error:(out id *)arg2;
- (void)unsubscribeFromProcessStateChangesWithIdentifier:(unsigned long long)arg1;
- (void)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 withReply:(id)arg3;
- (_Bool)intendToExit:(id)arg1 withStatus:(id)arg2 error:(out id *)arg3;
- (void)captureStateForSubsystem:(id)arg1 withReply:(id)arg2;
- (void)requestPluginHoldForIdentity:(id)arg1 terminate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)inheritanceManager:(id)arg1 didChangeInheritances:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContext:(id)arg1 process:(id)arg2 connection:(id)arg3;
- (void)willExpireAssertionsSoonForProcess:(id)arg1 expirationTime:(double)arg2;
- (void)willInvalidateAssertion:(id)arg1;
- (void)didInvalidateAssertions:(id)arg1;
- (void)didRemoveProcess:(id)arg1 withState:(id)arg2;

@end
