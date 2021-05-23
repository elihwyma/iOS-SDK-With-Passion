/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class APSConnection, BRCAccountSession, BRCContainerMetadataSyncPersistedState, BRCDeadlineScheduler, BRCDeadlineSource, BRCFairSource, BRCMigrateZonePCSOperation, BRCSideCarSyncPersistedState, BRCSyncBudgetThrottle, BRCSyncOperationThrottle, BRCZoneHealthSyncPersistedState, NSData, NSDate, NSMutableArray, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BRCContainerScheduler : NSObject

{
    BRCAccountSession *_session;
    BRCDeadlineSource *_containerMetadataSyncSource;
    BRCDeadlineSource *_sharedDatabaseSyncSource;
    BRCDeadlineSource *_zoneHealthSyncSource;
    BRCDeadlineSource *_sideCarSyncSource;
    BRCFairSource *_pushSource;
    NSString *_environmentName;
    NSData *_pushToken;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushQueue;
    BRCContainerMetadataSyncPersistedState *_containerMetadataPersistedState;
    unsigned int _containerMetadataSyncState;
    struct _BRCOperation *_containerMetadataSyncOperation;
    unsigned int _sharedDBSyncState;
    struct _BRCOperation *_sharedDatabaseSyncOperation;
    BRCZoneHealthSyncPersistedState *_zoneHealthPersistedState;
    unsigned int _zoneHealthSyncState;
    struct _BRCOperation *_zoneHealthSyncOperation;
    BRCSideCarSyncPersistedState *_sideCarSyncPersistedState;
    unsigned int _sideCarSyncState;
    struct _BRCOperation *_sideCarSyncOperation;
    BRCSyncOperationThrottle *_sideCarSyncDownThrottle;
    BRCSyncOperationThrottle *_sideCarSyncUpThrottle;
    struct _BRCOperation *_periodicSyncOperation;
    NSDate *_lastPeriodicSyncDate;
    BRCMigrateZonePCSOperation *_migrateZonePCSOperation;
    BRCDeadlineSource *_migrateZonePCSSource;
    _Bool _isInSyncBubble;
    NSMutableArray *_nextZoneHealthSyncDownBarriers;
    NSObject<OS_dispatch_group> *_initialSyncDownGroup;
    NSObject<OS_dispatch_group> *_syncGroup;
    BRCSyncBudgetThrottle *_syncUpBudget;
    BRCDeadlineScheduler *_syncScheduler;
}

@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *initialSyncDownGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *syncGroup;
@property (nonatomic, readonly) BRCSyncBudgetThrottle *syncUpBudget;
@property (nonatomic, readonly) BRCDeadlineScheduler *syncScheduler;
@property (nonatomic, readonly) BRCZoneHealthSyncPersistedState *zoneHealthSyncPersistedState;
@property (nonatomic, readonly) BRCSideCarSyncPersistedState *sideCarSyncPersistedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)close;
- (void)resume;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)setup;
- (void)dumpToContext:(id)arg1 includeAllItems:(_Bool)arg2 db:(id)arg3;
- (void)receivedUpdatedZoneHealthServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (void)finishedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithAccountSession:(id)arg1;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)willInitialSyncDownForClientZone:(id)arg1;
- (void)scheduleSyncDownForSideCarWithGroup:(id)arg1;
- (void)scheduleSyncUpForSideCar;
- (id)_newSyncDeadlineSourceWithName:(id)arg1;
- (void)_syncScheduleForContainersMetadata;
- (void)_syncScheduleForSharedDatabase;
- (void)_syncScheduleForZoneHealth;
- (void)_scheduleCrossZoneMovePCSPrep;
- (void)_syncScheduleForSideCar;
- (void)_updatePushTopicsRegistration;
- (void)schedulePeriodicSyncIfNecessaryInGroup:(id)arg1;
- (void)_unscheduleClientZone:(id)arg1;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)scheduleSyncDownForSharedDatabaseImmediately:(_Bool)arg1;
- (void)syncContextDidBecomeForeground:(id)arg1;
- (void)syncContextDidBecomeBackground:(id)arg1;
- (void)scheduleSyncDownForContainerMetadataWithGroup:(id)arg1;
- (void)scheduleSyncDownForZoneHealthWithGroup:(id)arg1;
- (void)didChangeSyncStatusForZoneHealthForContainer:(id)arg1;
- (void)didInitialSyncDownForClientZone:(id)arg1;
- (void)closeContainers;
- (void)redoZonePCSPreperation;
- (void)receivedUpdatedSideCarServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (void)notifyAfterNextZoneHealthSyncDown:(CDUnknownBlockType)arg1;

@end
