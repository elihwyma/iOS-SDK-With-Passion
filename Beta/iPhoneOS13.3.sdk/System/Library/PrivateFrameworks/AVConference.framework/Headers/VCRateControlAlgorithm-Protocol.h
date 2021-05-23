/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@class VCRateControlMediaController;

@protocol VCRateControlAlgorithm <Swift>

@property (retain, nonatomic) VCRateControlMediaController *mediaController;
@property (nonatomic, readonly) unsigned int targetBitrate;
@property (nonatomic, readonly) unsigned int rateChangeCounter;
@property (nonatomic, readonly) _Bool isCongested;
@property (nonatomic, readonly) unsigned int mostBurstLoss;
@property (nonatomic, readonly) double packetLossRate;
@property (nonatomic, readonly) double packetLossRateVideo;
@property (nonatomic, readonly) unsigned int totalPacketReceived;
@property (nonatomic, readonly) double roundTripTime;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) _Bool isNewRateSentOut;
@property (nonatomic) unsigned int localBandwidthEstimation;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic, readonly) unsigned int actualBitrate;
@property (nonatomic) _Bool didMBLRampDown;

- (unsigned short)configure:restartRequired: /* Error: Ran out of types for this method. */;
- (unsigned short)enableBasebandDump: /* Error: Ran out of types for this method. */;
- (unsigned short)doRateControlWithStatistics: /* Error: Ran out of types for this method. */;
- (unsigned short)enableLogDump:enablePeriodicLogging: /* Error: Ran out of types for this method. */;

@end
