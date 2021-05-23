/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCMoreVideosFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)_performOperation;
- (void)performOperation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;
- (id)initWithContext:(id)arg1 groupEmitterIdentifier:(id)arg2;
- (id)_filterMoreVideoHeadlines:(id)arg1 withVideoGroupsConfig:(id)arg2;

@end
