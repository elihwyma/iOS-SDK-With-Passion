/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAliasItem, BRCDocumentItem, NSString;

__attribute__((visibility("hidden")))
@interface BRCDirectoryItem : BRCLocalItem

{
    long long _mtime;
}

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) long long mtime;
@property (nonatomic, readonly) NSString *unsaltedBookmarkData;

- (_Bool)isDirectory;
- (unsigned long long)childItemCount;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (_Bool)possiblyContainsSharedByMeItem;
- (_Bool)possiblyContainsSharedToMeItem;
- (_Bool)changedAtRelativePath:(id)arg1 scanPackage:(_Bool)arg2;
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)hasShareIDAndIsOwnedByMe;
- (_Bool)possiblyContainsSharedItem;
- (_Bool)isShareableItem;
- (id)asShareableItem;
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_deleteFromDB:(id)arg1 keepAliases:(_Bool)arg2;
- (_Bool)hasDeadChildren;
- (_Bool)isDirectoryWithPackageName;
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (_Bool)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (void)markRemovedFromFilesystemForServerEdit:(_Bool)arg1;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (_Bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (void)updateItemMetadataFromServerItem:(id)arg1 appliedSharingPermission:(_Bool)arg2;
- (id)folderRootStructureRecord;
- (_Bool)containsFault;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (_Bool)markChildrenLost;
- (_Bool)hasPendingLostChildren;
- (_Bool)_markChildrenLostForDeadParent;
- (_Bool)hasLostChildren;
- (void)_markLostDirectoryAsAlmostDead;
- (_Bool)_updateRecursiveProperties;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (_Bool)_insertRecursiveProperties;
- (_Bool)containsOverQuotaItems;
- (_Bool)containsPendingDownload;
- (_Bool)containsPendingUploadOrSyncUp;
- (void)transformIntoFSRoot;
- (_Bool)hasLiveChildren;

@end
