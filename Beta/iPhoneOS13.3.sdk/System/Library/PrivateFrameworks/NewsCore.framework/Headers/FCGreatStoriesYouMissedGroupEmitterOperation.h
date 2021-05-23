/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCGreatStoriesYouMissedGroupEmitterOperation : FCFeedGroupEmittingOperation

{
    unsigned long long _limit;
    unsigned long long _restrictToBestSourceFeeds;
}

@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long restrictToBestSourceFeeds;

- (void)performOperation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;
- (id)_feedTransformation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 limit:(unsigned long long)arg5 restrictToBestSourceFeeds:(_Bool)arg6;

@end
