/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsCore/FCOperation.h>

@class NSDate, NSDictionary, NSMutableArray, NTCatchUpOperationForYouFetchInfo, NTCatchUpOperationForYouRequest, NTCatchUpOperationResults;

@protocol FCContentContext, FCFeedPersonalizing, FCNewsAppConfiguration;

@interface NTCatchUpOperation : FCOperation

{
    _Bool _forYouEnabled;
    id <FCNewsAppConfiguration> _appConfiguration;
    id <FCContentContext> _contentContext;
    id <FCFeedPersonalizing> _feedPersonalizer;
    NSDictionary *_todayConfigOperationHeldRecordsByType;
    unsigned long long _maximumCachedAgeForForYou;
    NTCatchUpOperationForYouRequest *_forYouRequest;
    CDUnknownBlockType _sessionProvider;
    NSDictionary *_resultsByArticleListID;
    NSDictionary *_resultsByArticleIDsRequestID;
    NTCatchUpOperationResults *_forYouResults;
    NTCatchUpOperationForYouFetchInfo *_forYouFetchInfo;
    CDUnknownBlockType _catchUpCompletionHandler;
    NSDate *_fetchDate;
    NSMutableArray *_articleListRequests;
    NSMutableArray *_articleIDsRequests;
}

@property (copy, nonatomic) NSDate *fetchDate;
@property (retain, nonatomic) NSMutableArray *articleListRequests;
@property (retain, nonatomic) NSMutableArray *articleIDsRequests;
@property (copy, nonatomic) NSDictionary *resultsByArticleListID;
@property (copy, nonatomic) NSDictionary *resultsByArticleIDsRequestID;
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (copy, nonatomic) NTCatchUpOperationResults *forYouResults;
@property (copy, nonatomic) id <FCNewsAppConfiguration> appConfiguration;
@property (retain, nonatomic) id <FCContentContext> contentContext;
@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (retain, nonatomic) NSDictionary *todayConfigOperationHeldRecordsByType;
@property (nonatomic) unsigned long long maximumCachedAgeForForYou;
@property (copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest;
@property (nonatomic, getter=isForYouEnabled) _Bool forYouEnabled;
@property (copy, nonatomic) CDUnknownBlockType sessionProvider;
@property (copy, nonatomic) CDUnknownBlockType catchUpCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (void)addArticleIDsRequest:(id)arg1;
- (void)_fetchForYouResultsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)addArticleListRequest:(id)arg1;

@end
