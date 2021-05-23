/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString, PHCollectionList, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHCollectionListChangeRequest

{
    PHCollectionList *_originalCollectionList;
    PHRelationshipChangeRequestHelper *_collectionsHelper;
}

@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *collectionsHelper;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic) _Bool customSortAscending;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedCollectionList;
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

+ (id)_changeRequestForCollectionList:(id)arg1 optionalChildCollections:(id)arg2;
+ (id)changeRequestForCollectionList:(id)arg1;
+ (id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2;
+ (id)creationRequestForCollectionListWithTitle:(id)arg1;
+ (void)deleteCollectionLists:(id)arg1;
+ (void)expungeCollectionLists:(id)arg1;
+ (void)undeleteCollectionLists:(id)arg1;
+ (void)_deleteCollectionLists:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;

- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)addChildCollections:(id)arg1;
- (void)removeChildCollections:(id)arg1;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_setOriginalCollectionList:(id)arg1;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_prepareAssetIDsIfNeeded;
- (void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
- (void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)replaceChildCollectionsAtIndex:(unsigned long long)arg1 withChildCollection:(id)arg2;
- (void)addChildCollection:(id)arg1;
- (void)removeChildCollection:(id)arg1;

@end
