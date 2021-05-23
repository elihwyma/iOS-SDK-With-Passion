/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSSet;

@protocol FCHeadlineClusterOrdering, FCHeadlineClustering;

@interface FCMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

{
    id <FCHeadlineClustering> _headlineClusterer;
    id <FCHeadlineClusterOrdering> _headlineClusterOrderer;
    NSSet *_emittableGroupTypes;
}

@property (retain, nonatomic) id <FCHeadlineClustering> headlineClusterer;
@property (retain, nonatomic) id <FCHeadlineClusterOrdering> headlineClusterOrderer;
@property (retain, nonatomic) NSSet *emittableGroupTypes;

- (void)_performOperation;
- (void)performOperation;
- (id)_nonEditorialFeedTransformationWithFeedContext:(id)arg1 feedItemScores:(id)arg2 showStoriesOnlyFromFavorites:(_Bool)arg3;
- (id)_joinedFeedTransformation;
- (id)_sortClusteredHeadlinesForDisplay:(id)arg1 withAdditionalData:(id)arg2 scoresByArticleID:(id)arg3 topicsByID:(id)arg4 translationProvider:(id)arg5;
- (id)interleaveHeadlines:(id)arg1 withPublisherDiversificationPenalty:(double)arg2;

@end
