/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCDemoMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)performOperation;
- (id)_demoGroupConfigsPromise;
- (id)_headlinesPromiseWithGroupConfigs:(id)arg1;
- (id)_tagsPromiseWithGroupConfigs:(id)arg1;
- (id)feedGroupsWithGroupConfigs:(id)arg1 tagsByID:(id)arg2 headlinesByID:(id)arg3;
- (id)_feedGroupForGroupConfig:(id)arg1 tagsByID:(id)arg2 headlinesByID:(id)arg3;

@end
