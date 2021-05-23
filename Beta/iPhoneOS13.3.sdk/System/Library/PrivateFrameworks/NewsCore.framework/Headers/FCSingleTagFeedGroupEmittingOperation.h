/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCSingleTagFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (_Bool)_runningPPT;
- (void)performOperation;
- (void)supplementFeedItems:(id)arg1 fromCursor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1;
- (id)feedTransformations;
- (void)_fetchOrdinaryHeadlinesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchPinnedHeadlinesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
