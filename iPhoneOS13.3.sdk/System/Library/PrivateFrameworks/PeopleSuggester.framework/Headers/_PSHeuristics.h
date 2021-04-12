//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDInteractionCache, _CDInteractionStore, _PSContactResolver;
@protocol _DKKnowledgeQuerying;

@interface _PSHeuristics : NSObject
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _CDInteractionStore *_interactionStore;
    _PSContactResolver *_contactResolver;
    _CDInteractionCache *_recencyCache;
}

+ (id)templateForInPhoneCallHeuristicWithContactId:(id)arg1 handle:(id)arg2;
@property(retain, nonatomic) _CDInteractionCache *recencyCache; // @synthesize recencyCache=_recencyCache;
@property(readonly, nonatomic) _PSContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
// - (void).cxx_destruct;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (id)backFillProxiesByRecencyUsingMessagesCache:(id)arg1 startIndex:(NSUInteger)arg2;
- (id)inPhoneCallHeuristicSuggestionProxies;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)arg1 predictionContextBundleId:(id)arg2;
- (id)proximityBoostingHeuristicWithProximityBooster:(id)arg1 existingSuggestions:(id)arg2;
- (id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)arg1 bundleIds:(id)arg2 meContactIdentifier:(id)arg3;
- (id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)arg1 photoSuggestedPeople:(id)arg2 contactIDsInAssets:(id)arg3;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)arg1 numberOfSuggestion:(NSUInteger)arg2;
- (id)seedSuggestionsForChatGuidsAndEmails:(id)arg1;
- (void)prepareRecencyCache;
- (id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2 contactResolver:(id)arg3;

@end

