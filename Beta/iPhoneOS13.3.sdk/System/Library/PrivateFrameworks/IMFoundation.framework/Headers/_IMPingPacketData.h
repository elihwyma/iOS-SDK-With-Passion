/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@interface _IMPingPacketData : NSObject

{
    int _sequenceNumber;
    _Bool _timedOut;
    int _error;
    struct timeval _timeSent;
    double _rtt;
}

@property (nonatomic, readonly) int sequenceNumber;
@property (nonatomic, readonly) _Bool timedOut;
@property (nonatomic, readonly) struct timeval timeSent;
@property (nonatomic, readonly) int error;
@property (nonatomic, readonly) double rtt;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSequeneceNumber:(int)arg1 timesent:(struct timeval *)arg2 error:(int)arg3;
- (void)_markPacketAsTimedOut:(double)arg1;
- (void)_returnPacketArrived;

@end
