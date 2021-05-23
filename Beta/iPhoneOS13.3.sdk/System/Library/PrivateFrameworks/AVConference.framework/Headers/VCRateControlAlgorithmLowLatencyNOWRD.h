/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmLowLatencyNOWRD : NSObject

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
    double _sendBitrateStartTime;
    double _lastSendDataTime;
    double _rampUpFrozenTime;
    double _lastRampDownTime;
    double _lastPositiveOWRDTime;
    double _lastCongestionTime;
    _Bool _isCongested;
    _Bool _isRampUpSettling;
    _Bool _isSendBitrateLimited;
    _Bool _isOvershoot;
    _Bool _belowNoRampUpBandwidth;
    _Bool _isFirstTimestampArrived;
    _Bool _isNewRateSentOut;
    unsigned int _actualSendBitrate;
    unsigned int _instantBitrate;
    unsigned int _fastRampDownBitrateRange;
    unsigned int _totalPacketReceived;
    unsigned int _mostBurstLoss;
    unsigned int _maxBurstyLoss;
    double _roundTripTime;
    double _packetLossRate;
    unsigned int _nwConnectionMaxThroughput;
    unsigned int _nwConnectionAvgThroughput;
    int _nwConnectionRateTrendSuggestion;
    double _nwConnectionAvgDelay;
    _Bool _shouldBlockRampUpForNWConnection;
    int _currentTierIndex;
    int _previousTierIndex;
    unsigned int _targetBitrate;
    unsigned int _actualBitrate;
    void *_logDump;
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
- (void)enableLogDump:(void *)arg1 enablePeriodicLogging:(_Bool)arg2;
- (_Bool)doRateControlWithNWConnectionStatistics:(CDStruct_b21f1e06)arg1;
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
- (_Bool)recentlyGoAboveRampUpBandwidth;
- (_Bool)keepOvershootingRampDownBandwidth;
- (void)setRateChangeCounter;
- (void)updateSendBitrateAndCheckIdlePeriod:(unsigned int)arg1 instantBitrate:(unsigned int)arg2;
- (unsigned short)getTimestampFromMicroTime:(double)arg1;
- (void)updateInternalStatus;
- (_Bool)shouldRampDownDueToNWConnection;
- (int)rampDownTierDueToNWConnection;
- (_Bool)shouldRampUpDueToNWConnection;
- (void)checkRampUpSettlingStatus;
- (_Bool)shouldRampDownDueToNOWRD;
- (_Bool)shouldRampDownDueToNOWRDAcc;

@end
