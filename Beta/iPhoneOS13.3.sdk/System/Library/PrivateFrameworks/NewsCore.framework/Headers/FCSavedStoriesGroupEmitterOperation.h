/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCSavedStoriesGroupEmitterOperation : FCFeedGroupEmittingOperation

{
    long long _desiredArticlesCount;
}

@property (nonatomic) long long desiredArticlesCount;

- (void)performOperation;

@end
