/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAliasItem, BRCDesiredVersion, BRCDirectoryItem, BRCLocalVersion, NSData, NSDictionary, NSError, NSMutableSet, NSSet, NSString;

@interface BRCDocumentItem : BRCLocalItem

{
    BRCLocalVersion *_currentVersion;
    BRCDesiredVersion *_desiredVersion;
    NSMutableSet *_liveConflictLoserEtags;
    NSMutableSet *_resolvedConflictLoserEtags;
    _Bool _shouldAutomaticallyDownloadThumbnail;
    NSData *_liveThumbnailSignature;
}

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) _Bool hasLocalContent;
@property (nonatomic, readonly) _Bool isEvictable;
@property (nonatomic, readonly) _Bool isAutomaticallyEvictable;
@property (nonatomic, readonly) _Bool isVisibleIniCloudDrive;
@property (nonatomic, readonly) _Bool isDownloadRequested;
@property (nonatomic, readonly) _Bool isDownloadRequestedForThumbnail;
@property (nonatomic, readonly) _Bool shouldBeGreedy;
@property (nonatomic, readonly) _Bool shouldHaveThumbnail;
@property (nonatomic, readonly) _Bool shouldTransferThumbnail;
@property (nonatomic, readonly) unsigned int queryItemStatus;
@property (nonatomic, readonly) unsigned int downloadStatus;
@property (nonatomic, readonly) BRCLocalVersion *currentVersion;
@property (nonatomic, readonly) BRCDesiredVersion *desiredVersion;
@property (nonatomic, readonly) NSError *uploadError;
@property (retain, nonatomic) NSSet *liveConflictLoserEtags;
@property (nonatomic, readonly) NSSet *resolvedConflictLoserEtags;
@property (nonatomic, readonly) NSDictionary *conflictLoserState;
@property (nonatomic, readonly) _Bool shouldAutomaticallyDownloadThumbnail;
@property (retain, nonatomic) NSData *liveThumbnailSignature;
@property (nonatomic, readonly) NSString *unsaltedBookmarkData;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isDocumentAutomaticallyEvictableWithExtension:(id)arg1;
+ (_Bool)isDocumentAutomaticallyEvictableWithName:(id)arg1;
+ (struct PQLResultSet *)reverseAliasEnumeratorWithUnsaltedBookmarkData:(id)arg1 session:(id)arg2;
+ (id)anyReverseAliasWithUnsaltedBookmarkData:(id)arg1 inAppLibrary:(id)arg2;
+ (struct PQLResultSet *)reverseAliasEnumeratorWithRelativePath:(id)arg1;
+ (id)anyReverseAliasInAppLibrary:(id)arg1 toRelativePath:(id)arg2;

- (_Bool)isFault;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isPackage;
- (void)markDead;
- (_Bool)isDocument;
- (id)descriptionWithContext:(id)arg1;
- (_Bool)markLatestSyncRequestAcknowledgedInZone:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (_Bool)changedAtRelativePath:(id)arg1 scanPackage:(_Bool)arg2;
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (struct PQLResultSet *)reverseAliasEnumerator;
- (_Bool)hasShareIDAndIsOwnedByMe;
- (_Bool)isShareableItem;
- (id)asShareableItem;
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)aliasItemID;
- (void)learnItemID:(id)arg1 ownerKey:(id)arg2 sharingOptions:(unsigned long long)arg3 path:(id)arg4 markLost:(_Bool)arg5;
- (void)markNeedsUploadOrSyncingUp;
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_deleteFromDB:(id)arg1 keepAliases:(_Bool)arg2;
- (_Bool)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;
- (id)anyReverseAliasInAppLibrary:(id)arg1;
- (id)syncContextUsedForTransfers;
- (void)handleUnknownItemError;
- (void)learnThumbnailSignatureFromLiveVersion:(id)arg1;
- (void)stageFaultForCreation:(_Bool)arg1 name:(id)arg2 size:(id)arg3 isPackage:(_Bool)arg4;
- (void)markItemForgottenByServer;
- (void)markForceNeedsSyncUp;
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (_Bool)_isInterestingUpdateForNotifs;
- (id)setOfAppLibraryIDsWithReverseAliases;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (_Bool)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (void)markForceUpload;
- (void)updateVersionMetadataFromServerItem:(id)arg1 preventVersionDiffs:(_Bool)arg2;
- (void)markNeedsReading;
- (void)clearFromStage;
- (_Bool)validateLoggingToFile:(struct __sFILE *)arg1;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (_Bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;
- (void)markLiveFromStageWithPath:(id)arg1;
- (id)contentsRecordID;
- (id)_filenameOverrideForPath:(id)arg1;
- (void)_updateLiveConflictLoserFromFSAtPath:(id)arg1;
- (int)updateDesiredVersionWithServerItem:(id)arg1 diffs:(unsigned long long)arg2 options:(unsigned int)arg3 needsSave:(_Bool *)arg4;
- (void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg1;
- (void)stageFaultForCreation:(_Bool)arg1 serverItem:(id)arg2;
- (void)removeLiveConflictLoserEtag:(id)arg1;
- (void)addResolvedConflictLoserEtag:(id)arg1;
- (void)clearVersionSignatures:(unsigned long long)arg1 isPackage:(_Bool)arg2;
- (void)_updateReadThrottleIfNeededForRowID:(unsigned long long)arg1 forCreation:(_Bool)arg2;
- (void)_updateRecursivePropertiesInDB:(id)arg1 dbRowID:(unsigned long long)arg2 diffs:(unsigned long long)arg3;
- (_Bool)_nukePackageItemsFromDB:(id)arg1;
- (void)_updateUploadJobIfNeededWithDiffs:(unsigned long long)arg1;
- (_Bool)_needsSyncBubbleRecomputeForError:(id)arg1 origError:(id)arg2;
- (int)updateDesiredVersionWithServerItem:(id)arg1 options:(unsigned int)arg2 needsSave:(_Bool *)arg3;
- (void)clearDesiredVersion;
- (void)forceiWorkConflictEtag:(id)arg1;
- (void)forceVersionConflictByClearkingCKInfo;
- (void)forceiWorkSharingInfoResend;
- (void)appDidResolveConflictLoserWithEtag:(id)arg1;
- (void)markUploadedWithRecord:(id)arg1;
- (void)markOverQuotaWithError:(id)arg1;
- (_Bool)contentRecordNeedsForceAllFieldsWhenDeadInServerTruth:(_Bool)arg1;
- (id)baseContentsRecord;

@end
