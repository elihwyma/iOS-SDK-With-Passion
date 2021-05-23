/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCAccountSession, BRCClientZone, BRCPQLConnection, BRCPendingChangesStream, BRCServerChangeState, BRCSyncContext, BRCZoneRowID, BRMangledID, CKRecordZoneID, NSMutableDictionary, NSString;

@interface BRCServerZone : NSObject <Swift>

{
    BRCServerChangeState *_changeState;
    BRCAccountSession *_session;
    BRCPQLConnection *_db;
    NSString *_zoneName;
    BRCZoneRowID *_dbRowID;
    BRCClientZone *_clientZone;
    unsigned int _state;
    BRCSyncContext *_syncContext;
    BRCSyncContext *_metadataSyncContext;
    _Bool _needsSave;
    BRCPendingChangesStream *_pendingChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) BRCServerChangeState *changeState;
@property (nonatomic, readonly) BRCClientZone *clientZone;
@property (retain, nonatomic) BRCAccountSession *session;
@property (nonatomic, readonly) NSString *zoneName;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (nonatomic, readonly) BRCSyncContext *metadataSyncContext;
@property (nonatomic, readonly) BRCSyncContext *metadataSyncContextIfExists;
@property (nonatomic, readonly) BRMangledID *mangledID;
@property (nonatomic, readonly) BRCPendingChangesStream *pendingChanges;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) _Bool isCloudDocsZone;
@property (nonatomic) _Bool needsSave;
@property (retain, nonatomic) BRCZoneRowID *dbRowID;
@property (nonatomic, readonly) _Bool isSharedZone;
@property (nonatomic, readonly) _Bool isPrivateZone;
@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, readonly) NSMutableDictionary *plist;

- (_Bool)isEqual:(id)arg1;
- (id)asSharedZone;
- (id)descriptionWithContext:(id)arg1;
- (_Bool)allocateRanksWhenCaughtUp:(_Bool)arg1;
- (id)syncContext;
- (id)itemByItemID:(id)arg1 db:(id)arg2;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;
- (_Bool)dumpStatusToContext:(id)arg1 error:(id *)arg2;
- (_Bool)dumpTablesToContext:(id)arg1 includeAllItems:(_Bool)arg2 error:(id *)arg3;
- (id)itemByItemID:(id)arg1;
- (id)matchingJobsWhereSQLClause;
- (id)jobsDescription;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)removeForegroundClient:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (_Bool)setStateBits:(unsigned int)arg1;
- (void)clearStateBits:(unsigned int)arg1;
- (_Bool)resetServerTruth;
- (void)destroyPendingChangesDBOnQueue:(_Bool)arg1;
- (void)deleteAllContentsOnServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)forceMoveToCloudDocs;
- (void)scheduleMoveToCloudDocs;
- (_Bool)serverZoneIsCreated;
- (_Bool)shouldRecreateServerZoneAfterError:(id)arg1;
- (_Bool)_saveItemID:(id)arg1 stat:(id)arg2 serverMetrics:(id)arg3 record:(id)arg4 origName:(id)arg5 base:(id)arg6 no:(id)arg7 ext:(id)arg8;
- (_Bool)_saveItemID:(id)arg1 stat:(id)arg2 serverMetrics:(id)arg3 record:(id)arg4 error:(id *)arg5;
- (_Bool)_saveItemID:(id)arg1 version:(id)arg2 record:(id)arg3 iWorkSharingOptions:(unsigned long long)arg4;
- (_Bool)_saveEditedDirOrDocStructureRecord:(id)arg1 error:(id *)arg2;
- (_Bool)_saveEditedAliasRecord:(id)arg1 zonesNeedingAllocRanks:(id)arg2 error:(id *)arg3;
- (_Bool)_saveEditedSymlinkRecord:(id)arg1 error:(id *)arg2;
- (_Bool)_saveEditedFinderBookmarkRecord:(id)arg1 error:(id *)arg2;
- (_Bool)_saveEditedDocumentContentRecord:(id)arg1 error:(id *)arg2;
- (_Bool)_saveEditedShareRecord:(id)arg1 error:(id *)arg2;
- (_Bool)_saveEditedRecord:(id)arg1 zonesNeedingAllocRanks:(id)arg2 error:(id *)arg3;
- (void)_reportCantSaveProblem:(id)arg1 record:(id)arg2;
- (_Bool)_markItemDeadForRecordID:(id)arg1;
- (_Bool)_markShareIDDead:(id)arg1;
- (void)handleBrokenStructure;
- (id)_structurePrefixForType:(BOOL)arg1;
- (unsigned long long)_saveInconsistentStateWithRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 deletedShareRecordIDs:(id)arg5 syncStatus:(long long)arg6;
- (_Bool)_savePendingChangesEditedStructureRecordsIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (_Bool)_savePendingChangesDeletedRecordIDsIgnoringRecordIDs:(id)arg1;
- (_Bool)_saveEditedStructureRecords:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (_Bool)_saveDeletedRecordIDs:(id)arg1;
- (_Bool)_savePendingChangesEditedContentRecordsIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (_Bool)_saveEditedContentRecords:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (_Bool)_savePendingChangesSharesIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (_Bool)_saveEditedShareRecords:(id)arg1 deletedShareRecordIDs:(id)arg2 zonesNeedingAllocRanks:(id)arg3;
- (void)_collectTombstoneForRank:(unsigned long long)arg1;
- (_Bool)resetServerTruthAndDestroyZone:(_Bool)arg1;
- (id)asPrivateZone;
- (void)activateWithClientZone:(id)arg1 offline:(_Bool)arg2;
- (void)deactivateFromClientZone;
- (_Bool)hasXattrWithSignature:(id)arg1;
- (_Bool)storeXattr:(id)arg1;
- (id)xattrForSignature:(id)arg1;
- (unsigned long long)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 deletedShareRecordIDs:(id)arg5 movedZoneNames:(id)arg6 allocRankZones:(id *)arg7 syncStatus:(long long)arg8 savedDirectly:(_Bool *)arg9;
- (void)collectTombstoneRanks:(id)arg1;
- (id)deleteAllContentsOperation;
- (void)saveQueryRecords:(id)arg1;
- (struct PQLResultSet *)itemsEnumeratorWithDB:(id)arg1;
- (struct PQLResultSet *)directDirectoryChildItemIDsOfParentEnumerator:(id)arg1;

@end
