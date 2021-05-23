/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObject.h>

@class NSDictionary, NSString;

@interface PHPerson : PHObject

{
    _Bool _inPersonNamingModel;
    unsigned short _ageType;
    unsigned short _genderType;
    NSString *_name;
    NSString *_displayName;
    long long _type;
    unsigned long long _manualOrder;
    NSString *_personUri;
    long long _faceCount;
    NSDictionary *_contactMatchingDictionary;
    long long _verifiedType;
    long long _questionType;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned long long manualOrder;
@property (nonatomic, readonly) NSString *personUri;
@property (nonatomic, readonly, getter=isInPersonNamingModel) _Bool inPersonNamingModel;
@property (nonatomic, readonly) long long faceCount;
@property (nonatomic, readonly, getter=isVerified) _Bool verified;
@property (nonatomic, readonly) long long verifiedType;
@property (nonatomic, readonly) long long questionType;
@property (nonatomic, readonly) unsigned short ageType;
@property (nonatomic, readonly) unsigned short genderType;
@property (nonatomic, readonly) NSDictionary *contactMatchingDictionary;

+ (id)fullNameFromContact:(id)arg1;
+ (id)displayNameFromContact:(id)arg1;
+ (id)fetchPersonsForContacts:(id)arg1 options:(id)arg2;
+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (_Bool)managedObjectSupportsPersonFilters;
+ (_Bool)managedObjectSupportsKeyFaces;
+ (id)localIdentifierExpressionForFetchRequests;
+ (id)fetchPersonsWithOptions:(id)arg1;
+ (id)fetchPersonsWithType:(long long)arg1 options:(id)arg2;
+ (id)fetchPersonsWithQuestionType:(long long)arg1 options:(id)arg2;
+ (id)fetchPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsInAsset:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsForAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchPersonWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchRejectedPersonsForFace:(id)arg1 options:(id)arg2;
+ (id)fetchPersonAssociatedWithFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchAssociatedPersonsGroupedByFaceGroupLocalIdentifierForFaceGroups:(id)arg1 options:(id)arg2;
+ (id)fetchMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchInvalidMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFinalMergeTargetPersonsForPersonWithUUID:(id)arg1 options:(id)arg2;
+ (id)_assetLocalIdentifiersForAssetCollection:(id)arg1;
+ (id)_momentLocalIdentifiersForAssetCollection:(id)arg1;
+ (id)fetchSuggestedPersonsForAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedPersonsForFocusedAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedRecipientsForAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg1 options:(id)arg2;
+ (id)batchFetchSuggestedRecipientsForAssets:(id)arg1 options:(id)arg2;
+ (id)_fetchSuggestedPersonsForRecipients:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
+ (id)_fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg1 assetCollection:(id)arg2 options:(id)arg3 client:(unsigned long long)arg4;
+ (id)fetchHomePersonUUIDsGroupedByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchPersonCountGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)personToKeepForCloudConistencyFromPersons:(id)arg1;
+ (id)fetchPersonsForContactIdentifiers:(id)arg1 options:(id)arg2;
+ (id)inferredContactByPersonLocalIdentifierForPersons:(id)arg1;
+ (id)fetchPersonsForReferences:(id)arg1 photoLibrary:(id)arg2;
+ (long long)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_verifiedPersonWithLocalIdentifier:(id)arg1 fromPhotoLibrary:(id)arg2;
+ (id)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3;
+ (long long)suggestVerifiedPersonForFace:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (long long)suggestVerifiedPersonForPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (long long)updateKeyFacesOfPersons:(id)arg1 forceUpdate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (long long)_personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 fromClient:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)_personSuggestionMarkedAsConfirmed:(_Bool)arg1 fromPersonSuggestion:(id)arg2;
+ (id)_packageSuggestionList:(id)arg1 photoLibrary:(id)arg2;
+ (id)_convertToPersonSuggestion:(id)arg1 photoLibrary:(id)arg2;

- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (void)markAsNeedingKeyFace;
- (id)linkedContactWithKeysToFetch:(id)arg1;
- (id)inferredContact;
- (id)suggestedContacts;
- (id)objectReference;

@end
