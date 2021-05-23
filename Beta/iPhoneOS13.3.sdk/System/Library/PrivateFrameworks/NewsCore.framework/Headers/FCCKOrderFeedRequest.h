/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCCKOrderFeedRequest : NSObject

{
    NSString *_feedID;
    unsigned long long _maxOrder;
    unsigned long long _minOrder;
    unsigned long long _resultsLimit;
    unsigned long long _topK;
}

@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) unsigned long long maxOrder;
@property (nonatomic) unsigned long long minOrder;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) unsigned long long topK;

- (id)init;
- (id)description;

@end
