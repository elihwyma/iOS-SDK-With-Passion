/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCHeadlineClusteringRules, FCSolHeuristic, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface FCHeadlineClusteringSol : NSObject

{
    FCHeadlineClusteringRules *_rules;
    NSSet *_articleIds;
    NSDictionary *_articlesByTag;
    NSDictionary *_tagsByArticle;
    NSDictionary *_tagScores;
    NSDictionary *_headlinesById;
    NSSet *_hardOrphans;
    FCSolHeuristic *_heuristic;
    FCSolHeuristic *_autoFavoriteHeuristic;
    NSMutableArray *_articleGroups;
    NSMutableSet *_groupableTags;
}

@property (retain, nonatomic) FCHeadlineClusteringRules *rules;
@property (retain, nonatomic) NSSet *articleIds;
@property (retain, nonatomic) NSDictionary *articlesByTag;
@property (retain, nonatomic) NSDictionary *tagsByArticle;
@property (retain, nonatomic) NSDictionary *tagScores;
@property (retain, nonatomic) NSDictionary *headlinesById;
@property (retain, nonatomic) NSSet *hardOrphans;
@property (retain, nonatomic) FCSolHeuristic *heuristic;
@property (retain, nonatomic) FCSolHeuristic *autoFavoriteHeuristic;
@property (retain, nonatomic) NSMutableArray *articleGroups;
@property (retain, nonatomic) NSMutableSet *groupableTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)clusterHeadlinesByTopic:(id)arg1 subscribedTags:(id)arg2 personalizer:(id)arg3 rules:(id)arg4 translationProvider:(id)arg5 unpaidHeadlineIDs:(id)arg6;
- (id)sortedScoredArticles:(id)arg1 length:(long long)arg2 asc:(_Bool)arg3;
- (double)specificityScoreForTag:(id)arg1;
- (double)computeGroupingUtility:(id)arg1;
- (void)computeGrouping:(id)arg1 topK:(double)arg2;
- (void)filterOverflowedOrphans:(id)arg1;
- (void)optimizeForLayout:(id)arg1;
- (id)computeBestGrouping:(id)arg1 tagScores:(id)arg2 headlinesById:(id)arg3;

@end
