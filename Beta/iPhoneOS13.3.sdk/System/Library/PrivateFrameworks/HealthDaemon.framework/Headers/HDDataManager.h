/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDQuantitySeriesManager, NSMutableDictionary, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface HDDataManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_observersByDataType;
    struct os_unfair_lock_s _synchronousObserverLock;
    NSMutableDictionary *_synchronousObserversBySampleType;
    _Bool _needsSynchronousNotification;
    unsigned long long _openTransactions;
    NSMutableDictionary *_pendingObjectsBySampleType;
    NSNumber *_lastAnchor;
    double _lastNotifyLogTime;
    long long _notifyCount;
    long long _samplesAddedCount;
    long long _samplesJournaledCount;
    HDQuantitySeriesManager *_quantitySeriesManager;
    HDProfile *_profile;
}

@property (weak, nonatomic) HDProfile *profile;
@property (nonatomic, readonly) HDQuantitySeriesManager *quantitySeriesManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (id)diagnosticDescription;
- (void)addObserver:(id)arg1 forDataType:(id)arg2;
- (_Bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(_Bool)arg4 error:(id *)arg5;
- (_Bool)deleteObjectsWithUUIDCollection:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (void)removeObserver:(id)arg1 forDataType:(id)arg2;
- (_Bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 error:(id *)arg4;
- (_Bool)insertDataObjects:(id)arg1 sourceEntity:(id)arg2 deviceEntity:(id)arg3 sourceVersion:(id)arg4 creationDate:(double)arg5 error:(id *)arg6;
- (_Bool)deleteSamplesWithTypes:(id)arg1 sourceEntities:(id)arg2 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)deleteDataObjects:(id)arg1 restrictedSourceEntities:(id)arg2 failIfNotFound:(_Bool)arg3 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (_Bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(_Bool)arg4 updateSourceOrder:(_Bool)arg5 error:(id *)arg6;
- (void)shouldNotifyForDataObjects:(id)arg1 provenance:(id)arg2 database:(id)arg3 anchor:(id)arg4;
- (_Bool)deleteSamplesWithSourceEntities:(id)arg1 error:(id *)arg2;
- (long long)hasSampleWithBundleIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)containsDataObject:(id)arg1;
- (void)openObserverTransaction;
- (void)closeObserverTransaction;
- (_Bool)_insertDataObjects:(id)arg1 transaction:(id)arg2 insertionContext:(id)arg3 updateSourceOrder:(_Bool)arg4 error:(id *)arg5;
- (void)_notifySynchronousObserversIfPossible;
- (void)_callObserversIfPossible;
- (void)_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)shouldNotifyForDeletedSamplesOfTypes:(id)arg1 transaction:(id)arg2 anchor:(id)arg3;
- (void)_notifySynchronousObserversForDeletedObjectTypes:(id)arg1 anchor:(id)arg2;
- (void)_notifyObserversWithAddedObjectsBySampleType:(id)arg1 lastAnchor:(id)arg2;
- (id)_observersForDataType:(id)arg1;
- (void)_callObservers:(id)arg1 samples:(id)arg2 type:(id)arg3 anchor:(id)arg4;
- (id)_observersForAllTypes;
- (id)_deleteDataObjectsByUUIDSQLStringForConfiguration:(id)arg1 entityType:(long long)arg2 error:(id *)arg3;
- (void)_shouldNotifyForDeletedSamplesOfTypes:(id)arg1 anchor:(id)arg2;
- (_Bool)_deleteObjectsWithTypes:(id)arg1 sourceEntities:(id)arg2 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)deleteDataObjectsOfClass:(Class)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 deletedSampleCount:(unsigned long long *)arg4 notifyObservers:(_Bool)arg5 generateDeletedObjects:(_Bool)arg6 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg7 error:(id *)arg8;
- (void)_notificationQueue_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (id)_queue_observersAllTypesCreateIfNil:(_Bool)arg1;
- (id)_queue_observersForDataType:(id)arg1 createIfNil:(_Bool)arg2;
- (id)_queue_observersForKey:(id)arg1 createIfNil:(_Bool)arg2;
- (id)_synchronousObserverLock_synchronousObserverSetForSampleType:(id)arg1;
- (_Bool)_synchronousObserverLock_hasSynchronousObserverForSampleType:(id)arg1;
- (_Bool)insertDataObjects:(id)arg1 error:(id *)arg2;
- (_Bool)deleteSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)deleteSamplesWithUUIDs:(id)arg1 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)deleteSamplesWithUUIDs:(id)arg1 generateDeletedObjects:(_Bool)arg2 database:(id)arg3 error:(id *)arg4;
- (void)addObserverForAllTypes:(id)arg1;
- (void)removeObserverForAllTypes:(id)arg1;
- (void)addSynchronousObserver:(id)arg1 forSampleType:(id)arg2;
- (void)removeSynchronousObserver:(id)arg1 forSampleType:(id)arg2;
- (void)synchronouslyCloseObserverTransactionAndNotify;
- (void)setBackgroundObserverFrequency:(id)arg1 forDataType:(id)arg2 frequency:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end
