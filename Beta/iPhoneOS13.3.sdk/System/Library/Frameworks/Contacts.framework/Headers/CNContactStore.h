/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContainerCache, CNiOSAddressBook, CNiOSAddressBookDataMapper, NSData;

@interface CNContactStore : NSObject

{
    CNContainerCache *_containerCache;
}

@property (nonatomic, readonly) CNiOSAddressBookDataMapper *iOSMapper;
@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (retain, nonatomic) CNContainerCache *containerCache;
@property (copy, nonatomic, readonly) NSData *currentHistoryToken;

+ (void)initialize;
+ (id)storeIdentifier;
+ (id)storeWithOptions:(unsigned long long)arg1;
+ (id)storeForFamilyMember:(id)arg1;
+ (id)storeWithDelegateInfo:(id)arg1;
+ (_Bool)eraseAllDataAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)eraseAllDataAtLocationWithName:(id)arg1 error:(id *)arg2;
+ (id)storeWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (id)standardLabelsForPropertyWithKey:(id)arg1 options:(unsigned long long)arg2;
+ (_Bool)isAccessRestrictedForEntityType:(long long)arg1;
+ (Class)storeClassWithIdentifier:(id)arg1;
+ (id)storeInfoClasses;
+ (id)contactIdentifierFromInternalIdentifier:(id)arg1;
+ (id)storeIdentifierFromContactIdentifier:(id)arg1;
+ (id)internalIdentifierFromContactIdentifier:(id)arg1;
+ (id)standardLabelsForPropertyWithKey:(id)arg1;
+ (id)allLabelsForPropertyWithKey:(id)arg1;
+ (_Bool)isXPCDataMapperStore:(id)arg1;
+ (id)_contactStoreForPublicAddressBook:(void *)arg1;
+ (id)contactStoreForPublicAddressBook:(void *)arg1;

- (id)init;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (id)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)initWithEnvironment:(id)arg1;
- (_Bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
- (_Bool)hasMultipleGroupsOrAccounts;
- (id)requestAccessForEntityType:(long long)arg1;
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)supportsSaveRequest:(id)arg1;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)enumeratorForContactFetchRequest:(id)arg1 error:(id *)arg2;
- (id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id *)arg2;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;
- (id)mainContactStore;
- (id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;
- (id)identifierWithError:(id *)arg1;
- (int)saveSequenceCount;
- (_Bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id *)arg4;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)setDefaultAccountIdentifier:(id)arg1 error:(id *)arg2;
- (id)legacyTetheredSyncDeviceAnchor;
- (void)setLegacyTetheredSyncDeviceAnchor:(id)arg1;
- (id)legacyTetheredSyncComputerAnchor;
- (void)setLegacyTetheredSyncComputerAnchor:(id)arg1;
- (id)verifyIndexWithError:(id *)arg1;
- (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2 mutable:(_Bool)arg3;
- (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2;
- (id)contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2;
- (id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 managedConfiguration:(id)arg3;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)unifiedMeContactMatchingEmailAddresses:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (_Bool)hasAccountFirstSyncCompleted;
- (id)_ios_meContactIdentifierWithError:(id *)arg1;
- (id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)unifiedMeContactMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)executeFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)contactWithMatchingDictionary:(id)arg1 keysToFetch:(id)arg2;
- (id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)verifyChangeHistoryForClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)individualContactCountWithError:(id *)arg1;
- (void)requestAuthorization:(long long)arg1 entityType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)authorizedKeysForContactKeys:(id)arg1;
- (id)synchronousRemoteObjectProxyForContactsXPCService;
- (_Bool)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;
- (id)contactFromPerson:(void *)arg1 mutable:(_Bool)arg2;
- (id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)contactFromPerson:(void *)arg1;
- (id)contactFromPersonID:(int)arg1;
- (id)contactIdentifierFromPersonID:(int)arg1;
- (void *)personFromContact:(id)arg1;
- (int)multiValueIdentifierFromLabeledValue:(id)arg1;
- (id)labeledValueFromMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;
- (id)_contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2;
- (void *)_publicABPersonFromContact:(id)arg1 publicAddressBook:(const void **)arg2;
- (int)_publicMultiValueIdentifierFromLabeledValue:(id)arg1;
- (id)_labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;
- (void *)publicABPersonFromContact:(id)arg1 publicAddressBook:(const void **)arg2;
- (int)publicMultiValueIdentifierFromLabeledValue:(id)arg1;
- (id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;
- (id)contactFromPublicPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)contactIdentifierFromPublicPersonID:(int)arg1;
- (id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg1;
- (id)_executeFetchRequestsWithInfos:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;
- (id)contactsMatchingPropertiesOfContact:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;

@end
