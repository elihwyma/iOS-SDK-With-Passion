/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@protocol VCVideoStreamRateControlProtocol <Swift>

@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) unsigned int targetBitrate;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) double nowrd;
@property (nonatomic, readonly) double nowrdShort;
@property (nonatomic, readonly) double nowrdAcc;
@property (nonatomic) double rateControlInterval;

- (unsigned short)setMaxTierIndex:minTierIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)doRateControlWithTime:roundTripTime:packetLossRate:operatingTierIndex:averageReceivedBitrate: /* Error: Ran out of types for this method. */;
- (unsigned short)updateRTPReceiveWithTimestamp:sampleRate:time: /* Error: Ran out of types for this method. */;

@end
