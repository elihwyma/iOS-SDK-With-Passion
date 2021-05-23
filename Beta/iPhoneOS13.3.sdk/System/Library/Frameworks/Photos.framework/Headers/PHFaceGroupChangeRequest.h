/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString, PHFaceGroup, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHFaceGroupChangeRequest

{
    PHFaceGroup *_originalFaceGroup;
    PHRelationshipChangeRequestHelper *_facesHelper;
    PHRelationshipChangeRequestHelper *_keyFaceHelper;
}

@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *facesHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyFaceHelper;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedFaceGroup;
@property (nonatomic) long long unnamedFaceCount;
@property (nonatomic) long long personBuilderState;
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
+ (id)creationRequestForFaceGroup;
+ (id)changeRequestForFaceGroup:(id)arg1;
+ (void)deleteFaceGroups:(id)arg1;

- (void)setKeyFace:(id)arg1;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)_prefetchFacesAndPersonRelationship:(id)arg1 inContext:(id)arg2;
- (id)_existentFaceObjectIDs;
- (void)_prepareKeyFaceHelperIfNeeded;
- (void)_prepareFacesHelperIfNeeded;
- (id)_mutableObjectIDsAndUUIDs;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (void)addFaces:(id)arg1;
- (void)removeFaces:(id)arg1;
- (void)_setOriginalFaceGroup:(id)arg1;

@end
