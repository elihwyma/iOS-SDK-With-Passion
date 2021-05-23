/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString, PLDetectedFace, PLDetectedFaceGroup;

@interface PLPerson : PLManagedObject <Swift>

@property (nonatomic) int verifiedType;
@property (nonatomic) int cloudVerifiedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) id localID;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSString *fullName;
@property (nonatomic, readonly) _Bool userVerified;
@property (nonatomic, readonly) _Bool graphVerified;
@property (nonatomic, readonly) _Bool isTombstone;
@property (nonatomic, readonly) _Bool keyFaceIsPicked;
@property (retain, nonatomic) PLDetectedFace *keyFace;
@property (nonatomic) int verifiedType;
@property (nonatomic) int cloudVerifiedType;
@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSSet *personReferences;
@property (retain, nonatomic) NSSet *detectedFaces;
@property (nonatomic) short keyFacePickSource;
@property (retain, nonatomic) NSSet *rejectedFaces;
@property (retain, nonatomic) NSSet *rejectedFacesNeedingFaceCrops;
@property (retain, nonatomic) NSSet *clusterRejectedFaces;
@property (retain, nonatomic) NSSet *faceCrops;
@property (nonatomic) int type;
@property (nonatomic) unsigned int manualOrder;
@property (retain, nonatomic) NSString *personUri;
@property (nonatomic) _Bool inPersonNamingModel;
@property (nonatomic, readonly) int faceCount;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (retain, nonatomic) PLDetectedFaceGroup *associatedFaceGroup;
@property (retain, nonatomic) NSDictionary *contactMatchingDictionary;
@property (nonatomic) short questionType;
@property (nonatomic) unsigned short genderType;
@property (nonatomic) unsigned short ageType;
@property (retain, nonatomic) NSSet *mergeCandidates;
@property (retain, nonatomic) NSSet *invalidMergeCandidates;
@property (retain, nonatomic) PLPerson *mergeTargetPerson;
@property (retain, nonatomic) NSSet *mergeSourcePersons;
@property (nonatomic) int effectiveVerifiedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)listOfSyncedProperties;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(_Bool)arg2;
+ (void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(CDUnknownBlockType)arg3;
+ (id)listOfPropertiesToResetAgeAndGender;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1;
+ (id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verifiedType:(int)arg4;
+ (id)insertIntoManagedObjectContext:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verifiedType:(int)arg4;
+ (id)personsMatchingPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 sortDescriptors:(id)arg3 relationshipKeyPathsForPrefetching:(id)arg4 inManagedObjectContext:(id)arg5;
+ (id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allPersonsInManagedObjectContext:(id)arg1;
+ (id)personsWithPersonUri:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)personsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)_batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (void)batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 inManagedObjectContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 error:(id *)arg4;
+ (void)batchFetchAssociatedPersonByFaceGroupUUIDWithFaceGroupUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)fullNameFromContact:(id)arg1;
+ (id)displayNameFromContact:(id)arg1;
+ (id)_stringFromContact:(id)arg1 preferGivenName:(_Bool)arg2;
+ (id)predicateForPersonsNeedingFaceCropGenerationForFaceObjectID:(id)arg1;
+ (id)predicateForVisibleKeyFace;
+ (id)predicateForPersistence;
+ (_Bool)resetAllInLibrary:(id)arg1 error:(id *)arg2;
+ (id)fetchFinalMergeTargetPersonForPersonWithUUID:(id)arg1 context:(id)arg2 predicate:(id)arg3;
+ (id)_predicateForSupportedVerifiedTypesForUpload;
+ (id)personsToUploadInManagedObjectContext:(id)arg1 limit:(long long)arg2;
+ (id)personsToPrefetchInManagedObjectContext:(id)arg1;
+ (_Bool)person:(id)arg1 isBetterMergeTargetThanPerson:(id)arg2;

- (void)prepareForDeletion;
- (void)willSave;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)debugLogDescription;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (_Bool)isValidForPersistence;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (void)refreshFaces;
- (_Bool)validForPersistenceChangedForChangedKeys:(id)arg1;
- (id)momentShare;
- (id)cplFullRecord;
- (id)syncDescription;
- (_Bool)shouldIndexForSearch;
- (id)mutableFaces;
- (id)mutableRejectedFaces;
- (id)mutableRejectedFacesNeedingFaceCrops;
- (id)mutableFaceCrops;
- (id)mutableMergeCandidates;
- (id)mutableInvalidMergeCandidates;
- (void)setKeyFace:(id)arg1 pickSource:(short)arg2;
- (id)faceGroupDescription;
- (void)resetAllFacesToDefault;
- (void)rejectFaceIfPossible:(id)arg1 shouldCreateFaceCrop:(_Bool)arg2;
- (void)_refreshRelationshipForKey:(id)arg1;
- (void)refreshRejectedFaces;
- (void)refreshFaceCrops;
- (void)refereshMergeCandidates;
- (void)refreshInvalidMergeCandidates;
- (id)_nameRelatedMetadataKeys;
- (id)pickOptimalStateForUserInitiatedMergeWithPersons:(id)arg1 nominalTarget:(id)arg2;
- (id)reverseOrderedMergeTargetPersons;
- (void)prepareForUserInitiatedMergeWithPersons:(id)arg1;
- (id)pickKeyFaceOptimalStateForContactDedupeWithPersons:(id)arg1;
- (id)finalMergeTargetPerson;
- (void)_basicMergePersons:(id)arg1;
- (void)basicMergePersons:(id)arg1;
- (void)mergePersons:(id)arg1 withOptimalState:(id)arg2;
- (_Bool)dedupeGraphPersons:(id)arg1 error:(id *)arg2;
- (void)setKeyFaceToPicked;
- (id)cplPersonChange;
- (void)setCPLSyncedMergeTarget:(id)arg1;

@end
