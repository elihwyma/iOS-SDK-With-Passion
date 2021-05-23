/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface FCCKFeedResponse : NSObject

{
    _Bool _reachedEnd;
    _Bool _reachedOrderLimit;
    _Bool _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    unsigned long long _extent;
    NSData *_cursor;
}

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSArray *feedItemAndArticleRecords;
@property (nonatomic) _Bool reachedEnd;
@property (nonatomic) _Bool reachedOrderLimit;
@property (nonatomic) unsigned long long extent;
@property (copy, nonatomic) NSData *cursor;
@property (nonatomic) _Bool wasDropped;

- (id)description;

@end
