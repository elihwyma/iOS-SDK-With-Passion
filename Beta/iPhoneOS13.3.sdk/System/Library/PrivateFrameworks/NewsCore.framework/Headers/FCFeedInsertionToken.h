/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFDBFeed;

@interface FCFeedInsertionToken : NSObject

{
    FCFDBFeed *_fromFeed;
    unsigned long long _fromOrder;
    unsigned long long _toOrder;
}

@property (retain, nonatomic) FCFDBFeed *fromFeed;
@property (nonatomic) unsigned long long fromOrder;
@property (nonatomic) unsigned long long toOrder;

@end
