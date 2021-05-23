/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCClientZone.h>

@class BRCAppLibrary, BRCPrivateServerZone, BRCProblemReport, BRCServerZoneHealthState, NSMapTable, NSMutableArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface BRCPrivateClientZone : BRCClientZone

{
    NSMutableArray *_syncBarriers;
    BRCServerZoneHealthState *_zoneHealthState;
    BRCProblemReport *_problemReport;
    NSMutableArray *_faultsLiveBarriers;
    NSMutableSet *_appLibraries;
    BRCAppLibrary *_defaultAppLibrary;
    NSMapTable *_pcsChainFolderOperations;
}

@property (nonatomic, readonly) _Bool isSharedZone;
@property (nonatomic, readonly) _Bool isPrivateZone;
@property (nonatomic, readonly) _Bool isDocumentScopePublic;
@property (nonatomic, readonly) BRCPrivateServerZone *privateServerZone;
@property (nonatomic, readonly) _Bool hasDefaultAppLibrary;
@property (nonatomic, readonly) BRCAppLibrary *defaultAppLibrary;
@property (nonatomic, readonly) NSSet *appLibraries;
@property (nonatomic, readonly) NSSet *appLibraryIDs;
@property (nonatomic, readonly) _Bool zoneHealthNeedsSyncUp;
@property (nonatomic, readonly) BRCServerZoneHealthState *zoneHealthState;

- (void)resume;
- (id)plist;
- (struct BRCDirectoryItem *)fetchZoneRootItemInDB:(id)arg1;
- (id)asPrivateClientZone;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(_Bool)arg6;
- (_Bool)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(_Bool)arg2 error:(id *)arg3;
- (_Bool)dumpTablesToContext:(id)arg1 includeAllItems:(_Bool)arg2 error:(id *)arg3;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (void)syncedDownZoneHealthState:(id)arg1;
- (void)zoneHealthWasReset;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (id)rootItemID;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (void)addAppLibrary:(id)arg1;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (void)clearProblemReport;
- (void)syncedDownZoneHealthRequestID:(long long)arg1;
- (void)reportProblemWithType:(int)arg1 recordName:(id)arg2;
- (_Bool)recomputeAppSyncBlockState;
- (unsigned int)pcsChainStateForItem:(id)arg1;
- (void)setServerZone:(id)arg1;
- (void)removeAppLibrary:(id)arg1;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(_Bool *)arg4;
- (void)registerPCSChainingOperation:(id)arg1;
- (id)pcsChainOperationForItemID:(id)arg1;
- (id)prepareProblemReportForSyncWithRequestID:(long long)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (_Bool)removeSyncDownForAliasData:(id)arg1;
- (_Bool)parentIDHasLiveUnchainedChildren:(id)arg1;
- (struct PQLResultSet *)unchainedItemInfoInServerTruthEnumeratorParentedTo:(id)arg1;

@end
