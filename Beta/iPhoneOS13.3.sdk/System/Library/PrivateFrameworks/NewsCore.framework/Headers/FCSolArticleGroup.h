/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCHeadlineClusteringRules, FCSolTagID, NSMutableSet;

@interface FCSolArticleGroup : NSObject

{
    FCSolTagID *_tagId;
    NSMutableSet *_articles;
    double _personalizationScore;
    FCHeadlineClusteringRules *_rules;
    NSMutableSet *_topArticles;
    NSMutableSet *_orphans;
    double _score;
    double _heuristicScore;
}

@property (nonatomic) double heuristicScore;
@property (retain, nonatomic) FCSolTagID *tagId;
@property (retain, nonatomic) NSMutableSet *articles;
@property (nonatomic) double personalizationScore;
@property (retain, nonatomic) FCHeadlineClusteringRules *rules;
@property (nonatomic, readonly) NSMutableSet *topArticles;
@property (nonatomic, readonly) NSMutableSet *orphans;
@property (nonatomic, readonly) double score;

+ (id)formGroup:(id)arg1 withMinClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 maxPublisherOccurrences:(long long)arg4 maxUnpaidArticles:(long long)arg5 enforcePublisherCap:(_Bool)arg6;
+ (id)predictBestGroup:(id)arg1 ungroupedArticles:(id)arg2 ungroupedTags:(id)arg3 articlesByTag:(id)arg4 heuristic:(id)arg5 autoFavoriteHeuristic:(id)arg6;

- (void)intersectArticles:(id)arg1;
- (id)initWithTagId:(id)arg1 personalizationScore:(double)arg2 articles:(id)arg3 rules:(id)arg4;
- (void)computeTopArticlesAndScore;

@end
