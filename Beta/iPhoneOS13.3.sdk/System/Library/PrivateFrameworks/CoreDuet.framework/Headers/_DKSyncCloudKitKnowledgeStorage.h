/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class APSConnection, CKContainer, CKServerChangeToken, NSHashTable, NSMutableDictionary, NSMutableSet, NSOperation, NSString, _CDPeriodicSchedulerJob, _DKSyncPeerStatusTracker, _DKThrottledActivity;

@protocol _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject

{
    _Bool _started;
    id <_DKKeyValueStore> _keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    _DKSyncPeerStatusTracker *_tracker;
    _CDPeriodicSchedulerJob *_updateSourceDeviceIdentifiersPeriodicJob;
    _Bool _cloudSyncAvailablityObserverRegistered;
    CKContainer *_container;
    APSConnection *_connection;
    double _updateSourceDeviceIdentifiersBackoffTimeInterval;
    NSMutableDictionary *_zoneIDsBySourceDeviceID;
    NSMutableDictionary *_recordZonesByZoneID;
    _Bool _databaseChangesExist;
    _Bool _isPrewarmed;
    NSMutableSet *_zoneIDsWithAdditionChanges;
    NSMutableSet *_zoneIDsWithDeletionChanges;
    NSMutableSet *_zoneIDsWithUnrecoverableDecryptionErrors;
    CKServerChangeToken *_fetchDatabaseChangesServerChangeToken;
    NSOperation *_previousDependentOperation;
    NSHashTable *_outstandingOperations;
    _Bool _available;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;
@property (getter=isAvailable) _Bool available;

+ (id)sharedInstance;
+ (id)zoneIDWithDeviceID:(id)arg1;
+ (void)setMySyncZoneID:(id)arg1;
+ (id)mySyncZoneID;
+ (id)deviceIDFromZoneID:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)name;
- (void)start;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_createPushConnection;
- (void)_destroyPushConnection;
- (void)setFetchDelegate:(id)arg1;
- (long long)transportType;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)finishStartBecauseCloudIsAvailable;
- (_Bool)startShouldUpdateSourceDeviceIdentifiers;
- (void)unregisterUpdateSourceDeviceIdentifiersPeriodicJob;
- (void)finishStartOrError:(id)arg1;
- (void)registerUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureCloudPseudoPeerWithMySyncZoneID:(id)arg1;
- (void)_registerDatabaseChangesSubscription;
- (_Bool)_queueOperationForPrivateCloudDatabase:(id)arg1 dependent:(_Bool)arg2 policy:(id)arg3 error:(id *)arg4;
- (void)setHasAdditionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (void)setHasDeletionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (void)performUpdateSourceDeviceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createZoneWithZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteZoneWithZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performThrottledUpdateSourceDeviceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (id)_handleAnySpecialnessWithOperationError:(id)arg1;
- (void)scheduleRetryUpdateSourceDeviceIdentifiers;
- (void)updateSourceDeviceIdentifiersWithRecordZonesByZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishUpdatingSourceDeviceIdentifiersWithZoneIDsBySourceDeviceID:(id)arg1 orError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setZoneIDsBySourceDeviceID:(id)arg1;
- (void)configurePeerWithSourceDeviceID:(id)arg1 zoneID:(id)arg2;
- (void)_storeZoneIDFromRecords:(id)arg1 orError:(id)arg2;
- (void)setHasZoneAdditionChanges:(_Bool)arg1 forZone:(id)arg2;
- (void)setHasZoneDeletionChanges:(_Bool)arg1 forZone:(id)arg2;
- (void)addSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)removeSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)commitFetchDatabaseChangesServerChangeToken;
- (void)setPrewarmedFlag;
- (void)fastForwardPastDeletionsInNewZone:(id)arg1 sourceDeviceID:(id)arg2;
- (void)populateLastSeenDateIfNeededByPeer:(id)arg1;
- (void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (_Bool)hasZoneAdditionChangesForZone:(id)arg1;
- (_Bool)hasZoneDeletionChangesForZone:(id)arg1;
- (void)fetchChangedZonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncDownAdditionsFromCloudWithZoneID:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 deletedRecordIDsAndTypes:(id)arg2 attempt:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1;
- (id)_previousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)syncUpToCloudWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(CDUnknownBlockType)arg1;
- (id)executionCriteriaForUpdateSourceDeviceIdentifiersPeriodicJob;
- (void)cancelOutstandingOperations;
- (_Bool)hasAdditionsFlagForPeer:(id)arg1;
- (_Bool)hasDeletionsFlagForPeer:(id)arg1;
- (void)clearPrewarmedFlag;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
