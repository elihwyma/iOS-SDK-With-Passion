/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSDate, NSDictionary, NSManagedObjectID, NSString, PHObjectPlaceholder, PHPhotosHighlight, PHRelationshipChangeRequestHelper;

@interface PHPhotosHighlightChangeRequest

{
    PHRelationshipChangeRequestHelper *_dayKeyAssetHelper;
    PHRelationshipChangeRequestHelper *_monthKeyAssetHelper;
    PHRelationshipChangeRequestHelper *_yearKeyAssetHelper;
    PHRelationshipChangeRequestHelper *_dayGroupKeyAssetHelper;
    PHPhotosHighlight *_originalHighlight;
    NSDictionary *_curationHelpersByCurationType;
}

@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *dayKeyAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *monthKeyAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *yearKeyAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *dayGroupKeyAssetHelper;
@property (retain, nonatomic) PHPhotosHighlight *originalHighlight;
@property (nonatomic, readonly) NSDictionary *curationHelpersByCurationType;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedPhotosHighlight;
@property (retain, nonatomic) NSString *dateDescription;
@property (retain, nonatomic) NSString *smartDescription;
@property (retain, nonatomic) NSString *verboseSmartDescription;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned short kind;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short category;
@property (nonatomic) unsigned short visibilityState;
@property (nonatomic) long long startTimeZoneOffset;
@property (nonatomic) long long endTimeZoneOffset;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic) unsigned long long mood;
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
+ (id)creationRequestForPhotosHighlight;
+ (id)changeRequestForPhotosHighlight:(id)arg1;
+ (void)deletePhotosHighlights:(id)arg1;

- (void)setKeyAsset:(id)arg1;
- (short)enrichmentVersion;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)_initializeCurationHelpersWithHelper:(id)arg1 xpcDict:(id)arg2;
- (void)setEnrichmentVersion:(short)arg1;
- (unsigned short)_internalCurationTypeForExternalCurationType:(unsigned short)arg1;
- (unsigned short)_externalCurationTypeForInternalCurationType:(unsigned short)arg1;
- (void)clearCurationWithType:(unsigned short)arg1;
- (void)setAssets:(id)arg1 forCurationType:(unsigned short)arg2;
- (void)didEnrichHighlight;
- (id)_mutableKeyAssetObjectIDsAndUUIDs;
- (id)_mutableAssetObjectIDsAndUUIDsForCurationType:(unsigned short)arg1;
- (id)_existentAssetObjectIDs;
- (id)_existentCuratedAssetObjectIDsForCurationType:(unsigned short)arg1;

@end
