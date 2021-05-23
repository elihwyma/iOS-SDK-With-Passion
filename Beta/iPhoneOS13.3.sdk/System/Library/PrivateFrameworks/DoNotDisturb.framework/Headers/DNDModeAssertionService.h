/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class DNDModeAssertion, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface DNDModeAssertionService : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_clientIdentifier;
    NSHashTable *_assertionUpdateListeners;
    struct atomic_flag _registeredForUpdates;
    DNDModeAssertion *_activeAssertion;
    struct os_unfair_lock_s _activeAssertionLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *clientIdentifier;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (id)_initWithClientIdentifier:(id)arg1;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (void)remoteService:(id)arg1 didChangeActiveModeAssertion:(id)arg2 invalidation:(id)arg3;
- (id)invalidateActiveModeAssertionWithInvalidationDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 error:(id *)arg3;
- (void)_registerForAssertionUpdatesIfRequiredWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleXPCInterruption;
- (void)_handleChangeActiveModeAssertion:(id)arg1 invalidation:(id)arg2;
- (id)activeModeAssertionWithError:(id *)arg1;
- (id)takeModeAssertionWithDetails:(id)arg1 error:(id *)arg2;
- (id)invalidateActiveModeAssertionWithError:(id *)arg1;
- (id)latestModeAssertionInvalidationWithError:(id *)arg1;
- (_Bool)invalidateAllActiveModeAssertionsWithError:(id *)arg1;
- (void)addAssertionUpdateListener:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAssertionUpdateListener:(id)arg1;
- (_Bool)addAssertionUpdateListener:(id)arg1 error:(id *)arg2;
- (_Bool)removeAssertionUpdateListener:(id)arg1 error:(id *)arg2;

@end
