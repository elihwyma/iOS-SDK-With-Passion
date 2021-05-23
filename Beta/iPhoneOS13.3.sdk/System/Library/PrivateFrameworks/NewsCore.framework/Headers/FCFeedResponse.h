/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFeedRange, NSArray, NSError, NSString;

@interface FCFeedResponse : NSObject

{
    _Bool _exhaustedRequestRange;
    NSString *_feedID;
    NSArray *_feedItems;
    NSError *_error;
}

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSArray *feedItems;
@property (nonatomic) _Bool exhaustedRequestRange;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic, readonly) FCFeedRange *feedRange;

- (id)feedResponseByMergingWithResponse:(id)arg1;

@end
