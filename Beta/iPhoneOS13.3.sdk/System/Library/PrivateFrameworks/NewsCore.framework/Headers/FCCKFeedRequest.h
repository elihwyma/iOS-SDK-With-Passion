/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface FCCKFeedRequest : NSObject

{
    NSString *_feedID;
    NSData *_startCursor;
    unsigned long long _startOrder;
    unsigned long long _orderLimit;
    unsigned long long _softResultsLimit;
    unsigned long long _hardResultsLimit;
}

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSData *startCursor;
@property (nonatomic) unsigned long long startOrder;
@property (nonatomic) unsigned long long orderLimit;
@property (nonatomic) unsigned long long softResultsLimit;
@property (nonatomic) unsigned long long hardResultsLimit;

- (id)init;
- (id)description;

@end
