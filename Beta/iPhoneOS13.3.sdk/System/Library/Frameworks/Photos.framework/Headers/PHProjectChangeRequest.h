/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSData, NSManagedObjectID, NSString, PHProject, PHRelationshipChangeRequestHelper;

@interface PHProjectChangeRequest

{
    PHProject *_originalProject;
    NSData *_previewImageData;
    _Bool _didSetPreviewImage;
    PHRelationshipChangeRequestHelper *_assetsHelper;
    PHRelationshipChangeRequestHelper *_keyAssetHelper;
}

@property (retain, nonatomic) NSString *projectDocumentType;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *assetsHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyAssetHelper;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSData *projectExtensionData;
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
+ (id)creationRequestForProjectWithDocumentType:(id)arg1 projectExtensionIdentifier:(id)arg2;
+ (id)creationRequestForProjectWithDocumentType:(id)arg1 projectExtensionIdentifier:(id)arg2 assets:(id)arg3 title:(id)arg4;
+ (id)creationRequestForProjectCopyFromProject:(id)arg1;
+ (void)_deleteProjects:(id)arg1 withOperation:(long long)arg2;
+ (void)deleteProjects:(id)arg1;
+ (void)undeleteProjects:(id)arg1;
+ (void)expungeProjects:(id)arg1;

- (id)uuid;
- (void)setAssets:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)setProjectRenderUuid:(id)arg1;
- (void)setProjectExtensionIdentifier:(id)arg1;
- (void)setProjectData:(id)arg1;
- (id)projectRenderUuid;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)projectData;
- (id)projectExtensionIdentifier;
- (void)didMutate;
- (void)_prepareAssetIDsIfNeeded;
- (id)initWithProject:(id)arg1;
- (void)_setOriginalProject:(id)arg1;
- (void)setProjectPreviewImage:(id)arg1;
- (id)placeholderForCreatedProject;
- (void)_prepareKeyAssetIDIfNeeded;
- (void)addAssets:(id)arg1;
- (void)removeAssets:(id)arg1;
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;

@end
