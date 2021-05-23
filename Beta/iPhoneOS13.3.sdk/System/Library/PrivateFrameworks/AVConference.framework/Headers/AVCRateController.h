/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCBasebandCongestionDetector, AVCRateControlFeedbackController, AVCStatisticsCollector, NSString, VCNWConnectionCongestionDetector, VCRateControlMediaController;

@protocol VCRateControlAlgorithm;

__attribute__((visibility("hidden")))
@interface AVCRateController : NSObject

{
    id _rateControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    AVCRateControlFeedbackController *_feedbackController;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    VCNWConnectionCongestionDetector *_nwConnectionCongestionDetector;
    VCRateControlMediaController *_mediaController;
    id <VCRateControlAlgorithm> _rateControlAlgorithm;
    struct AVCRateControlConfig _configuration;
    unsigned int _targetBitrateCap;
    unsigned int _estimatedBandwidthCap;
    unsigned int _expectedBitrate;
    unsigned int _actualBitrate;
    unsigned int _targetBitrate;
    unsigned int _rateChangeCounter;
    unsigned int _roundTripTimeMilliseconds;
    unsigned int _packetLossPercentage;
    unsigned int _packetLossPercentageVideo;
    unsigned int _totalPacketsReceived;
    unsigned int _totalPacketsSent;
    unsigned int _totalBytesSent;
    unsigned int _totalBytesReceived;
    unsigned int _burstPacketLoss;
    unsigned int _owrd;
    _Bool _isNetworkCongested;
    void *_logDump;
    void *_logFeedbackDump;
    void *_logBasebandDump;
    void *_logNWDump;
    _Bool _isDumpFileEnabled;
    NSString *_dumpID;
    _Bool _isPeriodicLoggingEnabled;
    _Bool _isBasebandEnabled;
    _Bool _isForSimulation;
    _Bool _isUplink;
    _Bool _paused;
    _Bool _useExternalThread;
    _Bool _didConfigured;
    double _lastDefaultsReadTime;
    int _forcedTargetBitrate;
    int _forcedMaxBitrate;
    id _reportingAgentWeak;
    int _reportingModuleID;
    unsigned int _lastReportFlushedVideoPacketCount;
    unsigned int _lastReportFlushedAudioPacketCount;
    _Bool _isTargetBitrateOvershootReported;
    double _lastTimeTargetBitrateOvershootRecorded;
    _Bool _isUnexpectedLowTargetBitrateReported;
    double _lastTimeUnexpectedLowTargetBitrateRecorded;
    _Bool _isUnexpectedHighRTTReported;
    unsigned int _lastReportedBandwidthEstimation;
    unsigned int _totalSuddenBandwidthDropCount;
    unsigned int _totalMBLRampDownCount;
}

@property (retain, nonatomic) VCRateControlMediaController *mediaController;
@property (nonatomic, readonly) unsigned int targetBitrate;
@property (nonatomic, readonly) struct AVCRateControlConfig configuration;
@property (nonatomic) unsigned int targetBitrateCap;
@property (nonatomic) unsigned int estimatedBandwidthCap;
@property (nonatomic) unsigned int expectedBitrate;
@property (readonly) id reportingAgent;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (retain, nonatomic) AVCRateControlFeedbackController *feedbackController;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (retain, nonatomic) VCNWConnectionCongestionDetector *nwConnectionCongestionDetector;
@property (nonatomic, getter=isPaused) _Bool paused;

- (void)dealloc;
- (void)configure:(struct AVCRateControlConfig)arg1;
- (id)initWithDelegate:(id)arg1 dumpID:(id)arg2 forSimulation:(_Bool)arg3 isUplink:(_Bool)arg4 reportingAgent:(id)arg5 useExternalThread:(_Bool)arg6;
- (void)configureInternal:(struct AVCRateControlConfig)arg1;
- (void)registerPeriodicTask;
- (void)deregisterPeriodicTask;
- (void)releaseLogDumpFiles;
- (_Bool)isRadioTechnologyOnCellular:(unsigned int)arg1;
- (void)createBasebandLogDumpFile;
- (void)createNWConnectionLogDumpFile;
- (void)getRealTimeStatsForServerBasedTxOnly:(struct __CFDictionary *)arg1;
- (void)getRealTimeStatsForServerBasedRxOnly:(struct __CFDictionary *)arg1;
- (void)getRealTimeStatsForiPadCompanion:(struct __CFDictionary *)arg1;
- (void)getRealTimeStats:(struct __CFDictionary *)arg1;
- (void)periodicTask:(void *)arg1;
- (unsigned int)rateControlModeFromAVConferenceOperatingMode:(int)arg1;
- (unsigned int)radioAccessTechnologyFromAVConferenceCellTech:(int)arg1 isCellular:(_Bool)arg2;
- (int)minTierAboveBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (id)indicatorFromRadioTech:(unsigned int)arg1;
- (int)maxTierBelowBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (void)createLogDumpFiles:(id)arg1;
- (_Bool)isRadioTechnologyOnWiFiOrLTE:(unsigned int)arg1;
- (void)configureAlgorithmWithRestart:(_Bool)arg1;
- (int)initialBitrateTierFromLearntBitrateWithLocalTechnology:(unsigned int)arg1 remoteTech:(unsigned int)arg2 defaultTier:(int)arg3;
- (void)setDefaultAlgorithmConfiguration:(struct VCRateControlAlgorithmConfig *)arg1;
- (void)createVCRateControlAlgorithmWithConfiguration:(struct VCRateControlAlgorithmConfig)arg1;
- (void)reportTargetBitrateChange:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;
- (void)doRateControlWithStatistics:(CDStruct_b21f1e06)arg1;
- (void)doRateControlWithBasebandStatistics:(CDStruct_b21f1e06)arg1;
- (void)doRateControlWithNWConnectionStatistics:(CDStruct_b21f1e06)arg1;
- (void)printFeedbackMessage:(CDStruct_b21f1e06)arg1;
- (void)checkAndReportAbnormalSymptoms;
- (void)reportNetworkStatistics;
- (void)printBasebandNotificationStatistics:(CDStruct_b21f1e06)arg1;
- (void)printNWConnectionStatistics:(CDStruct_b21f1e06)arg1;
- (void)loadDefaultSettings;
- (id)initWithDelegate:(id)arg1 dumpID:(id)arg2 isUplink:(_Bool)arg3 reportingAgent:(id)arg4;
- (void)configureWithOperatingMode:(int)arg1 isLocalCellular:(_Bool)arg2 localCellTech:(int)arg3 isRemoteCellular:(_Bool)arg4 remoteCellTech:(int)arg5 bitrateCapKbps:(unsigned int)arg6;

@end
