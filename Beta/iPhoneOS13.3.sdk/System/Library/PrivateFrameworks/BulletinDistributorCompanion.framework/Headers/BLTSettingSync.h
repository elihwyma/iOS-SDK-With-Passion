/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/BLTSettingSyncInternal.h>

@class BLTSectionInfoList, BLTSectionInfoListBridgeProvider, BLTSectionInfoSyncCoordinator, BLTSettingSyncSendQueue, BLTSiriActionAppList, BLTWatchKitAppList, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface BLTSettingSync : BLTSettingSyncInternal

{
    BLTSectionInfoList *_sectionInfoList;
    BLTSettingSyncSendQueue *_settingSendQueue;
    unsigned long long _settingSyncSendQueueMaxConcurrentSendCount;
    BLTSectionInfoSyncCoordinator *_sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> *_sectionInfoSyncCoordinatorQueue;
    _Bool _initialSyncPerformed;
    BLTSectionInfoListBridgeProvider *_bridgeProvider;
    NSMutableDictionary *_reloadBBCompletions;
    BLTSiriActionAppList *_siriActionAppList;
    BLTWatchKitAppList *_watchKitAppList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)sendRemoveSectionWithSectionID:(id)arg1 sent:(CDUnknownBlockType)arg2;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)siriActionAppListUpdated:(id)arg1;
- (void)sectionConfiguration:(id)arg1 addedSectionIDs:(id)arg2 removedSectionIDs:(id)arg3;
- (void)sendAllSectionInfoWithSpool:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearSectionInfoSentCache;
- (id)settingOverrides;
- (id)originalSettings;
- (id)overriddenSettings;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3 fromRemote:(_Bool)arg4;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)setSectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)sectionInfoList:(id)arg1 override:(id)arg2 shouldApplyToSectionInfoForSectionID:(id)arg3;
- (_Bool)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)arg1;
- (void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2;
- (void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2;
- (id)settingsDescriptionForSectionIDs:(id)arg1;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2 watchKitAppList:(id)arg3;
- (void)sendSectionInfosWithSectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2 spoolToFile:(_Bool)arg3;
- (_Bool)isSectionInfoSentCacheEmpty;
- (void)performInitialSyncWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAllSyncComplete;
- (unsigned long long)performSyncIfNeededForSectionID:(id)arg1 gizmoSectionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (void)_spoolInitialSync;
- (void)_logNotificationSettings;
- (unsigned long long)_fetchSyncState;
- (void)_storeSyncState:(unsigned long long)arg1;
- (unsigned long long)_fetchSettingSyncMaxCountOverride;
- (void)_updateAllBBSectionsWithCompletion:(CDUnknownBlockType)arg1 withProgress:(CDUnknownBlockType)arg2 spoolToFile:(_Bool)arg3;
- (void)_sendSpooledSyncWithCompletion:(CDUnknownBlockType)arg1 withProgress:(CDUnknownBlockType)arg2;
- (void)_setupSectionInfoListWithCompletion:(CDUnknownBlockType)arg1;
- (void)_addReloadBBCompletion:(CDUnknownBlockType)arg1 sectionID:(id)arg2;
- (void)_callAndRemoveReloadBBCompletion:(CDUnknownBlockType)arg1 sectionID:(id)arg2;
- (id)_filteredAlertingSectionIDs:(id)arg1;
- (void)_sendSiriAppListWithInstalled:(struct NSDictionary *)arg1 removed:(id)arg2;
- (void)sendOverrideOnly:(id)arg1 sectionID:(id)arg2 spoolToFile:(_Bool)arg3;
- (void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(_Bool)arg3 spoolToFile:(_Bool)arg4 andCompletion:(CDUnknownBlockType)arg5;
- (void)_callReloadBBCompletionsForSectionID:(id)arg1;

@end
