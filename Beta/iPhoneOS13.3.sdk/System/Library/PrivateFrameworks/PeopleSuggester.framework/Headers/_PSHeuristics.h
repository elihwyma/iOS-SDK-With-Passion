/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class _CDInteractionCache, _CDInteractionStore, _PSContactResolver;

@protocol _DKKnowledgeQuerying;

@interface _PSHeuristics : NSObject

{
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _CDInteractionStore *_interactionStore;
    _PSContactResolver *_contactResolver;
    _CDInteractionCache *_recencyCache;
}

@property (retain, nonatomic) _CDInteractionCache *recencyCache;
@property (nonatomic, readonly) id <_DKKnowledgeQuerying> knowledgeStore;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (nonatomic, readonly) _PSContactResolver *contactResolver;

+ (id)templateForInPhoneCallHeuristicWithContactId:(id)arg1 handle:(id)arg2;

- (id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2 contactResolver:(id)arg3;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)arg1 numberOfSuggestion:(unsigned long long)arg2;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)arg1 predictionContextBundleId:(id)arg2;
- (id)inPhoneCallHeuristicSuggestionProxies;
- (id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)arg1 photoSuggestedPeople:(id)arg2 contactIDsInAssets:(id)arg3;
- (id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)arg1 bundleIds:(id)arg2 meContactIdentifier:(id)arg3;
- (id)backFillProxiesByRecencyUsingMessagesCache:(id)arg1 startIndex:(unsigned long long)arg2;
- (id)seedSuggestionsForChatGuidsAndEmails:(id)arg1;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (void)prepareRecencyCache;
- (id)proximityBoostingHeuristicWithProximityBooster:(id)arg1 existingSuggestions:(id)arg2;

@end
