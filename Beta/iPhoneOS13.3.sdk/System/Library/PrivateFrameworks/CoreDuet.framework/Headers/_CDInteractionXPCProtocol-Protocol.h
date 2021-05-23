/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@protocol _CDInteractionXPCProtocol

- (unsigned short)rankCandidateContacts:usingSettings:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)adviseInteractionsUsingSettings:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)adviseInteractionsForDate:usingSettings:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)adviseInteractionsForLocation:usingSettings:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)adviseSocialInteractionsForDate:andSeedContacts:usingSettings:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)adviseInteractionsForKeywordsInString:usingSettings:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)tuneSocialAdvisorUsingSettings:heartBeatHandler:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)recordInteractions:enforceDataLimits:enforcePrivacy:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryInteractionsUsingPredicate:sortDescriptors:limit:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryContactsUsingPredicate:sortDescriptors:limit:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)countInteractionsUsingPredicate:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)countContactsUsingPredicate:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteInteractionsMatchingPredicate:sortDescriptors:limit:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteInteractionsWithBundleId:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteInteractionsWithBundleId:account:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteInteractionsWithBundleId:domainIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestInteractionsFromContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)shareExtensionSuggestionsFromContext:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)mapsSuggestionsFromContext:maxSuggestions:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesZKWSuggestionsFromContext:maxSuggestions:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rankedContactSuggestionsFromContext:contactsOnly:maxSuggestions:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rankedNameSuggestionsFromContext:name:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rankedAutocompleteSuggestionsFromContext:candidates:reply: /* Error: Ran out of types for this method. */;

@end
