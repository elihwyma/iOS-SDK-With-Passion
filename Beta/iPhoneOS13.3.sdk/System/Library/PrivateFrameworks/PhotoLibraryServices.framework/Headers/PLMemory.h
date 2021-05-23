/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSData, NSDate, NSDictionary, NSSet, NSString, PLManagedAsset;

@interface PLMemory : PLManagedObject <Swift>

{
    _Bool _needsPersistenceUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *keyAssetUUID;
@property (nonatomic, readonly) NSDate *keyAssetCreationDate;
@property (nonatomic, readonly) NSDate *searchableStartDate;
@property (nonatomic, readonly) NSDate *searchableEndDate;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic) _Bool needsPersistenceUpdate;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) short category;
@property (nonatomic) short subcategory;
@property (nonatomic) _Bool rejected;
@property (nonatomic) _Bool favorite;
@property (nonatomic) _Bool pending;
@property (nonatomic) _Bool userCreated;
@property (retain, nonatomic) NSDictionary *movieAssetState;
@property (retain, nonatomic) NSData *movieData;
@property (nonatomic) long long photosGraphVersion;
@property (retain, nonatomic) NSData *photosGraphData;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (nonatomic) double score;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (retain, nonatomic) NSDate *lastViewedDate;
@property (retain, nonatomic) NSDate *lastMoviePlayedDate;
@property (retain, nonatomic) NSData *assetListPredicate;
@property (retain, nonatomic) NSSet *representativeAssets;
@property (retain, nonatomic) NSSet *curatedAssets;
@property (retain, nonatomic) NSSet *extendedCuratedAssets;
@property (retain, nonatomic) NSSet *movieCuratedAssets;
@property (nonatomic) short notificationState;
@property (retain, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (id)baseSearchIndexPredicate;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(_Bool)arg2;
+ (_Bool)indexTitleForMemoryCategory:(unsigned long long)arg1;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 creationDate:(id)arg5;
+ (id)memoriesToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (_Bool)_shouldPrefetchMemoryMovieCuratedAssetsInPhotoLibrary:(id)arg1;
+ (id)memoriesToPrefetchInPhotoLibrary:(id)arg1;
+ (id)memoryWithUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)memoriesWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)_memoriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4;
+ (void)deletePendingMemoriesCreatedBefore:(id)arg1 inPhotoLibrary:(id)arg2;
+ (void)deleteMemoriesWithObjectIDs:(id)arg1 inPhotoLibrary:(id)arg2;

- (void)delete;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (_Bool)isValidForPersistence;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (_Bool)validForPersistenceChangedForChangedKeys:(id)arg1;
- (id)searchIndexContents;
- (unsigned long long)searchIndexCategory;
- (id)momentShare;
- (id)cplFullRecord;
- (void)updateWithCPLMemoryChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)calculateKeyAsset;
- (id)cplMemoryChange;

@end
