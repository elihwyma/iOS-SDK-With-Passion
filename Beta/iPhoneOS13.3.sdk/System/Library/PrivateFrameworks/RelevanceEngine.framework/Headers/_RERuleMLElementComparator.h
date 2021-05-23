/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REMLElementComparator.h>

@class NSArray;

@interface _RERuleMLElementComparator : REMLElementComparator

{
    NSArray *_filteringRules;
    NSArray *_rankingRules;
    NSArray *_filteringEvaluators;
    NSArray *_leftRankingEvaluators;
    NSArray *_rightRankingEvaluators;
    NSArray *_comparisonRankingEvaluators;
}

+ (id)comparatorWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)comparisonLevels;
- (long long)compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3;
- (_Bool)shouldHideElement:(id)arg1;
- (id)initWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3;
- (float)_relevanceForElement:(id)arg1;

@end
