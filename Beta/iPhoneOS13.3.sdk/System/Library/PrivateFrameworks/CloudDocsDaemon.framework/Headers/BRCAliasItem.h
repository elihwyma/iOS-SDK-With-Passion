/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAppLibrary, BRCClientZone, BRCDirectoryItem, BRCDocumentItem, BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCAliasItem : BRCLocalItem

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) BRCAppLibrary *targetAppLibrary;
@property (nonatomic, readonly) BRCClientZone *targetClientZone;
@property (nonatomic, readonly) BRCItemID *targetItemID;

+ (void)fillStructureRecord:(id)arg1 inZone:(id)arg2 itemID:(id)arg3 ckInfo:(id)arg4 parentID:(id)arg5 targetItemID:(id)arg6 targetZone:(id)arg7 diffs:(unsigned long long)arg8 isFolderShare:(_Bool)arg9 beingDeadInServerTruth:(_Bool)arg10 shouldPCSChainStatus:(unsigned char)arg11;
+ (id)targetReferenceWithItemID:(id)arg1 targetZone:(id)arg2 isFolderShare:(_Bool)arg3;

- (_Bool)isBRAlias;
- (_Bool)changedAtRelativePath:(id)arg1 scanPackage:(_Bool)arg2;
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (void)targetMovedToThisAppLibrary;
- (void)learnTarget:(id)arg1;
- (void)rewriteOrDeleteAliasOnDiskWithTarget:(id)arg1;
- (void)markNeedsUploadOrSyncingUp;
- (void)_removeAliasAndMarkDead;
- (id)targetDocument;
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_deleteFromDB:(id)arg1 keepAliases:(_Bool)arg2;
- (_Bool)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;
- (_Bool)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(_Bool)arg2;
- (void)targetMovedToTrashOrDeleted;
- (id)structureRecordBeingDeadInServerTruth:(_Bool)arg1 stageID:(id)arg2 shouldPCSChainStatus:(unsigned char)arg3;

@end
