/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLGenericAlbum.h>

@class NSOrderedSet, NSString;

@interface PLImportSession : PLGenericAlbum

{
    _Bool _needsPersistenceUpdate;
    _Bool _albumShouldBeAutomaticallyDeleted;
}

@property (nonatomic) _Bool needsPersistenceUpdate;
@property (nonatomic) _Bool albumShouldBeAutomaticallyDeleted;
@property (retain, nonatomic) NSOrderedSet *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)entityName;
+ (id)validKindsForPersistence;
+ (id)insertNewImportSessionAlbumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2;

- (unsigned long long)count;
- (_Bool)isEmpty;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (id)payloadForChangedKeys:(id)arg1;
- (id)mutableAssets;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (_Bool)isValidForPersistence;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (void)_updateStartDate:(id)arg1;
- (void)_updateEndDate:(id)arg1;
- (void)revalidateImportDates;
- (void)updateImportDatesFromAddedAsset:(id)arg1;
- (_Bool)_isAssetIncludedInImportDates:(id)arg1;
- (_Bool)_isDateBeforeStartDate:(id)arg1;
- (_Bool)_isDateAfterEndDate:(id)arg1;
- (id)batchedAssets;
- (_Bool)validateImportSessionID:(id *)arg1 error:(id *)arg2;
- (_Bool)validForPersistenceChangedForChangedKeys:(id)arg1;

@end
