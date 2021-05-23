/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHSuggestionChangeRequest

{
    PHRelationshipChangeRequestHelper *_keyAssetsHelper;
    PHRelationshipChangeRequestHelper *_representativeAssetsHelper;
}

@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyAssetsHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *representativeAssetsHelper;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedSuggestion;
@property (nonatomic) unsigned short notificationState;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
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
+ (id)creationRequestForSuggestionWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 keyAssets:(id)arg3 representativeAssets:(id)arg4 creationDate:(id)arg5 relevantUntilDate:(id)arg6 version:(long long)arg7;
+ (id)creationRequestForSuggestion;
+ (id)changeRequestForSuggestion:(id)arg1;
+ (void)deleteSuggestions:(id)arg1;

- (unsigned short)type;
- (void)setType:(unsigned short)arg1;
- (long long)version;
- (id)startDate;
- (id)endDate;
- (void)setVersion:(long long)arg1;
- (unsigned short)state;
- (void)setState:(unsigned short)arg1;
- (id)creationDate;
- (unsigned short)subtype;
- (void)setStartDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setSubtype:(unsigned short)arg1;
- (void)setFeaturesData:(id)arg1;
- (id)featuresData;
- (void)setActionData:(id)arg1;
- (id)actionData;
- (void)setExpungeDate:(id)arg1;
- (id)expungeDate;
- (void)setRelevantUntilDate:(id)arg1;
- (id)relevantUntilDate;
- (void)setActivationDate:(id)arg1;
- (id)activationDate;
- (void)setRepresentativeAssets:(id)arg1;
- (void)setKeyAssets:(id)arg1;
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
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (void)setActionProperties:(id)arg1;
- (void)setFeaturesProperties:(id)arg1;
- (void)setStartAndEndDatesWithKeyAssets:(id)arg1 representativeAssets:(id)arg2;
- (void)markActive;
- (void)markAccepted;
- (void)markDeclined;
- (void)markRetired;
- (void)markReactivated;
- (void)_calculateAndSetExpungeDate;

@end
