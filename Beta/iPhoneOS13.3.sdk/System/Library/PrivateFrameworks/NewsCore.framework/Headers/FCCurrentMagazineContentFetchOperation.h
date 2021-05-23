/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, FCCloudContext, NSArray, NSString;

@protocol FCFeedTransforming;

@interface FCCurrentMagazineContentFetchOperation : FCOperation

{
    FCCachePolicy *_cachedPolicy;
    CDUnknownBlockType _fetchCompletionHandler;
    FCCloudContext *_context;
    NSArray *_configIssueIDs;
    NSArray *_configArticleIDs;
    NSString *_trendingArticleListID;
    id <FCFeedTransforming> _currentHeadlinesTransformation;
    NSArray *_resultConfigIssues;
    NSArray *_resultConfigHeadlines;
    NSArray *_resultCurrentIssues;
    NSArray *_resultCurrentFeatureHeadlines;
    NSArray *_resultTrendingHeadlines;
}

@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSArray *configIssueIDs;
@property (retain, nonatomic) NSArray *configArticleIDs;
@property (copy, nonatomic) NSString *trendingArticleListID;
@property (retain, nonatomic) id <FCFeedTransforming> currentHeadlinesTransformation;
@property (retain, nonatomic) NSArray *resultConfigIssues;
@property (retain, nonatomic) NSArray *resultConfigHeadlines;
@property (retain, nonatomic) NSArray *resultCurrentIssues;
@property (retain, nonatomic) NSArray *resultCurrentFeatureHeadlines;
@property (retain, nonatomic) NSArray *resultTrendingHeadlines;
@property (retain, nonatomic) FCCachePolicy *cachedPolicy;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_fetchConfigContentAndCurrentIssuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchCurrentFeatureHeadlinesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_filterInaccessibleIssues:(id)arg1;
- (id)_filterInaccessibleHeadlines:(id)arg1;
- (id)initWithContext:(id)arg1 configIssueIDs:(id)arg2 configArticleIDs:(id)arg3 trendingArticleListID:(id)arg4 currentHeadlinesTransformation:(id)arg5;

@end
