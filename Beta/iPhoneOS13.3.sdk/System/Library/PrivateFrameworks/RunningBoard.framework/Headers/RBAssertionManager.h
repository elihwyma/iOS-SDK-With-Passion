/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

#import <RunningBoard/Swift-Protocol.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSString, RBAssertionCollection, RBAssertionManagerEventQueue, RBAssertionStateResolver, RBProcessIndex, RBProcessMap, RBSystemState;

@protocol OS_dispatch_queue, RBAssertionDescriptorValidating, RBAssertionManagerDelegate, RBAssertionOriginatorPidPersisting, RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementManaging, RBJetsamBandProviding, RBStateCaptureManaging;

@interface RBAssertionManager : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_workloop;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    struct os_unfair_lock_s _lock;
    id <RBAssertionManagerDelegate> _delegate;
    RBAssertionCollection *_assertions;
    RBSystemState *_systemState;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    NSMutableDictionary *_relativeStartTimesByTargetIdentity;
    double _creationTime;
    NSMutableDictionary *_originatorToInFlightOperationsCountMap;
    NSCountedSet *_inFlightAssertionTargets;
    struct os_unfair_lock_s _inFlightOperationsLock;
    id <RBBundlePropertiesManaging> _bundlePropertiesManager;
    id <RBAssertionDescriptorValidating> _descriptorValidator;
    id <RBDomainAttributeManaging> _domainAttributeManager;
    id <RBEntitlementManaging> _entitlementManager;
    id <RBJetsamBandProviding> _jetsamBandProvider;
    id <RBAssertionOriginatorPidPersisting> _originatorPidStore;
    id <RBStateCaptureManaging> _stateCaptureManager;
    unsigned long long _maxOperationsInFlight;
    unsigned long long _maxAssertionsPerOriginator;
    RBAssertionStateResolver *_stateResolver;
    RBAssertionManagerEventQueue *_eventQueue;
    NSMutableSet *_assertionTargets;
    NSMutableSet *_acquiringAssertionIdentifiers;
    NSMutableSet *_invalidAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *stateCaptureTitle;

+ (id)sharedWorkloop;

- (id)init;
- (id)stateForIdentity:(id)arg1;
- (id)captureState;
- (id)processForIdentity:(id)arg1;
- (_Bool)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg1;
- (double)eventQueue:(id)arg1 startTimeForAssertion:(id)arg2;
- (void)eventQueue:(id)arg1 handleWarningEventForAssertion:(id)arg2;
- (void)eventQueue:(id)arg1 handleInvalidationEventForAssertion:(id)arg2;
- (double)eventQueue:(id)arg1 remainingRuntimeForProcessIdentity:(id)arg2;
- (void)eventQueue:(id)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg2 expirationTime:(double)arg3;
- (id)_concreteTargetForTarget:(id)arg1 withContext:(id)arg2;
- (_Bool)_lock_hasStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1;
- (double)_lock_invalidationTimeForAssertion:(id)arg1;
- (void)_lock_setState:(id)arg1 forProcessIdentity:(id)arg2;
- (void)_increaseInFlightOperationsForTargetIdentity:(id)arg1;
- (_Bool)_increaseInFlightOperationsForOriginator:(id)arg1;
- (void)_decreaseInFlightOperationsForTargetIdentity:(id)arg1;
- (_Bool)_decreaseInFlightOperationsForOriginator:(id)arg1;
- (void)_lock_deactivateDelayedAssertionsForTargetsAndUpdateStates:(id)arg1;
- (void)_lock_addAssertion:(id)arg1;
- (id)_lock_updateStatesDueToChangingAssertions:(id)arg1;
- (_Bool)invalidateAssertion:(id)arg1;
- (void)_lock_enqueueAssertionsForRemoval:(id)arg1;
- (void)_lock_removeInvalidAssertions;
- (id)assertionDescriptorsWithFlattenedAttributes:(_Bool)arg1;
- (double)_remainingRuntimeForProcessIdentity:(id)arg1;
- (id)assertionsForOriginator:(id)arg1;
- (void)acquireAssertionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_acquireUnderlyingAssertionForProcess:(id)arg1;
- (void)_lock_removeAssertions:(id)arg1;
- (void)_lock_removeStateForProcessIdentityIfNecessary:(id)arg1;
- (id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id *)arg4;
- (id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
- (struct NSString *)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
- (_Bool)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
- (id)allEntitlements;
- (_Bool)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;
- (double)_lock_startTimeForAssertion:(id)arg1;
- (void)_removeInvalidAssertions;
- (unsigned long long)_lock_numberofStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1;
- (id)_lock_activateDelayedAssertionsForTargets:(id)arg1;
- (void)_lock_clearStartTimesForUnbusyTargets:(id)arg1;
- (void)_lock_notifyDelegateOfProcessStateChangeSet:(id)arg1;
- (void)_lock_removeAssertion:(id)arg1;
- (id)_lock_sortedAssertionsForTarget:(id)arg1;
- (void)_lock_dumpAssertionsForTarget:(id)arg1;
- (void)_dumpAssertions;
- (id)_lock_deactivateDelayedAssertionsForTargets:(id)arg1;
- (void)_lock_setSystemState:(id)arg1;
- (double)_lock_relativeStartTimeForAssertion:(id)arg1;
- (double)_lock_delayedStartTimeForAssertion:(id)arg1;
- (_Bool)invalidateAssertionFromOriginator:(id)arg1 withIdentifier:(id)arg2;
- (_Bool)invalidateAssertionWithIdentifier:(id)arg1;
- (id)limitationsForInstance:(id)arg1;
- (_Bool)hasAssertionWithIdentifier:(id)arg1;
- (void)processDidLaunch:(id)arg1;
- (void)processDidTerminate:(id)arg1;
- (void)revalidateAssertionsForProcessIdentities:(id)arg1;
- (id)initWithDelegate:(id)arg1 domainAttributeManager:(id)arg2 bundlePropertiesManager:(id)arg3 originatorPidStore:(id)arg4 assertionDescriptorValidator:(id)arg5 entitlementManager:(id)arg6 jetsamBandProvider:(id)arg7 stateCaptureManager:(id)arg8 maxOperationsInFlight:(unsigned long long)arg9 maxAssertionsPerOriginator:(unsigned long long)arg10;

@end
