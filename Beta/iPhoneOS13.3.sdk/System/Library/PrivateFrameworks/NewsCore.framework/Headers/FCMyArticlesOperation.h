/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDateRange, NSArray, NSDictionary, NSError, NSMapTable;

@protocol FCCoreConfiguration;

@interface FCMyArticlesOperation : FCOperation

{
    _Bool _streamFeedItems;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCDateRange *_dateRange;
    CDUnknownBlockType _feedItemsChangedHandler;
    NSArray *_feedItems;
    NSMapTable *_nonEditorialScoreProfiles;
    NSDictionary *_feedContextByFeedID;
    NSError *_error;
    long long _binOverride;
    CDUnknownBlockType _feedItemCompletionBlock;
    unsigned long long _maxNumberOfFeedsToQuery;
    unsigned long long _perFeedLimit;
}

@property (copy) NSArray *feedItems;
@property (copy) NSDictionary *feedContextByFeedID;
@property (copy) NSError *error;
@property (retain) NSMapTable *nonEditorialScoreProfiles;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) FCDateRange *dateRange;
@property (nonatomic) _Bool streamFeedItems;
@property (copy, nonatomic) CDUnknownBlockType feedItemsChangedHandler;
@property (copy, readonly) NSArray *nonEditorialFeedItems;
@property (nonatomic) long long binOverride;
@property (copy, nonatomic) CDUnknownBlockType feedItemCompletionBlock;
@property (nonatomic) unsigned long long maxNumberOfFeedsToQuery;
@property (nonatomic) unsigned long long perFeedLimit;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_appendFeedItems:(id)arg1;
- (void)_fetchTagsForQueryingWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
