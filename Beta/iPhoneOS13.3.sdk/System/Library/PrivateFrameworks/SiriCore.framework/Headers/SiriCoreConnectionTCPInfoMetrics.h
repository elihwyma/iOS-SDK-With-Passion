/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SiriCoreConnectionTCPInfoMetrics : NSObject

{
    NSString *_interfaceName;
    NSNumber *_rttCurrent;
    NSNumber *_rttSmoothed;
    NSNumber *_rttVariance;
    NSNumber *_rttBest;
    NSNumber *_packetsSent;
    NSNumber *_bytesSent;
    NSNumber *_bytesRetransmitted;
    NSNumber *_bytesUnacked;
    NSNumber *_packetsReceived;
    NSNumber *_bytesReceived;
    NSNumber *_duplicateBytesReceived;
    NSNumber *_outOfOrderBytesReceived;
    NSNumber *_sendBandwidth;
    NSNumber *_synRetransmits;
    NSNumber *_tfoSynDataAcked;
}

@property (copy, nonatomic, readonly) NSString *interfaceName;
@property (copy, nonatomic, readonly) NSNumber *rttCurrent;
@property (copy, nonatomic, readonly) NSNumber *rttSmoothed;
@property (copy, nonatomic, readonly) NSNumber *rttVariance;
@property (copy, nonatomic, readonly) NSNumber *rttBest;
@property (copy, nonatomic, readonly) NSNumber *packetsSent;
@property (copy, nonatomic, readonly) NSNumber *bytesSent;
@property (copy, nonatomic, readonly) NSNumber *bytesRetransmitted;
@property (copy, nonatomic, readonly) NSNumber *bytesUnacked;
@property (copy, nonatomic, readonly) NSNumber *packetsReceived;
@property (copy, nonatomic, readonly) NSNumber *bytesReceived;
@property (copy, nonatomic, readonly) NSNumber *duplicateBytesReceived;
@property (copy, nonatomic, readonly) NSNumber *outOfOrderBytesReceived;
@property (copy, nonatomic, readonly) NSNumber *sendBandwidth;
@property (copy, nonatomic, readonly) NSNumber *synRetransmits;
@property (copy, nonatomic, readonly) NSNumber *tfoSynDataAcked;

- (id)init;
- (id)description;
- (id)initWithInterfaceName:(id)arg1 rttCurrent:(id)arg2 rttSmoothed:(id)arg3 rttVariance:(id)arg4 rttBest:(id)arg5 packetsSent:(id)arg6 bytesSent:(id)arg7 bytesRetransmitted:(id)arg8 bytesUnacked:(id)arg9 packetsReceived:(id)arg10 bytesReceived:(id)arg11 duplicateBytesReceived:(id)arg12 outOfOrderBytesReceived:(id)arg13 sendBandwidth:(id)arg14 synRetransmits:(id)arg15 tfoSynDataAcked:(id)arg16;

@end
