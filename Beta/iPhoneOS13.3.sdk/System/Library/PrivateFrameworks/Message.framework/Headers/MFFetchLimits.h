/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface MFFetchLimits : NSObject

{
    unsigned long long _fetchMinBytes;
    unsigned long long _fetchMaxBytes;
    unsigned long long _minBytesLeft;
}

@property (nonatomic) unsigned long long fetchMinBytes;
@property (nonatomic) unsigned long long fetchMaxBytes;
@property (nonatomic) unsigned long long minBytesLeft;

- (id)init;
- (id)description;

@end
