/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCFeedDatabase, NSArray, NSMutableArray, NSMutableDictionary, NSObject;

@protocol FCContentContext, FCCoreConfiguration, OS_dispatch_queue;

@interface FCFeedStreamingRequestOperation : FCOperation

{
    _Bool _throttled;
    id <FCContentContext> _context;
    id <FCCoreConfiguration> _configuration;
    FCFeedDatabase *_feedDatabase;
    NSArray *_feedRequests;
    long long _streamingType;
    unsigned long long _cutoffAtCount;
    long long _options;
    NSArray *_feedTransformations;
    CDUnknownBlockType _streamingResultsHandler;
    CDUnknownBlockType _requestCompletionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableArray *_feedRangeSteps;
    NSMutableDictionary *_aggregateFeedResponsesByFeedID;
    NSMutableArray *_aggregateFeedItems;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableArray *feedRangeSteps;
@property (retain, nonatomic) NSMutableDictionary *aggregateFeedResponsesByFeedID;
@property (retain, nonatomic) NSMutableArray *aggregateFeedItems;
@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCFeedDatabase *feedDatabase;
@property (copy, nonatomic) NSArray *feedRequests;
@property (nonatomic) long long streamingType;
@property (nonatomic) _Bool throttled;
@property (nonatomic) unsigned long long cutoffAtCount;
@property (nonatomic) long long options;
@property (copy, nonatomic) NSArray *feedTransformations;
@property (copy, nonatomic) CDUnknownBlockType streamingResultsHandler;
@property (copy, nonatomic) CDUnknownBlockType requestCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_feedRangeCoveredByRequests;
- (id)_feedRangeBrokenIntoSteps:(id)arg1;
- (void)_startNextFetchStep;
- (void)_appendFeedResponses:(id)arg1 feedItems:(id)arg2;

@end
