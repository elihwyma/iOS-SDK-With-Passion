/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSOperation.h>

@class NFLFeedSettings, NFLRankedLayoutRequest;

@interface NFLRankedLayoutGenerationOperation : NSOperation

{
    CDUnknownBlockType _rankedLayoutGenerationCompletion;
    NFLRankedLayoutRequest *_request;
    NFLFeedSettings *_feedSettings;
}

@property (copy) NFLRankedLayoutRequest *request;
@property (retain, nonatomic) NFLFeedSettings *feedSettings;
@property (copy) CDUnknownBlockType rankedLayoutGenerationCompletion;

- (id)init;
- (void)cancel;
- (void)main;
- (id)initWithRequest:(id)arg1 feedSettings:(id)arg2;

@end
