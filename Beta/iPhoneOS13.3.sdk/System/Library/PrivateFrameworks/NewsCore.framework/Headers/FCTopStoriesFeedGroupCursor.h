/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSArray, NSDate;

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor

{
    _Bool _collapsed;
    NSDate *_publishDate;
    NSArray *_articleIDs;
    NSDate *_optionalStoriesLastRefreshDate;
}

@property (copy, nonatomic) NSDate *publishDate;
@property (copy, nonatomic) NSArray *articleIDs;
@property (copy, nonatomic) NSDate *optionalStoriesLastRefreshDate;
@property (nonatomic, getter=isCollapsed) _Bool collapsed;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
