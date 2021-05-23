/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContactStore.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNAggregateContactStore : CNContactStore

{
    CNContactStore *_mainStore;
    NSArray *_contactStores;
}

@property (copy, nonatomic) NSArray *contactStores;
@property (weak, nonatomic, readonly) CNContactStore *mainStore;

- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;
- (_Bool)hasMultipleGroupsOrAccounts;
- (id)requestAccessForEntityType:(long long)arg1;
- (void)_enumerateStoresUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;
- (void)didFetchContacts:(id)arg1 forPredicate:(id)arg2 fromStore:(id)arg3 unifiedFetch:(_Bool)arg4;
- (id)_allStoreResultsWithError:(id *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;
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
- (id)initWithContactStores:(id)arg1;
- (_Bool)store:(id)arg1 supportsSelector:(SEL)arg2;
- (id)mainContactStore;
- (id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)iOSMapper;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;

@end
