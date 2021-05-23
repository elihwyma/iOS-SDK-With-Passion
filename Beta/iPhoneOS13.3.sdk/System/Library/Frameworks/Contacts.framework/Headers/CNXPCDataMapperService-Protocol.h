/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@protocol CNXPCDataMapperService <Swift>

- (unsigned short)geminiResultForContact:substituteDefaultForDangling:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)bestSenderIdentityForHandle:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)configureServiceWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)identifierWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)unifiedContactCountWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)contactCountForFetchRequest:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)sectionListOffsetsForSortOrder:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)contactsForFetchRequest:withMatchInfoReply: /* Error: Ran out of types for this method. */;
- (unsigned short)encodedContactsAndCursorForFetchRequest:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)progressiveContactsForFetchRequest:progressHandler:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)meContactIdentifiersWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)executeSaveRequest:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)containersMatchingPredicate:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)serverSearchContainersMatchingPredicate:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)policyForContainerWithIdentifier:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsMatchingPredicate:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)groupsMatchingPredicate:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)subgroupsOfGroupWithIdentifier:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultContainerIdentifierWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultAccountIdentifier:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setMeContact:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setMeContact:forContainer:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setBestMeIfNeededForGivenName:familyName:email:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)contactWithUserActivityUserInfo:keysToFetch:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)userActivityForContact:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)registerChangeHistoryClientIdentifier:forContainerIdentifier:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterChangeHistoryClientIdentifier:forContainerIdentifier:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)changeHistoryWithFetchRequest:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)executeChangeHistoryClearRequest:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)changeHistoryTokenWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)favoritesEntryDictionariesAtPath:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)writeFavoritesPropertyListData:toPath:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)reindexSearchableItemsWithIdentifiers:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)verifyIndexWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizedKeysForContactKeys:withReply: /* Error: Ran out of types for this method. */;

@end
