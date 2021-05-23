/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDateRange, FCFeedItemFeature, NSArray, NSDictionary;

@interface FCMyArticlesSearchOperation : FCOperation

{
    _Bool _channelsOnly;
    _Bool _cachedOnly;
    _Bool _unreadOnly;
    FCCloudContext *_context;
    FCFeedItemFeature *_feature;
    FCDateRange *_dateRange;
    CDUnknownBlockType _searchCompletionHandler;
    NSArray *_resultFeedItems;
    NSDictionary *_resultFeedContextByFeedID;
}

@property (retain, nonatomic) NSArray *resultFeedItems;
@property (copy) NSDictionary *resultFeedContextByFeedID;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) FCFeedItemFeature *feature;
@property (copy, nonatomic) FCDateRange *dateRange;
@property (nonatomic) _Bool channelsOnly;
@property (nonatomic) _Bool cachedOnly;
@property (nonatomic) _Bool unreadOnly;
@property (copy, nonatomic) CDUnknownBlockType searchCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_generateFeedRequestsForFeedRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
