/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTrendingStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

{
    long long _desiredArticlesCount;
}

@property (nonatomic) long long desiredArticlesCount;

- (void)_performOperation;
- (void)performOperation;
- (id)_filterTrendingHeadlines:(id)arg1;

@end
