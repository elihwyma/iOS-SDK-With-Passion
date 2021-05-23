/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class NSArray;

@protocol FCContentContext, FCFeedTransforming;

@interface FCCurrentFeaturedHeadlinesFetchOperation : FCOperation

{
    _Bool _useFallbackArticleSource;
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    id <FCFeedTransforming> _transformation;
    NSArray *_resultHeadlines;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) id <FCFeedTransforming> transformation;
@property (nonatomic) _Bool useFallbackArticleSource;
@property (retain, nonatomic) NSArray *resultHeadlines;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)initWithContext:(id)arg1 transformation:(id)arg2;
- (id)_promiseConfiguration;
- (id)_promiseTemporaryFallbackFeedItemsWithConfiguration:(id)arg1;
- (id)_promiseTemporaryFallbackHeadlinesForFeedItems:(id)arg1;
- (id)_promiseArticleRecordsWithConfiguration:(id)arg1;
- (id)_promiseFilteredArticleIDsFromArticleRecords:(id)arg1;
- (id)_promiseHeadlinesForArticleIDs:(id)arg1;
- (id)initWithContext:(id)arg1 transformation:(id)arg2 useFallbackArticleSource:(_Bool)arg3;

@end
