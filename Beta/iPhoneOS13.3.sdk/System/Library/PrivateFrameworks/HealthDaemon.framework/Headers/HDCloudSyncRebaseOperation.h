/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDCloudSyncFetchOperationResult, HDCloudSyncOperationConfiguration, HDCloudSyncStoreRecord, NSDate, NSMutableSet, NSProgress, NSSet, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HDCloudSyncRebaseOperation : NSObject

{
    HDCloudSyncOperationConfiguration *_configuration;
    HDCloudSyncFetchOperationResult *_fetchOperationResult;
    HDCloudSyncStoreRecord *_primaryPushStore;
    NSUUID *_operationIdentifier;
    NSDate *_startTime;
    NSString *_cloudKitIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_abandonedStoreZones;
    NSSet *_previouslySeizedStores;
    NSSet *_pullStores;
    NSSet *_allOwnerIdentifiers;
    NSMutableSet *_prepOperations;
    NSSet *_primaryContainerSeizedStores;
    NSSet *_secondaryContainerSeizedStores;
    _Bool _queue_hasStarted;
    CDUnknownBlockType _completion;
    NSProgress *_progress;
}

@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)_includedIdentifiers;
- (id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2;
- (void)_queue_runRebaseOperation;
- (void)_queue_startBaselinePrepIfRequired;
- (void)_queue_runNewRebaseOperationIfPossible;
- (id)_queue_updatedAbandonedStoresByContainerID;
- (void)_queue_startBaselinePrepOperationForPrimaryContainer:(id)arg1 abandonedStores:(id)arg2;
- (void)_queue_startBaselinePrepOperationForSecondaryContainers:(id)arg1 abandonedStores:(id)arg2;
- (id)_queue_recordIDsToDeleteWithStoreRecord:(id)arg1;
- (_Bool)_queue_finishRebasePreparationWithError:(id *)arg1;
- (_Bool)_queue_updatePersistedStateForStore:(id)arg1 error:(id *)arg2;

@end
