/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSData, NSManagedObjectID, NSString, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHFaceCropChangeRequest

{
    NSString *_originatingFaceUUID;
    PHRelationshipChangeRequestHelper *_faceHelper;
    PHRelationshipChangeRequestHelper *_personHelper;
}

@property (retain, nonatomic) NSData *resourceData;
@property (copy, nonatomic) NSString *originatingFaceUUID;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *faceHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *personHelper;
@property (nonatomic) short state;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedFaceCrop;
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
+ (id)changeRequestForFaceCrop:(id)arg1;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3;
+ (id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2;
+ (void)deleteFaceCrops:(id)arg1;

- (void)setFace:(id)arg1;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)_prepareFaceHelperIfNeeded;
- (void)_preparePersonHelperIfNeeded;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (id)_mutablePersonObjectIDsAndUUIDs;

@end
