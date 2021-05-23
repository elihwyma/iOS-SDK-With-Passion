/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCMultiStepFetchOperation.h>

@class NSArray;

@protocol FCContentContext, FCCoreConfiguration;

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation

{
    _Bool _overrideArticleCachePolicy;
    _Bool _overrideTagCachePolicy;
    _Bool _shouldFilterHeadlinesWithoutSourceChannels;
    id <FCCoreConfiguration> _configuration;
    unsigned long long _articleCachePolicy;
    double _articleMaximumCachedAge;
    unsigned long long _tagCachePolicy;
    double _tagMaximumCachedAge;
    id <FCContentContext> _context;
    NSArray *_articleIDs;
    NSArray *_ignoreCacheForArticleIDs;
    NSArray *_resultHeadlines;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) NSArray *articleIDs;
@property (retain, nonatomic) NSArray *ignoreCacheForArticleIDs;
@property (retain, nonatomic) NSArray *resultHeadlines;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property _Bool overrideArticleCachePolicy;
@property unsigned long long articleCachePolicy;
@property double articleMaximumCachedAge;
@property _Bool overrideTagCachePolicy;
@property unsigned long long tagCachePolicy;
@property double tagMaximumCachedAge;
@property (nonatomic) _Bool shouldFilterHeadlinesWithoutSourceChannels;

- (id)init;
- (id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3;
- (id)completeFetchOperation;
- (id)determineAppropriateFetchStepsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchConfigWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchRecordsWithCompletion:(CDUnknownBlockType)arg1;

@end
