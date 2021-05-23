/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FCCKOrderFeedResponse : NSObject

{
    _Bool _reachedEnd;
    _Bool _reachedMinOrder;
    _Bool _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    unsigned long long _extent;
}

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSArray *feedItemAndArticleRecords;
@property (nonatomic) _Bool reachedEnd;
@property (nonatomic) _Bool reachedMinOrder;
@property (nonatomic) unsigned long long extent;
@property (nonatomic) _Bool wasDropped;

- (id)description;

@end
