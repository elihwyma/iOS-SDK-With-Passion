/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@class CLSContactCache, CLSPerson, CNContact, CNContactStore, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol CLSSocialServiceContactsDelegate, SGSuggestionsServiceContactsProtocol;

@interface CLSSocialServiceContacts

{
    CNContactStore *_contactStore;
    CNContact *_meContact;
    CLSPerson *_mePerson;
    NSMutableArray *_allPersons;
    NSMutableDictionary *_personsForCNIdentifiers;
    NSMutableDictionary *_personsForPHIdentifiers;
    id <SGSuggestionsServiceContactsProtocol> _suggestionsService;
    id <CLSSocialServiceContactsDelegate> _delegate;
    NSMutableDictionary *_personByFullName;
    NSMutableSet *_nonFoundFullNames;
    NSMutableDictionary *_personByHandle;
    NSMutableSet *_nonFoundHandles;
    CLSContactCache *_contactCache;
}

@property (retain, nonatomic) NSMutableDictionary *personByFullName;
@property (retain, nonatomic) NSMutableSet *nonFoundFullNames;
@property (retain, nonatomic) NSMutableDictionary *personByHandle;
@property (retain, nonatomic) NSMutableSet *nonFoundHandles;
@property (retain, nonatomic) CLSContactCache *contactCache;
@property (weak, nonatomic) id <CLSSocialServiceContactsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultKeysToFetch;

- (id)contactsForIdentifiers:(id)arg1;
- (id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id *)arg2;
- (id)suggestionsService;
- (id)mePerson;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (void)enumerateAllPersonsUsingBlock:(CDUnknownBlockType)arg1;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 usingPersonsModel:(id)arg2;
- (id)personForIdentifier:(id)arg1;
- (id)contactHistoryCollector;
- (id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2;
- (id)_fullNameWithContact:(id)arg1;
- (void)invalidateMemoryCaches;
- (id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersonsAndHomeAddressUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonsAndBirthdayDateUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonsAndRelationshipUsingBlock:(CDUnknownBlockType)arg1;
- (id)cachedPersonLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1;
- (id)personForPersonHandle:(id)arg1;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)matchingDictionaryForContactIdentifier:(id)arg1;
- (void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_allPersons;
- (id)_personResultsForfullName:(id)arg1;
- (id)_personResultsForPHPersonIdentifier:(id)arg1 isLackingFaces:(out _Bool *)arg2 inPhotoLibrary:(id)arg3;
- (id)_personWithContact:(id)arg1 createPersonIfNeeded:(_Bool)arg2;
- (id)_personWithContactIdentifier:(id)arg1;
- (id)__newPersonWithContact:(id)arg1;
- (void)_addAddressesToPerson:(id)arg1 withContact:(id)arg2;
- (unsigned long long)_relationshipForContact:(id)arg1;
- (id)_fullNameForPersonRecord:(id)arg1;
- (id)_firstNameForPersonRecord:(id)arg1;
- (id)_lastNameForPersonRecord:(id)arg1;
- (id)_nicknameForPersonRecord:(id)arg1;
- (id)_maidenNameForPersonRecord:(id)arg1;
- (void)enumeratePersonsForFullName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_personsMatchingPredicate:(id)arg1;
- (void)invalidateCacheForPersonWithIdentifiers:(id)arg1;
- (unsigned long long)_genderFromFaceGender:(unsigned short)arg1;
- (unsigned long long)_ageCategoryFromFaceAgeType:(unsigned short)arg1;
- (id)potentialBirthdayDateForCNIdentifier:(id)arg1 fullName:(id)arg2;
- (float)_fuzzyMatchingScoreBetweenNameComponents:(id)arg1 andNameComponents:(id)arg2;
- (float)_confidenceInPersonRecord:(id)arg1 forName:(id)arg2 components:(id)arg3;
- (void)updateProxy;

@end
