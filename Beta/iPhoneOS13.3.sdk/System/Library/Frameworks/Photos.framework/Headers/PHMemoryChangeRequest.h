/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSData, NSDate, NSDictionary, NSManagedObjectID, NSString, PHMemoryFeature, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHMemoryChangeRequest

{
    _Bool _clientEntitledToMemoryMutation;
    _Bool _incrementPlayCount;
    _Bool _incrementShareCount;
    _Bool _incrementViewCount;
    NSDictionary *_movieAssetState;
    PHRelationshipChangeRequestHelper *_keyAssetHelper;
    PHRelationshipChangeRequestHelper *_representativeAssetsHelper;
    PHRelationshipChangeRequestHelper *_curatedAssetsHelper;
    PHRelationshipChangeRequestHelper *_extendedCuratedAssetsHelper;
    PHRelationshipChangeRequestHelper *_movieCuratedAssetsHelper;
}

@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *representativeAssetsHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *curatedAssetsHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *extendedCuratedAssetsHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *movieCuratedAssetsHelper;
@property (nonatomic, readonly) _Bool clientEntitledToMemoryMutation;
@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedMemory;
@property (nonatomic, getter=isRejected) _Bool rejected;
@property (nonatomic, getter=isFavorite) _Bool favorite;
@property (nonatomic, getter=isPending) _Bool pending;
@property (nonatomic, getter=isUserCreated) _Bool userCreated;
@property (nonatomic) double score;
@property (nonatomic, readonly) NSDictionary *movieAssetState;
@property (retain, nonatomic) NSData *movieData;
@property (retain, nonatomic) NSData *photosGraphData;
@property (nonatomic) long long photosGraphVersion;
@property (retain, nonatomic) NSDate *lastViewedDate;
@property (retain, nonatomic) NSDate *lastMoviePlayedDate;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long notificationState;
@property (retain, nonatomic) PHMemoryFeature *blacklistedFeature;
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
+ (id)validateMemoryTitle:(id)arg1 error:(id *)arg2;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 subcategory:(unsigned long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 keyAsset:(id)arg8;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 subcategory:(unsigned long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 extendedCuratedAssets:(id)arg8 keyAsset:(id)arg9;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 representativeAssets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 assets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7;
+ (id)preferredAttributesForMemoryCreationFromAssetCollection:(id)arg1 proposedAttributes:(id)arg2;
+ (id)preferredAttributesForMemoryCreationFromCollectionList:(id)arg1 proposedAttributes:(id)arg2;
+ (id)preferredAttributesForMemoryCreationFromPeople:(id)arg1 proposedAttributes:(id)arg2;
+ (_Bool)_shouldAcceptProposedAttributes:(id)arg1;
+ (long long)_titleFormatForProposedAttributes:(id)arg1;
+ (id)_preferredAttributesForMemoryCreationFromObject:(id)arg1 withSuccess:(_Bool)arg2 title:(id)arg3 subtitle:(id)arg4 error:(id)arg5 proposedAttributes:(id)arg6;
+ (id)changeRequestForMemory:(id)arg1;
+ (void)deleteMemories:(id)arg1;
+ (id)changeRequestForRemotelyViewedMemoryWithLocalIdentifier:(id)arg1;

- (void)setKeyAsset:(id)arg1;
- (unsigned long long)subcategory;
- (void)setSubcategory:(unsigned long long)arg1;
- (void)setMovieCuratedAssets:(id)arg1;
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
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;
- (void)_prepareAssetIDsIfNeeded;
- (id)_mutableRepresentativeAssetObjectIDsAndUUIDs;
- (id)_mutableCuratedAssetObjectIDsAndUUIDs;
- (id)_mutableExtendedCuratedAssetObjectIDsAndUUIDs;
- (void)setRepresentativeAssets:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 keyAsset:(id)arg4;
- (void)setMovieStateData:(id)arg1 forAsset:(id)arg2;
- (void)setQueryHintObject:(id)arg1;
- (void)setQueryHintObjects:(id)arg1;
- (void)incrementPlayCount;
- (void)incrementShareCount;
- (void)incrementViewCount;

@end
