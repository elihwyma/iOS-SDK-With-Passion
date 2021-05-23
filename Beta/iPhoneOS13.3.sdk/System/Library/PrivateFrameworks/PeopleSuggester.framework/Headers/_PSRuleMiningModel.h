/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class BMBehaviorRetriever, _PSContactResolver;

@protocol _DKKnowledgeQuerying;

@interface _PSRuleMiningModel : NSObject

{
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _PSContactResolver *_contactResolver;
    BMBehaviorRetriever *_behaviorRetriever;
    long long __PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
    long long __PSRuleMiningModelRegularizingContextOverlapConstraint;
    double __PSRuleMiningModelMinRuleConfidenceForSuggestion;
}

@property (nonatomic, readonly) BMBehaviorRetriever *behaviorRetriever;
@property (nonatomic) long long _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
@property (nonatomic) long long _PSRuleMiningModelRegularizingContextOverlapConstraint;
@property (nonatomic) double _PSRuleMiningModelMinRuleConfidenceForSuggestion;
@property (nonatomic, readonly) id <_DKKnowledgeQuerying> knowledgeStore;
@property (nonatomic, readonly) _PSContactResolver *contactResolver;

- (id)shareExtensionSuggestionsFromContext:(id)arg1;
- (void)updateModelProperities:(id)arg1;
- (id)initWithKnowledgeStore:(id)arg1 contactresolver:(id)arg2 withConfig:(id)arg3;
- (id)suggestionProxiesWithPredictionContext:(id)arg1 photoSuggestedPeople:(id)arg2 supportedBundleIDs:(id)arg3;
- (id)filterByRegularizingRules:(id)arg1 invalidatedByAnyConflictingItems:(id)arg2 containingItemTypes:(id)arg3;
- (id)filterByRegularizingRulesByContextOverlap:(id)arg1 regulularizeItems:(id)arg2 queryItems:(id)arg3 regularizationConstraint:(unsigned long long)arg4;
- (id)suggestionArrayWithArray:(id)arg1 appendingUniqueElementsByBundleIdFromArray:(id)arg2;

@end
