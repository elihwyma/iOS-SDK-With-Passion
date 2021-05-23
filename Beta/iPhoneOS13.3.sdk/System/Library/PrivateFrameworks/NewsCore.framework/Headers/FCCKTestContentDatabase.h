/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKContentDatabase.h>

@class FCCKTestFeedQueryEndpoint, FCCKTestMultiFetchQueryEndpoint, FCCKTestOrderFeedQueryEndpoint, NSMutableArray, NSMutableSet, NSSet;

@interface FCCKTestContentDatabase : FCCKContentDatabase

{
    _Bool _simulateNetworkError;
    NSSet *_fetchedKeys;
    NSMutableArray *_records;
    NSMutableSet *_droppedFeeds;
    FCCKTestFeedQueryEndpoint *_feedQueryEndpoint;
    FCCKTestOrderFeedQueryEndpoint *_orderFeedQueryEndpoint;
    FCCKTestMultiFetchQueryEndpoint *_multiFetchQueryEndpoint;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) NSMutableSet *droppedFeeds;
@property (retain, nonatomic) FCCKTestFeedQueryEndpoint *feedQueryEndpoint;
@property (retain, nonatomic) FCCKTestOrderFeedQueryEndpoint *orderFeedQueryEndpoint;
@property (retain, nonatomic) FCCKTestMultiFetchQueryEndpoint *multiFetchQueryEndpoint;
@property (copy, nonatomic) NSSet *fetchedKeys;
@property (nonatomic) _Bool simulateNetworkError;

+ (id)testingDatabase;

- (void)addOperation:(id)arg1;
- (id)insertTestArticle;
- (id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(_Bool)arg2 networkBehaviorMonitor:(id)arg3;
- (_Bool)shouldUseCloudd;
- (id)records:(id)arg1 withDesiredKeys:(id)arg2;
- (void)insertTestArticleWithID:(id)arg1 properties:(id)arg2;
- (id)insertTestTagWithType:(id)arg1 properties:(id)arg2;
- (void)updateArticleWithID:(id)arg1 properties:(id)arg2;
- (void)updateArticleWithID:(id)arg1 modDate:(id)arg2 properties:(id)arg3;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 properties:(id)arg3;
- (void)insertTestIssueWithID:(id)arg1 properties:(id)arg2;
- (void)insertTestTagWithID:(id)arg1 type:(id)arg2 properties:(id)arg3;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3;
- (void)updateArticleID:(id)arg1 inFeedID:(id)arg2 withProperties:(id)arg3;
- (void)insertArticleID:(id)arg1 atTopOfFeedID:(id)arg2;
- (void)insertRecord:(id)arg1;
- (id)insertTestArticleWithProperties:(id)arg1;
- (id)insertTestForYouConfigWithProperties:(id)arg1;
- (id)insertTestArticleListReferencingArticleIDs:(id)arg1;
- (id)insertTestIssueListReferencingIssueIDs:(id)arg1;
- (void)deleteArticleWithID:(id)arg1;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2;
- (id)insertTestIssueWithProperties:(id)arg1;
- (void)updateTagWithID:(id)arg1 properties:(id)arg2;
- (void)insertArticleID:(id)arg1 atBottomOfFeedID:(id)arg2;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3 subOrder:(unsigned long long)arg4;
- (void)populateWithBasicTestFeeds;
- (void)deleteFeedID:(id)arg1;
- (void)simulateDroppedFeedForFeedID:(id)arg1;
- (id)addArticlesToTopOfFeed:(id)arg1 count:(unsigned long long)arg2;
- (unsigned long long)orderForArticleID:(id)arg1 feedID:(id)arg2;

@end
