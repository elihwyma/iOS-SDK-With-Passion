/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCStagePersistedState, NSMutableDictionary, NSMutableSet, NSString, brc_task_tracker;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCStageRegistry : NSObject

{
    BRCAccountSession *_session;
    NSString *_stageDirectoryPath[7];
    unsigned long long _stageDirectoryFileID[7];
    NSMutableSet *_unflushedStagedFileIDs;
    NSMutableSet *_activeUploadStageIDs;
    NSMutableSet *_activeDownloadStageIDs;
    NSMutableDictionary *_watchedLockedFileIDs;
    NSObject<OS_dispatch_source> *_lockedTestTimer;
    NSObject<OS_dispatch_queue> *_flushingQueue;
    BRCStagePersistedState *_persistedState;
    _Bool _lowDiskSpace;
    NSObject<OS_dispatch_queue> *_queue;
    brc_task_tracker *_tracker;
    _Bool _isCancelled;
    int _deviceID;
}

@property (nonatomic, readonly) int deviceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

+ (unsigned short)computeItemModeFromStatInfo:(id)arg1 isPackage:(_Bool)arg2;
+ (_Bool)applySharingReadonlyACLsToFD:(int)arg1 statInfo:(id)arg2 version:(id)arg3 clientZone:(id)arg4 sharingOptions:(unsigned long long)arg5;
+ (void)migrateStageToVersion2_0WithSession:(id)arg1;

- (void)open;
- (void)close;
- (void)cancel;
- (void)resume;
- (void)willFlushAllStagedFileIDs;
- (id)initWithAccountSession:(id)arg1;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (void)forgetWatchedLockedFileIDsForAppLibrary:(id)arg1;
- (void)cleanupStagedDownloadWithID:(id)arg1 forItemID:(id)arg2;
- (id)createURLForDownloadWithStageID:(id)arg1 name:(id)arg2;
- (void)forgetWatchedLockedFileID:(id)arg1;
- (_Bool)moveFromStageToGraveyard:(unsigned long long)arg1 forItemID:(id)arg2;
- (_Bool)makeSideFaultInStageGatherFileID:(unsigned long long *)arg1 generationID:(unsigned int *)arg2 documentID:(unsigned int *)arg3 properties:(id)arg4 inAppLibrary:(id)arg5 forCreation:(_Bool)arg6 error:(id *)arg7;
- (_Bool)didFlushStagedFileID:(unsigned long long)arg1;
- (_Bool)pendingFetchRecordDirExistsInStageWithStartingChangeToken:(id)arg1 recordZoneID:(id)arg2;
- (id)createURLForUploadWithStageID:(id)arg1 name:(id)arg2;
- (void)associateSyncUpStageID:(id)arg1 withOperation:(id)arg2;
- (_Bool)moveFromStage:(unsigned long long)arg1 toPath:(id)arg2 fileName:(id)arg3 error:(id *)arg4;
- (_Bool)copyPackageFileWithPackageFd:(int)arg1 toStageFd:(int)arg2 relpath:(id)arg3;
- (int)_performInStageDirectory:(unsigned char)arg1 block:(CDUnknownBlockType)arg2;
- (void)_fileIDMightHaveBeenUnlocked:(id)arg1;
- (int)_openStageDirectory:(unsigned char)arg1;
- (id)nonLocalFaultURLForAdditionName:(id)arg1;
- (void)applyMetadataOnFileDescriptor:(int)arg1 liveFileDescriptor:(int)arg2 itemID:(id)arg3 clientZone:(id)arg4 statInfo:(id)arg5 version:(id)arg6 sharingOptions:(unsigned long long)arg7;
- (void)_watchLockedRelpath:(id)arg1;
- (id)_pathInStage:(unsigned long long)arg1 index:(unsigned char *)arg2 generationID:(unsigned int *)arg3;
- (_Bool)_flockToMakeLiveAtPath:(id)arg1 error:(id *)arg2;
- (void)cleanupStagedSyncUpWithID:(id)arg1;
- (id)_anchorNameForChangeToken:(id)arg1 recordZoneID:(id)arg2;
- (_Bool)_graveyardAt:(int)arg1 path:(id)arg2 forItemID:(id)arg3;
- (long long)garbageCollectSpace:(long long)arg1;
- (long long)purgeGraveyardSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (void)garbageCollectPackages;
- (void)_updatePersistedStateWithLatestGCStartTime:(long long)arg1;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(_Bool)arg2;
- (_Bool)makeDirectoryInStageGatherFileID:(unsigned long long *)arg1 generationID:(unsigned int *)arg2 error:(id *)arg3;
- (_Bool)makeSymlinkWithTarget:(id)arg1 inStageGatherFileID:(unsigned long long *)arg2 generationID:(unsigned int *)arg3 error:(id *)arg4;
- (id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg1 clientZone:(id)arg2 statInfo:(id)arg3 version:(id)arg4 sharingOptions:(unsigned long long)arg5 error:(id *)arg6;
- (_Bool)makeItemLive:(id)arg1 fromStage:(unsigned long long)arg2 bySwappingWith:(id)arg3 fileName:(id)arg4 error:(id *)arg5;
- (id)makePendingFetchRecordDirWithStartingChangeToken:(id)arg1 recordZoneID:(id)arg2;
- (void)cleanupStagedUploadWithID:(id)arg1;
- (void)associateDownloadStageID:(id)arg1 withOperation:(id)arg2;
- (_Bool)rememberStagedDownloadWithID:(id)arg1 gatherFileID:(unsigned long long *)arg2 generationID:(unsigned int *)arg3 documentID:(unsigned int *)arg4 appLibrary:(id)arg5 error:(id *)arg6;
- (_Bool)moveOldVersionFromPath:(id)arg1 error:(id *)arg2;
- (_Bool)moveToGraveyardFromPath:(id)arg1 forItemID:(id)arg2 error:(id *)arg3;
- (_Bool)existsInStage:(unsigned long long)arg1 generationID:(unsigned int *)arg2;
- (_Bool)existsInOldVersionStageOrGraveyard:(unsigned long long)arg1;
- (_Bool)transferDocumentID:(unsigned int)arg1 fromOldVersionStage:(unsigned long long)arg2 toStage:(unsigned long long)arg3;
- (long long)purgableSpace;
- (void)disarmLockedTestTimer;

@end
