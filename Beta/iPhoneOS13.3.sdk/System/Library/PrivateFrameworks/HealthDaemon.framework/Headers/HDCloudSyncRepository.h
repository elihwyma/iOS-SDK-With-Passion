/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CKContainer, HDProfile, NSArray, NSDictionary, NSMutableArray, NSSet;

@protocol OS_dispatch_queue;

@interface HDCloudSyncRepository : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    long long _pullOperationFailureCount;
    NSMutableArray *_ownerIdentifierFetchCompletionBlocks;
    NSMutableArray *_blocksPendingDeviceToDeviceEncryptionAvailability;
    _Bool _deviceToDeviceEncryptionCheckInProgress;
    _Bool _deviceToDeviceEncryptionRecheckRequired;
    HDProfile *_profile;
    CKContainer *_primaryCKContainer;
    NSArray *_secondaryCKContainers;
    NSSet *_allCKContainers;
    unsigned long long _repositorySettings;
    NSDictionary *_ownerIdentifiersByContainerIdentifier;
}

@property (nonatomic) unsigned long long repositorySettings;
@property (nonatomic, readonly) long long deviceMode;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) CKContainer *primaryCKContainer;
@property (nonatomic, readonly) NSArray *secondaryCKContainers;
@property (nonatomic, readonly) NSSet *allCKContainers;
@property (copy, nonatomic, readonly) NSDictionary *ownerIdentifiersByContainerIdentifier;
@property (copy, nonatomic, readonly) NSSet *allOwnerIdentifiers;

- (void)dealloc;
- (id)description;
- (void)disableSyncLocallyWithTaskTree:(id)arg1;
- (void)cloudKitIdentityUpdated:(id)arg1;
- (void)_queue_fetchOwnerIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_fetchOwnerIdentifierForContainer:(id)arg1 results:(id)arg2 taskTree:(id)arg3;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 accessibilityAssertion:(id)arg4 taskTree:(id)arg5;
- (id)_operationGroupForReason:(long long)arg1 options:(unsigned long long)arg2;
- (void)fetchSyncStatusWithTaskTree:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;
- (long long)_pendingProgressCountForPushOperationGivenOptions:(unsigned long long)arg1 maxPullOperationCount:(long long)arg2;
- (long long)_pendingProgressCountForPullOperationsGivenOptions:(unsigned long long)arg1;
- (id)_startPullOperationForPullZone:(id)arg1 configuration:(id)arg2 fetchOperationResult:(id)arg3 taskTree:(id)arg4;
- (void)_queue_recordSuccessfulPull;
- (id)_lastSuccessfulPullKey;
- (void)_queue_generateRestoreEventSyncCompleteWithPullCompleteDate:(id)arg1;
- (void)_updateProgress:(id)arg1 isPrimaryContainer:(_Bool)arg2 forOperationComponent:(unsigned long long)arg3;
- (void)resetContainer:(id)arg1 withOptions:(unsigned long long)arg2 reason:(long long)arg3 progress:(id)arg4 syncIdentifier:(id)arg5 taskTree:(id)arg6;
- (id)_cloudSyncContainerDescriptionFromFetchOperationResult:(id)arg1 configuration:(id)arg2;
- (id)_fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)_disableCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (id)containerForContainerIdentifier:(id)arg1;
- (void)_queue_flushPendingDeviceToDeviceEncryptionAvailabilityBlocks;
- (void)_queue_checkForDeviceToDeviceEncryptionAvailability;
- (id)initWithProfile:(id)arg1 primaryCKContainer:(id)arg2 secondaryCKContainers:(id)arg3;
- (void)fetchOwnerIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)resetWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4;
- (id)fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1 identifier:(id)arg2;
- (void)_queue_performWhenDeviceToDeviceEncryptionIsAvailable:(CDUnknownBlockType)arg1;

@end
