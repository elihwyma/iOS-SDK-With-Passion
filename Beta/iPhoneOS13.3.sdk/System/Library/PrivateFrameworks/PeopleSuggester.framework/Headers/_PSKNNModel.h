/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSArray, _CDInteractionCache, _CDInteractionStore, _PSContactResolver;

@protocol _DKKnowledgeQuerying;

@interface _PSKNNModel : NSObject

{
    unsigned long long _k;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _CDInteractionStore *_interactionStore;
    _PSContactResolver *_contactResolver;
    NSArray *_filterBundleIds;
    _CDInteractionCache *_messageInteractionCache;
    _CDInteractionCache *_shareInteractionCache;
    unsigned long long __PSKnnTopKShares;
    unsigned long long __PSKnnMessagesZkwTopNFilter;
    unsigned long long __PSKnnModelRecencyMarginToPromoteShares;
    unsigned long long __PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;
    unsigned long long __PSKnnModelRecencyMarginToRetainShares;
}

@property (nonatomic) unsigned long long _PSKnnTopKShares;
@property (nonatomic) unsigned long long _PSKnnMessagesZkwTopNFilter;
@property (nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteShares;
@property (nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;
@property (nonatomic) unsigned long long _PSKnnModelRecencyMarginToRetainShares;
@property (nonatomic, readonly) unsigned long long k;
@property (nonatomic, readonly) id <_DKKnowledgeQuerying> knowledgeStore;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (nonatomic, readonly) _PSContactResolver *contactResolver;
@property (nonatomic, readonly) NSArray *filterBundleIds;
@property (retain, nonatomic) _CDInteractionCache *messageInteractionCache;
@property (retain, nonatomic) _CDInteractionCache *shareInteractionCache;

- (void)updateModelProperities:(id)arg1;
- (id)initWithK:(unsigned long long)arg1 interactionStore:(id)arg2 filterByBundleIds:(id)arg3 knowledgeStore:(id)arg4 contactResolver:(id)arg5 messageInteractionCache:(id)arg6 shareInteractionCache:(id)arg7;
- (id)suggestionProxiesWithPredictionContext:(id)arg1;
- (id)rankedMapsShareEtaSuggestions:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (id)mapsShareEtaDefaultKnnSuggestions:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (id)rankedGlobalSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 contactsOnly:(_Bool)arg3 interactions:(id)arg4 contactIdsCurrentlyInStore:(id)arg5;
- (id)rankedZkwSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (id)rankedNameSuggestionsWithPredictionContext:(id)arg1 forName:(id)arg2;
- (id)rankedAutocompleteSuggestionsWithPredictionContext:(id)arg1 candidates:(id)arg2;
- (id)rankedMessagesAutocompleteSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 candidates:(id)arg3;
- (id)featureVectorFromPredictionDate:(id)arg1 bundleId:(id)arg2;
- (id)candidatePropertyFromCandidates:(id)arg1;
- (id)featuresFromInteractionsSplitRecipients:(id)arg1;
- (id)interactionLabelsForQueryResult:(id)arg1 queryPoint:(id)arg2 rankerType:(long long)arg3 frequencyOnly:(_Bool)arg4 contactsOnly:(_Bool)arg5;
- (long long)suggestionExists:(id)arg1 withValue:(id)arg2 inArray:(id)arg3;
- (id)filterSuggestionsFrom:(id)arg1 byFilteringOutSeedRecipients:(id)arg2;
- (id)rankedMessagesZkwSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 maxSuggestions:(unsigned long long)arg3 frequencyOnly:(_Bool)arg4 interactions:(id)arg5;
- (id)indexesOfObjectsWithKey:(id)arg1 withValues:(id)arg2 inArray:(id)arg3;
- (id)featuresFromInteractions:(id)arg1;
- (id)normalizedStringFromString:(id)arg1;
- (id)filterShareInteractions:(id)arg1 minimumOccurences:(unsigned long long)arg2;
- (id)neighborsFromTrainingData:(id)arg1 k:(unsigned long long)arg2 queryPoint:(id)arg3;
- (id)extractNearestNeighborLabelsForQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(_Bool)arg3 rankerType:(long long)arg4 contactsOnly:(_Bool)arg5;
- (id)splitShareLabels:(id)arg1 suggestionDate:(id)arg2 contextBundleId:(id)arg3;
- (id)sliceStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ofArray:(id)arg3;
- (id)mergedSuggestionsFromShares:(id)arg1 andInteractions:(id)arg2;
- (id)rankedLabelsFromInteractionsSingleRecipientArray:(id)arg1 andDistances:(id)arg2 freqOnly:(_Bool)arg3 contactsOnly:(_Bool)arg4;
- (id)rankedLabelsFromInteractionsMaintainRecipientsArray:(id)arg1 andDistances:(id)arg2 freqOnly:(_Bool)arg3;
- (unsigned long long)indexToInsertNeighbor:(id)arg1 array:(id)arg2;
- (id)featuresFromMapsFeedbackEvents:(id)arg1;
- (id)extractNearestNeighborsForMapsQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(_Bool)arg3;
- (id)targetBundleIdsForFilterBundlesIds:(id)arg1;

@end
