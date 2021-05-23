/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmStabilizedNOWRD : NSObject

{
    struct VCRateControlAlgorithmConfig _config;
    VCRateControlMediaController *_mediaController;
    int _state;
    int _rampUpStatus;
    int _rampDownStatus;
    _Bool _paused;
    unsigned short _echoedTimestamp;
    unsigned short _previousTimestamp;
    unsigned short _queuingDelayTimestamp;
    unsigned int _receiveTimestamp;
    unsigned int _timestampWrapAroundCounter;
    double _rateControlTime;
    unsigned int _rateControlCounter;
    unsigned int _rateChangeCounter;
    unsigned int _lastRateChangeCounter;
    unsigned int _newOWRDSampleCollected;
    unsigned int _remoteBandwidthEstimation;
    unsigned int _localBandwidthEstimation;
    double _owrd;
    CDStruct_55dce769 _owrdList;
    _Bool _isOWRDListReady;
    _Bool _isOWRDConstant;
    double _nowrd;
    double _nowrdShort;
    double _nowrdAcc;
    double _previousNOWRD;
    double _lastOWRDChangeTime;
    double _lastNoOvershootBWEstimationTime;
    double _firstBelowNoRampUpBandwidthTime;
    double _sendBitrateLimitedStartTime;
    double _rampUpFrozenTime;
    double _stabilizationTime;
    double _rateChangeSystemTime;
    double _lastRampDownTime;
    double _lastPositiveOWRDTime;
    _Bool _isCongested;
    _Bool _isRampUpSettling;
    _Bool _isStable;
    _Bool _isSendBitrateLimited;
    _Bool _isOvershoot;
    _Bool _belowNoRampUpBandwidth;
    _Bool _isFirstTimestampArrived;
    _Bool _isNewRateSentOut;
    double _inVideoBitrate;
    double _outVideoBitrate;
    double _inAudioBitrate;
    double _outAudioBitrate;
    unsigned int _actualVideoBitrateFromAFRC;
    unsigned int _fastRampDownBitrateRange;
    unsigned int _consecutiveRampDown;
    double _lastTimeStartRampingDown;
    double _basebandNotificationArrivalTime;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNormalizedBDCD;
    double _basebandNormalizedQueuingDelay;
    _Bool _isWaitingForBasebandRampDown;
    double _lastBasebandRampDownTime;
    double _lastHighNBDCDTime;
    int _basebandAdditionalTiersForRampUp;
    unsigned int _totalPacketReceived;
    unsigned int _packetReceivedVideo;
    unsigned int _mostBurstLoss;
    unsigned int _packetBurstLoss;
    unsigned int _roundTripTimeTick;
    double _roundTripTime;
    double _packetLossRate;
    double _packetLossRateVideo;
    int _currentTierIndex;
    int _previousTierIndex;
    unsigned int _targetBitrate;
    unsigned int _actualBitrate;
    void *_logDump;
    void *_logBasebandDump;
    _Bool _isPeriodicLoggingEnabled;
    _Bool _didMBLRampDown;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (id)init;
- (void)dealloc;
- (id)className;
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;
- (void)enableBasebandDump:(void *)arg1;
- (_Bool)doRateControlWithStatistics:(CDStruct_b21f1e06)arg1;
- (_Bool)doRateControlWithBasebandStatistics:(CDStruct_b21f1e06)arg1;
- (void)enableLogDump:(void *)arg1 enablePeriodicLogging:(_Bool)arg2;
- (_Bool)shouldRampDown;
- (int)rampDownTier;
- (_Bool)shouldRampUp;
- (int)rampUpTier;
- (void)stateExit;
- (void)stateEnter;
- (void)resetRampingStatus;
- (void)logToDumpFilesWithString:(id)arg1;
- (_Bool)doRateControlWithVCRCStatistics:(CDStruct_b21f1e06)arg1;
- (double)getDoubleTimeFromTimestamp:(unsigned int)arg1 timestampTick:(unsigned int)arg2 wrapAroundCounter:(unsigned int)arg3;
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;
- (void)checkBandwidthOvershoot;
- (void)checkCongestionStatus;
- (void)stateChangeTo:(int)arg1;
- (void)printRateControlInfoToLogDump;
- (_Bool)shouldRampDownDueToBaseband;
- (int)rampDownTierDueToBaseband;
- (_Bool)shouldRampUpDueToBaseband;
- (_Bool)recentlyGoAboveRampUpBandwidth;
- (_Bool)keepOvershootingRampDownBandwidth;
- (unsigned short)getTimestampFromMicroTime:(double)arg1;
- (void)updateInternalStatus;
- (_Bool)shouldRampDownDueToNOWRD;
- (_Bool)shouldRampDownDueToNOWRDAcc;
- (void)setBitrateUnstable;
- (void)calculateRoundTripTime;
- (void)calculatePacketLossWithReceivedPacketCount:(unsigned int)arg1 receivedPacketCountVideo:(unsigned int)arg2 packetBurstLoss:(unsigned short)arg3;
- (int)basebandAdditionalTiersForRampUp;
- (void)checkMediaQueueBitrates;
- (void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2;
- (void)updateCongestionStatusWhenRampUp;
- (void)updateCongestionStatusWhenRampDown:(double)arg1;

@end
