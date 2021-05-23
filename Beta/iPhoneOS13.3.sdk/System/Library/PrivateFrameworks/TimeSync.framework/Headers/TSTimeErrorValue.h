/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@interface TSTimeErrorValue : NSObject

{
    unsigned long long _timestamp;
    long long _error;
}

@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long error;

+ (id)timeErrorSequenceWithTimestamps:(unsigned long long *)arg1 timeError:(long long *)arg2 count:(long long)arg3;

- (id)description;
- (id)initWithTimestamp:(unsigned long long)arg1 andError:(long long)arg2;

@end
