/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

#import <SiriCore/Swift-Protocol.h>

@class NSMapTable;

@interface SiriCorePingInfo : NSObject <Swift>

{
    NSMapTable *_outstandingPings;
    long long _pingAcknowledgedCount;
    double _avgPingTime;
}

@property (nonatomic, readonly) long long pingAcknowledgedCount;
@property (nonatomic, readonly) double avgPingTime;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)markPingSentWithIndex:(long long)arg1;
- (void)markPongReceivedWithIndex:(long long)arg1;
- (unsigned long long)numberOfUnacknowledgedPings;

@end
