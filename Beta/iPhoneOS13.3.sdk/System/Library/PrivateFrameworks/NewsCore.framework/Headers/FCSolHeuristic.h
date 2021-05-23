/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCSolHeuristic : NSObject

{
    _Bool _alternate;
    _Bool _enforcePublisherCap;
    NSArray *_groupSizes;
    long long _iterations;
    long long _maxPublisherOccurrences;
    long long _maxUnpaidArticles;
    long long _heuristicSampleSize;
    CDUnknownBlockType _utilityBlock;
}

@property (retain, nonatomic) NSArray *groupSizes;
@property (nonatomic, readonly) _Bool alternate;
@property (nonatomic, readonly) long long iterations;
@property (nonatomic, readonly) long long maxPublisherOccurrences;
@property (nonatomic, readonly) _Bool enforcePublisherCap;
@property (nonatomic, readonly) long long maxUnpaidArticles;
@property (nonatomic, readonly) long long heuristicSampleSize;
@property (copy, nonatomic, readonly) CDUnknownBlockType utilityBlock;

- (id)fillGroupsWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 maxPublisherOccurrences:(long long)arg6 enforcePublisherCap:(_Bool)arg7 maxUnpaidArticles:(long long)arg8 heuristicSampleSize:(long long)arg9 utilityBlock:(CDUnknownBlockType)arg10;
- (double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;

@end
