/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamNOWRDLossEventRateControl : NSObject

{
    double _packetLossRate;
    double _roundTripTime;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    double _owrd;
    struct OWRDList OWRDList;
    double _nowrd;
    double _nowrdShort;
    double _nowrdAcc;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousTimestampDiff;
    int _sendTimestampWrappedAround;
    _Bool _lossEventBuffer[4];
    int _lossEventBufferIndex;
    double _lastLossEventTime;
    double _rampUpFrozenTime;
    double _rampUpFrozenDuration;
    double _rampDownLossRateThreshold;
    double _rampDownLossEventBitrateThreshold;
    double _rampDownLossEventCountThreshold;
    double _rampUpNoLossEventDurationRatio;
    double _rampUpStatusRateLimitedThreshold;
    double _nowrdRampDownThreshold;
    double _nowrdRampUpThreshold;
    double _nowrdAccRampDownThreshold;
    double _nowrdAccRampUpThreshold;
    unsigned int _rampUpStatus;
    unsigned int _rampDownStatus;
    int _state;
    double _rateControlTime;
    unsigned int _targetBitrate;
    unsigned int _averageReceivedBitrate;
    unsigned int _totalActualBitrate;
    unsigned int _doRateControlCounter;
    unsigned short _currentTierIndex;
    unsigned short _prevOperatingTierIndex;
    unsigned short _minTierIndex;
    unsigned short _maxTierIndex;
    double _rateControlInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) unsigned int targetBitrate;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) double nowrd;
@property (nonatomic, readonly) double nowrdShort;
@property (nonatomic, readonly) double nowrdAcc;
@property (nonatomic) double rateControlInterval;

- (id)init;
- (id)className;
- (void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;
- (void)updatePacketLossRate:(double)arg1 time:(double)arg2;
- (_Bool)shouldRampDown;
- (unsigned short)rampDownTier;
- (void)stateChange:(int)arg1;
- (_Bool)shouldRampUp;
- (unsigned short)rampUpTier;
- (void)calculateOWRDWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)stateExit;
- (void)stateEnter;
- (int)lossEventCount;
- (int)lossEventCountThresholdForBitrate:(unsigned int)arg1;
- (void)resetLossEventBuffer;
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned int)arg5;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)printRateControlFullInfoWithLogDump:(void *)arg1 time:(double)arg2 videoStall:(_Bool)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned int)arg5;
- (void)calculateNOWRD:(double)arg1 time:(double)arg2;

@end
