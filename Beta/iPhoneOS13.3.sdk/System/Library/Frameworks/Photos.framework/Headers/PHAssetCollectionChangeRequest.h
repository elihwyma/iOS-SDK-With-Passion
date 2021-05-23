/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString, PHAssetCollection, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHAssetCollectionChangeRequest

{
    PHAssetCollection *_originalAssetCollection;
    PHRelationshipChangeRequestHelper *_assetsHelper;
    PHRelationshipChangeRequestHelper *_customKeyAssetHelper;
}

@property (retain, nonatomic) PHAssetCollection *originalAssetCollection;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *assetsHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *customKeyAssetHelper;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic) _Bool customSortAscending;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property (retain, nonatomic) NSString *title;
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

+ (id)validateAssetCollectionTitle:(id)arg1 error:(id *)arg2;
+ (id)_changeRequestForAssetCollection:(id)arg1 optionalAssets:(id)arg2;
+ (id)changeRequestForAssetCollection:(id)arg1;
+ (id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2;
+ (id)creationRequestForAssetCollectionWithTitle:(id)arg1;
+ (id)creationRequestForAssetCollectionCopyFromAssetCollection:(id)arg1;
+ (void)deleteAssetCollections:(id)arg1;
+ (void)expungeAssetCollections:(id)arg1;
+ (void)undeleteAssetCollections:(id)arg1;
+ (void)_deleteAssetCollections:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;

- (_Bool)isPinned;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)setCustomKeyAsset:(id)arg1;
- (void)addAsset:(id)arg1;
- (void)setIsPinned:(_Bool)arg1;
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
- (id)_mutableKeyAssetObjectIDsAndUUIDs;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareKeyAssetIDIfNeeded;
- (void)addAssets:(id)arg1;
- (void)removeAssets:(id)arg1;
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)_setOriginalAssetCollection:(id)arg1;
- (id)_mutableAssetsObjectIDsAndUUIDs;
- (void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;
- (void)removeAssetFromAssetsAtIndex:(unsigned long long)arg1;
- (void)replaceAssetInAssetsAtIndex:(unsigned long long)arg1 withAsset:(id)arg2;
- (void)removeAsset:(id)arg1;

@end
