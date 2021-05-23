/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactsEnvironment, CNManagedAccountsCache, CNManagedConfiguration, CNiOSAddressBook, NSString;

@protocol CNContactsLogger;

@interface CNiOSAddressBookDataMapper : NSObject

{
    CNiOSAddressBook *_addressBook;
    CNContactsEnvironment *_environment;
    id <CNContactsLogger> _logger;
    CNManagedConfiguration *_managedConfiguration;
    CNManagedAccountsCache *_managedAccountsCache;
}

@property (retain, nonatomic) CNManagedAccountsCache *managedAccountsCache;
@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (nonatomic, readonly) id <CNContactsLogger> logger;
@property (nonatomic, readonly) CNManagedConfiguration *managedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;

+ (void)initialize;
+ (id)contactBuffersDecoderForFetchRequest:(id)arg1;
+ (id)encodedPeopleFetcherForForFetchRequest:(id)arg1 addressBook:(void *)arg2 managedConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 environment:(id)arg5;
+ (void *)_copyLocalSourceIfEnabledInAddressBook:(void *)arg1;
+ (void *)_copyEligiblePrimarySourceForAccountWithIdentifier:(id)arg1 addressBook:(void *)arg2 error:(id *)arg3;

- (id)init;
- (id)currentHistoryToken;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;
- (_Bool)hasMultipleGroupsOrAccounts;
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (_Bool)fetchAndDecodeEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetchContactsForFetchRequest:(id)arg1 error:(id *)arg2 batchHandler:(CDUnknownBlockType)arg3;
- (_Bool)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id *)arg2;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)identifierWithError:(id *)arg1;
- (int)saveSequenceCount;
- (_Bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id *)arg4;
- (id)groupsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)setDefaultAccountIdentifier:(id)arg1 error:(id *)arg2;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)verifyChangeHistoryForClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)individualContactCountWithError:(id *)arg1;
- (id)initWithContactsEnvironment:(id)arg1 addressBook:(id)arg2 managedConfiguration:(id)arg3;
- (_Bool)canExecuteSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_fechAllRecordsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processAccountsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processContainersFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processContactsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processGroupsFromSaveContext:(id)arg1 error:(id *)arg2;
- (void)_postProcessContactsFromSaveContext:(id)arg1;
- (void)_postProcessGroupsFromSaveContext:(id)arg1;
- (void)_postProcessContainersFromSaveContext:(id)arg1;
- (_Bool)_fetchAccountsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchContainersInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchContactsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchGroupsInSaveContext:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifierForAddressBook:(void *)arg1 error:(id *)arg2;
- (_Bool)_hasManagementRestrictionsEnabled;
- (void *)_defaultSourceInAddressBook:(void *)arg1 error:(id *)arg2;
- (_Bool)_hasAccessToWriteToAccountCorrespondingToSource:(void *)arg1 fromAddressBook:(void *)arg2;
- (_Bool)_hasWriteAccessToAccountContainingPerson:(void *)arg1 fromSaveContext:(id)arg2;
- (_Bool)_processContactChangeRequestsFromSaveContext:(id)arg1 error:(id *)arg2;
- (void *)_alternativeSourceWithAccessibleAccountFromAddressBook:(void *)arg1;
- (_Bool)_canWriteUnderManagementRestrictionsToSource:(void *)arg1 inAddressBook:(void *)arg2;
- (_Bool)_canReadUnderManagementRestrictionsFromSource:(void *)arg1 inAddressBook:(void *)arg2;
- (_Bool)_processContactMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processSubgroupMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_hasAccessToReadFromAccountCorrespondingToSource:(void *)arg1 fromAddressBook:(void *)arg2;
- (id)_containersMatchingPredicate:(id)arg1 remote:(_Bool)arg2 error:(id *)arg3;
- (id)legacyTetheredSyncAnchorForKey:(struct __CFString *)arg1;
- (void)setLegacyTetheredSyncAnchor:(id)arg1 forKey:(struct __CFString *)arg2;
- (void *)copySourceForContainerIdentifier:(id)arg1 fromAddressBook:(void *)arg2;
- (struct __CFArray *)copyChangeTableRowIDsFromChangeIDs:(id)arg1;
- (id)initWithAddressBook:(id)arg1 managedConfiguration:(id)arg2;
- (id)encodedContactsCursorForFetchRequest:(id)arg1 cursorCleanupBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;

@end
