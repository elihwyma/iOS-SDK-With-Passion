/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKObserverSet, HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKConceptStore : NSObject

{
    HKObserverSet *_conceptObservers;
    struct os_unfair_lock_s _conceptIndexManagerStateLock;
    unsigned long long _lastKnownConceptIndexManagerState;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly) unsigned long long currentConceptIndexerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)taskServerIdentifier;
+ (id)conceptStore;

- (id)init;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;
- (void)_startTaskServerIfNeeded;
- (id)_conceptForIdentifier:(id)arg1;
- (id)conceptsWithAttribute:(long long)arg1 matchingValue:(id)arg2;
- (void)clientRemote_conceptIndexManagerDidChangeState:(unsigned long long)arg1;
- (id)ontologyVersionWithError:(id *)arg1;
- (id)resolveConceptForContext:(id)arg1;
- (id)resolveDisplayNamesForCodingContexts:(id)arg1;
- (id)conceptForIdentifier:(id)arg1;
- (id)_conceptForCoding:(id)arg1;
- (id)_unitTest_conceptForName:(id)arg1;
- (id)conceptsWithRelationship:(id)arg1 toNode:(id)arg2;
- (id)conceptsWithRelationship:(id)arg1 fromNodeWithID:(id)arg2;
- (id)displayNameForCodingSystemWithID:(long long)arg1 value:(id)arg2;
- (_Bool)loadRelationshipsForConcept:(id)arg1;
- (_Bool)makeAssociationFromSample:(id)arg1 toConcept:(id)arg2;
- (_Bool)breakAssociationFromSample:(id)arg1 toConcept:(id)arg2;
- (long long)countOfConceptsAssociatedToUserRecordsWithError:(id *)arg1;
- (id)conceptsAssociatedToUserRecordsWithError:(id *)arg1;
- (_Bool)cleanUpAfterUnitTest;
- (void)resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerAsConceptObserver:(id)arg1 onQueue:(id)arg2;
- (void)unregisterAsConceptObserver:(id)arg1 onQueue:(id)arg2;

@end
