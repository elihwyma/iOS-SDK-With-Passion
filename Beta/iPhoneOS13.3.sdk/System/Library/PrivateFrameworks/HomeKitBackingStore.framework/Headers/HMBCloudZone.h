/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class CKDatabase, HMBCloudDatabase, HMBCloudZoneConfiguration, HMBCloudZoneID, HMBCloudZoneShareModel, HMBLocalZone, HMBModelContainer, HMFUnfairLock, NAFuture, NSMapTable, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSUUID;

@protocol HMBCloudZoneDelegate, HMBCloudZoneRebuilder;

@interface HMBCloudZone : HMFObject

{
    _Bool _needsZoneCreation;
    _Bool _needsZoneDeletion;
    NAFuture *_startUp;
    HMBCloudDatabase *_cloudDatabase;
    id <HMBCloudZoneDelegate> _delegate;
    HMBCloudZoneConfiguration *_configuration;
    HMBLocalZone *_localZone;
    CKDatabase *_database;
    HMBLocalZone *_stateZone;
    NSUUID *_stateModelID;
    HMBCloudZoneID *_zoneID;
    NSMapTable *_modelClassToRequiresPostProcessingMap;
    NSMapTable *_inflightPushOperations;
    HMFUnfairLock *_propertyLock;
    NSString *_deviceIdentifier;
    NSMutableArray *_ckOperations;
    NAFuture *_shutdownFuture;
    NAFuture *_destroyFuture;
    id <HMBCloudZoneRebuilder> _rebuilder;
    HMBCloudZoneShareModel *_shareModel;
    NSOperationQueue *_shareOperationQueue;
    NSMutableDictionary *_shareParticipantModelsByClientIdentifier;
    HMBModelContainer *_modelContainer;
}

@property (nonatomic, readonly) long long keyStatus;
@property (nonatomic, readonly) NAFuture *waitForPendingRebuild;
@property (nonatomic, readonly, getter=isZoneRebuildInProgress) _Bool zoneRebuildInProgress;
@property (copy, readonly) NSSet *subscriptions;
@property (nonatomic, readonly) NSSet *participants;
@property (nonatomic, readonly) CKDatabase *database;
@property (weak, nonatomic) HMBCloudDatabase *cloudDatabase;
@property (weak, nonatomic) HMBLocalZone *stateZone;
@property (nonatomic, readonly) NSUUID *stateModelID;
@property (nonatomic, readonly) _Bool needsZoneCreation;
@property (nonatomic, readonly) _Bool needsZoneDeletion;
@property (retain, nonatomic) HMBCloudZoneID *zoneID;
@property (nonatomic, readonly) NSMapTable *modelClassToRequiresPostProcessingMap;
@property (retain, nonatomic) NSMapTable *inflightPushOperations;
@property (nonatomic, readonly) HMFUnfairLock *propertyLock;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (retain, nonatomic) NSMutableArray *ckOperations;
@property (retain, nonatomic) NAFuture *shutdownFuture;
@property (retain, nonatomic) NAFuture *destroyFuture;
@property (retain, nonatomic) id <HMBCloudZoneRebuilder> rebuilder;
@property (retain) HMBCloudZoneShareModel *shareModel;
@property (nonatomic, readonly) NSOperationQueue *shareOperationQueue;
@property (nonatomic, readonly) NSMutableDictionary *shareParticipantModelsByClientIdentifier;
@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (weak, nonatomic) id <HMBCloudZoneDelegate> delegate;
@property (copy, nonatomic, readonly) HMBCloudZoneConfiguration *configuration;
@property (weak, nonatomic) HMBLocalZone *localZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NAFuture *startUp;

+ (id)logCategory;

- (void)dealloc;
- (id)destroy;
- (id)flush;
- (id)shutdown;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)addCKOperation:(id)arg1;
- (void)rebuild;
- (id)decodeShareModelFromShare:(id)arg1;
- (id)decodeManateeCloudFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id *)arg3;
- (id)encodeRecordFromModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;
- (id)encodeShareModel:(id)arg1;
- (id)encodeManateeCloudModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;
- (id)decodeModelFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id *)arg3;
- (id)encodeRecordFromModel:(id)arg1 externalData:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;
- (id)startUpRebuilderIfNeeded;
- (void)handleLostKeys;
- (void)handleZoneChangedNotification;
- (id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;
- (id)_triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;
- (_Bool)retryCloudKitOperationAfterError:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;
- (id)performCloudPullWithOptions:(id)arg1;
- (void)initializeShareModels;
- (void)handleUpdatedShareParticipantModels:(id)arg1;
- (void)handleUpdatedShareModel:(id)arg1;
- (void)startUpWithLocalZone:(id)arg1;
- (id)initWithCloudDatabase:(id)arg1 configuration:(id)arg2 state:(id)arg3;
- (_Bool)startupWithModelContainer:(id)arg1 error:(id *)arg2;
- (_Bool)isInternalModel:(id)arg1;
- (void)handleUpdatedInternalModels:(id)arg1;
- (void)handleDeletion;
- (id)pushRecordsToUpdate:(id)arg1 recordIDsToRemove:(id)arg2 configuration:(id)arg3 rollbackEnabled:(_Bool)arg4 needsNewInvitationToken:(_Bool)arg5;
- (id)pushRecordsToUpdate:(id)arg1 recordIDsToRemove:(id)arg2 configuration:(id)arg3 rollbackEnabled:(_Bool)arg4;
- (id)cloudMetadataForModel:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (_Bool)populateV4CloudRecord:(id)arg1 withModel:(id)arg2 metadataFieldData:(id)arg3 startEncoding:(unsigned long long)arg4 endEncoding:(unsigned long long)arg5 error:(id *)arg6;
- (id)recordIDForModel:(id)arg1;
- (_Bool)populateManateeCloudRecord:(id)arg1 withModel:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;
- (id)cloudFieldForEncoding:(unsigned long long)arg1;
- (id)fetchRecordWithRecordID:(id)arg1 canRetry:(_Bool)arg2;
- (id)leaveCloudShareRequestingNewInvitationToken:(_Bool)arg1;
- (_Bool)resolveConflicts:(id)arg1 options:(id)arg2;
- (id)performCloudPullWithFetchToken:(id)arg1 options:(id)arg2;
- (id)registerSubscriptionForExternalRecordType:(id)arg1;
- (id)unregisterSubscriptionForExternalRecordType:(id)arg1;
- (id)fetchCompleteModelForRecordID:(id)arg1;
- (id)fetchCompleteModels:(id)arg1 force:(_Bool)arg2;
- (id)fetchCompleteModelsForRecordIDs:(id)arg1;
- (id)fetchCompleteModel:(id)arg1 force:(_Bool)arg2;
- (id)fetchRecordsWithRecordIDs:(id)arg1 desiredKeys:(id)arg2;
- (id)_createShareModel;
- (id)_addShareOperationAfterStartupWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_pushUpdatedShare:(id)arg1;
- (id)_leaveCloudShareRequestingNewInvitationToken:(_Bool)arg1 allowCloudPull:(_Bool)arg2;
- (id)_handleLeaveCloudShareErrorUsingCloudZoneRecordPushResult:(id)arg1;
- (id)_addShareOperationWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)handleUpdatedShare:(id)arg1 error:(id *)arg2;
- (_Bool)handleUpdatedShareParticipantRecord:(id)arg1 error:(id *)arg2;
- (id)createShareModel;
- (id)_pushUpdatedShare:(id)arg1 participantRecord:(id)arg2;
- (id)_pushDeletedParticipantRecordID:(id)arg1;
- (id)participantWithClientIdentifier:(id)arg1;
- (id)_fetchInvitationWithContext:(id)arg1 usingShare:(id)arg2;
- (id)_setWriteAccessEnabled:(_Bool)arg1 forParticipant:(id)arg2 usingShare:(id)arg3;
- (id)_revokeShareForParticipant:(id)arg1 usingShare:(id)arg2;
- (id)fetchOwnerParticipantCloudShareID;
- (id)fetchCurrentParticipantCloudShareID;
- (id)fetchCloudShareIDForShareParticipantClientIdentifier:(id)arg1;
- (id)fetchInvitationWithContext:(id)arg1;
- (id)setWriteAccessEnabled:(_Bool)arg1 forParticipant:(id)arg2;
- (id)revokeShareForParticipant:(id)arg1;

@end
