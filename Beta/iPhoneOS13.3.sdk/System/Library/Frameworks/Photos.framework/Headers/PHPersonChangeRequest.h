/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSDictionary, NSManagedObjectID, NSMutableArray, NSMutableSet, NSString, PHObjectPlaceholder, PHPerson, PHRelationshipChangeRequestHelper;

@interface PHPersonChangeRequest

{
    NSMutableArray *_personUUIDsToMerge;
    NSString *_nominalMergeTargetUUID;
    NSMutableSet *_faceUUIDsRequiringFaceCropGeneration;
    NSMutableSet *_rejectedMergeCandidatePersonUUIDs;
    NSMutableSet *_graphDedupePersonUUIDs;
    PHPerson *_targetPerson;
    NSString *_identifier;
    PHRelationshipChangeRequestHelper *_facesHelper;
    PHRelationshipChangeRequestHelper *_keyFaceHelper;
    PHRelationshipChangeRequestHelper *_rejectedFacesHelper;
    PHRelationshipChangeRequestHelper *_mergeCandidatesHelper;
    PHRelationshipChangeRequestHelper *_invalidMergeCandidatesHelper;
}

@property (nonatomic) short keyFacePickSource;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *facesHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyFaceHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *rejectedFacesHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *mergeCandidatesHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *invalidMergeCandidatesHelper;
@property (retain, nonatomic) PHPerson *targetPerson;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedPerson;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long manualOrder;
@property (copy, nonatomic) NSString *personUri;
@property (nonatomic, getter=isInPersonNamingModel) _Bool inPersonNamingModel;
@property (nonatomic, getter=isVerified) _Bool verified;
@property (nonatomic) long long verifiedType;
@property (nonatomic) long long questionType;
@property (nonatomic) unsigned short ageType;
@property (nonatomic) unsigned short genderType;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, getter=isClientEntitled) _Bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly) _Bool isNewRequest;
@property (nonatomic, readonly) CDUnknownBlockType concurrentWorkBlock;
@property (readonly, getter=isMutated) _Bool mutated;

+ (_Bool)canGenerateUUIDWithoutEntitlements;
+ (id)creationRequestForPerson;
+ (id)changeRequestForPerson:(id)arg1;
+ (void)deletePersons:(id)arg1;
+ (id)changeRequestForMergingPersons:(id)arg1;
+ (id)changeRequestForMergingPersons:(id)arg1 nominalTargetIdentifier:(id)arg2;
+ (id)changeRequestsForMergeCandidatePersons:(id)arg1;
+ (id)changeRequestForDedupingGraphPersons:(id)arg1;

- (id)personUUID;
- (void)setPersonUUID:(id)arg1;
- (void)setKeyFace:(id)arg1;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)_existentFaceObjectIDs;
- (void)_prepareKeyFaceHelperIfNeeded;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (void)addFaces:(id)arg1;
- (void)removeFaces:(id)arg1;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (_Bool)_containsUserMutations;
- (_Bool)_hasMutationForVerifiedType:(int *)arg1;
- (_Bool)_shouldPromotePerson:(id)arg1 toVerifiedType:(int *)arg2;
- (id)_existentRejectedFaceObjectIDs;
- (id)_noMinimumFaceCountPersonFetchOptions;
- (id)_existentMergeCandidateObjectIDs;
- (id)_existentInvalidMergeCandidateObjectIDs;
- (id)_mutableRejectedFacesObjectIDsAndUUIDs;
- (id)_mutableMergeCandidateObjectIDsAndUUIDs;
- (id)_mutableInvalidMergeCandidateObjectIDsAndUUIDs;
- (id)_mutableRequiringFaceCropGenerationFacesUUIDs;
- (void)_setKeyFace:(id)arg1 forCluster:(_Bool)arg2 pickSource:(short)arg3;
- (void)setKeyFaceForUserPick:(id)arg1;
- (void)setKeyFaceForUserPick:(id)arg1 forCluster:(_Bool)arg2;
- (void)setKeyFace:(id)arg1 forCluster:(_Bool)arg2;
- (void)addRejectedFaces:(id)arg1 forCluster:(_Bool)arg2;
- (void)addRejectedFaces:(id)arg1;
- (void)removeRejectedFaces:(id)arg1;
- (void)_setNominalMergeTargetUUID:(id)arg1;
- (void)mergePersons:(id)arg1;
- (void)addMergeCandidatePersons:(id)arg1;
- (void)removeMergeCandidatePersons:(id)arg1;
- (void)rejectMergeCandidatePersons:(id)arg1;
- (void)addInvalidMergeCandidatePersons:(id)arg1;
- (void)_setGraphDedupePersons:(id)arg1;

@end
