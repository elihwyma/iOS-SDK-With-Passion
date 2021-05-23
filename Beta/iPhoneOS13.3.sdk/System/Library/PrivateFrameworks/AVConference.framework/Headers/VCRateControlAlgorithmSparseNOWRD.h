/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmSparseNOWRD : NSObject

{
    struct VCRateControlAlgorithmConfig _config;
    VCRateControlMediaController *_mediaController;
    int _state;
    int _rampUpStatus;
    int _rampDownStatus;
    _Atomic _Bool _paused;
    double _pauseStartTime;
    double _rateControlTime;
    unsigned short _previousTimestamp;
    unsigned int _timestampWrapAroundCounter;
    unsigned int _rateControlCounter;
    unsigned int _rateChangeCounter;
    unsigned int _lastRateChangeCounter;
    unsigned int _remoteBandwidthEstimation;
    unsigned int _localBandwidthEstimation;
    CDStruct_55dce769 _owrdList;
    _Bool _isOWRDListReady;
    _Bool _isOWRDConstant;
    double _owrd;
    double _nowrd;
    double _nowrdShort;
    double _nowrdAcc;
    double _lastOWRDChangeTime;
    double _lastCongestionTime;
    double _lastRampUpTime;
    double _rampUpFrozenTime;
    _Bool _isCongested;
    _Bool _isFirstTimestampArrived;
    _Bool _isNewRateSentOut;
    unsigned int _actualSendBitrate;
    unsigned int _expectedBitrate;
    _Bool _isSendBitrateLimited;
    _Bool _lossEventBuffer[5];
    int _lossEventBufferIndex;
    double _lastLossEventRampDownTime;
    int _lossEventCount;
    _Bool _isOvershoot;
    _Bool _belowNoRampUpBandwidth;
    double _lastNoOvershootBWEstimationTime;
    double _firstBelowNoRampUpBandwidthTime;
    int _recentTierWindow[256];
    unsigned int _recentTierWindowSize;
    unsigned int _recentTierWindowIndex;
    unsigned int _totalTierNumbersInWindow;
    double _recentAverageTier;
    double _lastTimeDetectNoOscillation;
    _Bool _isTargetBitrateOscillating;
    int _deviationChangeCount;
    unsigned int _totalPacketReceived;
    unsigned int _totalPacketSent;
    unsigned int _mostBurstLoss;
    unsigned int _roundTripTimeTick;
    double _roundTripTime;
    double _averageRoundTripTime;
    double _packetLossRate;
    double _previousPacketLossRate;
    double _basebandNotificationArrivalTime;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNormalizedBDCD;
    double _basebandNormalizedQueuingDelay;
    _Bool _isWaitingForBasebandRampDown;
    double _lastBasebandRampDownTime;
    double _lastHighNBDCDTime;
    double _lastEmergencyBasebandRampDownTime;
    int _basebandAdditionalTiersForRampUp;
    int _currentTierIndex;
    int _previousTierIndex;
    unsigned int _targetBitrate;
    unsigned int _actualBitrate;
    void *_logDump;
    void *_logBasebandDump;
    _Bool _isPeriodicLoggingEnabled;
    _Bool _didMBLRampDown;
    double _packetLossRateVideo;
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
- (int)lossEventCount;
- (void)resetLossEventBuffer;
- (void)resetRampingStatus;
- (void)resetOscillationDetection;
- (void)logToDumpFilesWithString:(id)arg1;
- (_Bool)doRateControlWithVCRCStatistics:(CDStruct_b21f1e06)arg1;
- (double)getDoubleTimeFromTimestamp:(unsigned int)arg1 timestampTick:(unsigned int)arg2 wrapAroundCounter:(unsigned int)arg3;
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;
- (void)checkActualBitrates;
- (void)checkBandwidthOvershoot;
- (void)updateLossEvent:(double)arg1 time:(double)arg2;
- (void)checkPaused;
- (void)checkCongestionStatus;
- (void)stateChangeTo:(int)arg1;
- (void)checkTargetBitrateOscillation;
- (void)printRateControlInfoToLogDump;
- (_Bool)shouldRampDownDueToBaseband;
- (int)rampDownTierDueToBaseband;
- (_Bool)shouldRampUpDueToBaseband;
- (_Bool)recentlyGoAboveRampUpBandwidth;
- (_Bool)keepOvershootingRampDownBandwidth;
- (void)updateLastEmergencyBasebandRampDownTimeWithTierIndex:(int)arg1;
- (_Bool)updateRecentTierWindow;
- (int)countDeviationChangeInTierWindow;

@end
