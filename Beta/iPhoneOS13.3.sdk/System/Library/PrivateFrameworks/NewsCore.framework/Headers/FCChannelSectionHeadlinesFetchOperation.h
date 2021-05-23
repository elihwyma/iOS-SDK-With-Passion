/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSString;

@protocol FCChannelProviding;

@interface FCChannelSectionHeadlinesFetchOperation : FCOperation

{
    CDUnknownBlockType _fetchCompletionHandler;
    FCCloudContext *_cloudContext;
    NSString *_channelID;
    unsigned long long _maxHeadlinesCount;
    unsigned long long _maxHeadlinesPerFeed;
    double _fetchWindow;
    id <FCChannelProviding> _channel;
    NSArray *_sectionHeadlinesGroups;
}

@property (nonatomic, readonly) FCCloudContext *cloudContext;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) unsigned long long maxHeadlinesCount;
@property (nonatomic, readonly) unsigned long long maxHeadlinesPerFeed;
@property (nonatomic, readonly) double fetchWindow;
@property (nonatomic, readonly) id <FCChannelProviding> channel;
@property (copy, nonatomic) NSArray *sectionHeadlinesGroups;
@property (copy) CDUnknownBlockType fetchCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_configurationPromise;
- (id)_channelAndSectionTagsPromiseWithChannelID:(id)arg1;
- (id)_channelPromiseWithTagsByID:(id)arg1 parentChannelID:(id)arg2;
- (id)_sectionsPromiseWithTagsByID:(id)arg1 sectionIDs:(id)arg2;
- (id)_feedItemsPromiseWithChannel:(id)arg1 configuration:(id)arg2;
- (id)_headlinesPromiseWithFeedItems:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3;
- (id)_createFeedRequestWithFeedID:(id)arg1 feedRange:(id)arg2;
- (id)_feedItemsTransformationWithConfiguration:(id)arg1;
- (id)_headlinesAssembledBySectionFromFeedItemMap:(id)arg1 sectionIDsByFeedID:(id)arg2 sectionsByID:(id)arg3;
- (id)initWithCloudContext:(id)arg1 channelID:(id)arg2 maxHeadlinesCount:(unsigned long long)arg3 maxHeadlinesPerFeed:(unsigned long long)arg4 fetchWindow:(double)arg5;

@end
