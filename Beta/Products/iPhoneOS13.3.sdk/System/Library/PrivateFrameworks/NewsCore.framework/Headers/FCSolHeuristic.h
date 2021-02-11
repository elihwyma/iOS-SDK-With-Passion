/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolHeuristic : NSObject {
    bool  _alternate;
    bool  _enforcePublisherCap;
    NSArray * _groupSizes;
    long long  _heuristicSampleSize;
    long long  _iterations;
    long long  _maxPublisherOccurrences;
    long long  _maxUnpaidArticles;
    id /* block */  _utilityBlock;
}

@property (nonatomic, readonly) bool alternate;
@property (nonatomic, readonly) bool enforcePublisherCap;
@property (nonatomic, retain) NSArray *groupSizes;
@property (nonatomic, readonly) long long heuristicSampleSize;
@property (nonatomic, readonly) long long iterations;
@property (nonatomic, readonly) long long maxPublisherOccurrences;
@property (nonatomic, readonly) long long maxUnpaidArticles;
@property (nonatomic, readonly, copy) id /* block */ utilityBlock;

- (void).cxx_destruct;
- (bool)alternate;
- (double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (bool)enforcePublisherCap;
- (id)fillGroupsWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)groupSizes;
- (long long)heuristicSampleSize;
- (id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 maxPublisherOccurrences:(long long)arg6 enforcePublisherCap:(bool)arg7 maxUnpaidArticles:(long long)arg8 heuristicSampleSize:(long long)arg9 utilityBlock:(id /* block */)arg10;
- (long long)iterations;
- (long long)maxPublisherOccurrences;
- (long long)maxUnpaidArticles;
- (void)setGroupSizes:(id)arg1;
- (id /* block */)utilityBlock;

@end