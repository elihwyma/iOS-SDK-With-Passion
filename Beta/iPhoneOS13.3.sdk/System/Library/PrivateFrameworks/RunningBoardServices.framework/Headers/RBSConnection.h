/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, RBSAssertionIdentifier, RBSProcessHandle, RBSProcessIdentity;

@protocol OS_dispatch_queue, OS_xpc_object, RBSConnectionServiceDelegate;

@interface RBSConnection : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_handleConnection;
    RBSProcessHandle *_handle;
    id <RBSConnectionServiceDelegate> _serviceDelegate;
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _assertionLock;
    struct os_unfair_lock_s _processExpirationLock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_handshakeQueue;
    NSObject<OS_dispatch_queue> *_monitorCalloutQueue;
    NSMapTable *_acquiredAssertionsByIdentifier;
    NSHashTable *_processMonitors;
    NSMutableDictionary *_stateByIdentity;
    NSMutableSet *_inheritances;
    NSHashTable *_expirationWarningAssertions;
    NSMutableDictionary *_deathHandlers;
    unsigned long long _state;
    RBSAssertionIdentifier *_handshakeIdentifier;
}

@property (nonatomic, readonly) RBSProcessHandle *handle;
@property (copy, nonatomic, readonly) RBSProcessIdentity *identity;

+ (id)sharedInstance;
+ (id)handshakeQueue;
+ (id)connectionQueue;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)_init;
- (void)reset;
- (_Bool)subscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2 error:(out id *)arg3;
- (void)unsubscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2;
- (id)infoPlistResultForInstance:(id)arg1 forKeys:(id)arg2 error:(out id *)arg3;
- (id)acquireAssertion:(id)arg1 error:(out id *)arg2;
- (_Bool)invalidateAssertion:(id)arg1 error:(out id *)arg2;
- (_Bool)invalidateAssertionWithIdentifier:(id)arg1 error:(out id *)arg2;
- (_Bool)_invalidateAssertionIdentifier:(id)arg1 error:(out id *)arg2;
- (id)_lock_connect;
- (void)_subscribeToProcessDeath:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)lastExitContextForInstance:(id)arg1 error:(out id *)arg2;
- (id)limitationsForInstance:(id)arg1 error:(out id *)arg2;
- (id)hostProcessForInstance:(id)arg1 error:(out id *)arg2;
- (id)captureStateForSubsystem:(id)arg1 error:(out id *)arg2;
- (id)busyExtensionInstancesFromSet:(id)arg1 error:(out id *)arg2;
- (void)_handshake;
- (oneway void)async_didChangeInheritances:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)async_willExpireAssertionsSoon;
- (oneway void)async_assertionWillInvalidate:(id)arg1;
- (oneway void)async_assertionsDidInvalidate:(id)arg1 withError:(id)arg2;
- (oneway void)async_observedProcessStatesDidChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)async_processDidExit:(id)arg1 withContext:(id)arg2;
- (void)_disconnect;
- (void)_handleMessage:(id)arg1;
- (_Bool)_isPlugIn;
- (id)_handshakeDescriptor;
- (id)assertionDescriptorsByPidWithFlattenedAttributes:(_Bool)arg1 error:(out id *)arg2;
- (_Bool)executeLaunchRequest:(id)arg1 process:(out id *)arg2 assertion:(out id *)arg3 error:(out id *)arg4;
- (_Bool)executeTerminateRequest:(id)arg1 assertion:(out id *)arg2 error:(out id *)arg3;
- (id)handleForKey:(id)arg1;
- (id)handleForPredicate:(id)arg1 error:(out id *)arg2;
- (void)subscribeToProcessDeath:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 error:(out id *)arg3;
- (void)intendToExit:(id)arg1 withStatus:(id)arg2;
- (id)identifiersForStateCaptureSubsystems:(out id *)arg1;
- (void)registerServiceDelegate:(id)arg1;
- (id)observeProcessAssertionsExpirationWarningWithBlock:(CDUnknownBlockType)arg1;
- (void)plugInHandshakeComplete;
- (void)_handleDaemonDidStart;

@end
