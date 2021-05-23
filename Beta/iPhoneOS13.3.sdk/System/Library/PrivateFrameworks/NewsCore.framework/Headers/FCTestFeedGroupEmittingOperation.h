/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCSingleTagFeedGroupEmittingOperation.h>

@interface FCTestFeedGroupEmittingOperation : FCSingleTagFeedGroupEmittingOperation

{
    _Bool _disableFiltering;
}

@property (nonatomic) _Bool disableFiltering;

- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1;
- (id)feedTransformations;

@end
