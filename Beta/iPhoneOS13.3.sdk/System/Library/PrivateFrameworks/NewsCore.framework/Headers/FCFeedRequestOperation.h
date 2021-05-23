/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCEdgeCacheHint, FCFeedDatabase, FCHeldRecords, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@protocol FCContentContext, FCCoreConfiguration;

@interface FCFeedRequestOperation : FCOperation

{
    id <FCContentContext> _context;
    id <FCCoreConfiguration> _configuration;
    FCFeedDatabase *_feedDatabase;
    NSArray *_feedRequests;
    unsigned long long _maxCount;
    long long _options;
    NSArray *_feedTransformations;
    FCEdgeCacheHint *_edgeCacheHint;
    unsigned long long _expectedNetworkEventCount;
    CDUnknownBlockType _requestCompletionHandler;
    CDUnknownBlockType _requestCompletionHandlerWithHeldRecords;
    NSMutableArray *_mutableNetworkEvents;
    NSDictionary *_feedRequestsByFeedID;
    NSDictionary *_databaseLookupsByFeedID;
    NSMutableDictionary *_resultFeedResponses;
    FCHeldRecords *_resultHeldArticleRecords;
    FCHeldRecords *_resultHeldTagRecords;
    FCHeldRecords *_resultHeldIssueRecords;
}

@property (retain, nonatomic) NSMutableArray *mutableNetworkEvents;
@property (retain, nonatomic) NSDictionary *feedRequestsByFeedID;
@property (retain, nonatomic) NSDictionary *databaseLookupsByFeedID;
@property (retain, nonatomic) NSMutableDictionary *resultFeedResponses;
@property (retain, nonatomic) FCHeldRecords *resultHeldArticleRecords;
@property (retain, nonatomic) FCHeldRecords *resultHeldTagRecords;
@property (retain, nonatomic) FCHeldRecords *resultHeldIssueRecords;
@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCFeedDatabase *feedDatabase;
@property (copy, nonatomic) NSArray *feedRequests;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) long long options;
@property (copy, nonatomic) NSArray *feedTransformations;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic) unsigned long long expectedNetworkEventCount;
@property (nonatomic, readonly) NSArray *networkEvents;
@property (copy, nonatomic) CDUnknownBlockType requestCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType requestCompletionHandlerWithHeldRecords;

+ (void)initialize;
+ (_Bool)_orderFeedTopKEnabled;
+ (id)feedRequestContentEnvironmentTokenWithContext:(id)arg1;

- (id)init;
- (unsigned long long)maxRetries;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (void)resetForRetry;
- (void)_gatherEdgeCachedFeedResponsesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_gatherAllOrderFeedResponsesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_gatherAllFeedResponsesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_failureResponseForRequest:(id)arg1 error:(id)arg2;
- (_Bool)_countOfDroppedFeeds;
- (id)_orderFeedIDFromFeedID:(id)arg1;
- (unsigned long long)_orderFeedTopKFromBin:(long long)arg1 timeInterval:(double)arg2;
- (id)_additionalHTTPHeadersForOrderFeedRequest;
- (id)_normalizedFeedRange:(id)arg1;
- (_Bool)_shouldReturnItemsFromDroppedFeedResponse:(id)arg1;
- (unsigned long long)_networkEventCount;

@end
