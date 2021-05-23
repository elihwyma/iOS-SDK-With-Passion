/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCNewFavoriteFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)performOperation;
- (id)_ignoredTagIDs;
- (void)_buildGroupWithCandidateTags:(id)arg1 exhaustedTagIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_buildGroupWithTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
