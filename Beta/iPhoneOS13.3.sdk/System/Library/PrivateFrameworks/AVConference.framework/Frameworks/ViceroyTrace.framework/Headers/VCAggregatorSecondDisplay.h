/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <ViceroyTrace/VCAggregator.h>

@class NSMutableDictionary, NSString, VCHistogram;

__attribute__((visibility("hidden")))
@interface VCAggregatorSecondDisplay : VCAggregator

{
    double _sessionTotalDuration;
    double _lastReportedVideoStallTime;
    double _totalVideoStallTime;
    double _maxVideoStallInterval;
    int _videoStallCount;
    int _avgFramerate;
    int _averageReceiveBitrate;
    int _averageSendBitrate;
    int _maxSendBitrate;
    int _averageTargetBitrate;
    int _maxTargetBitrate;
    int _maxPLR;
    int _totalFIRCounter;
    int _videoWidth;
    int _videoHeight;
    int _codec;
    int _transportType;
    double _averageExpirationTime;
    double _maxExpirationTime;
    double _averageWiFiPacketDelay;
    unsigned int _averageWiFiThroughput;
    unsigned int _totalNACKCounter;
    unsigned int _averageBurstyPacketLossCount;
    unsigned int _maxBurstyPacketLossCount;
    unsigned int _averagePacketLossRate;
    unsigned int _averageBandwidthEstimation;
    unsigned int _maxBandwidthEstimation;
    unsigned int _averageJitterQueueSize;
    unsigned int _maxJitterQueueSize;
    unsigned int _averageRoundTripTime;
    unsigned int _maxRoundTripTime;
    unsigned int _averageHIDEventLatencySampleCount;
    unsigned int _averageHIDEventLatency;
    unsigned int _maxHIDEventLatency;
    unsigned int _minHIDEventLatency;
    unsigned int _videoFrameNonFECTotalCounter;
    unsigned int _videoFrameNonFECCompleteCounter;
    unsigned int _videoFrameDisplayedCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _videoFrameReceivedCounter;
    unsigned int _videoFrameExpectedCounter;
    unsigned int _rtcpTimeoutCount;
    VCHistogram *_RBR;
    VCHistogram *_TBR;
    VCHistogram *_SBR;
    VCHistogram *_VST;
    VCHistogram *_PLR;
    VCHistogram *_BPL;
    VCHistogram *_EXT;
    VCHistogram *_BWE;
    VCHistogram *_VJS;
    VCHistogram *_RTT;
    VCHistogram *_HEL;
    NSMutableDictionary *_fecStatsDict;
    NSString *_channelSequence;
    CDStruct_f2f7ecfd _channelSequenceStats;
    NSString *_previousChannelSequence;
    CDStruct_f2f7ecfd _previousChannelSequenceStats;
    NSString *_remoteOSBuildVersion;
    NSString *_remoteFrameworkVersion;
    NSString *_remoteDeviceModel;
}

@property (copy, nonatomic) NSString *channelSequence;
@property (retain, nonatomic) NSString *previousChannelSequence;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)saveCallSegmentHistory;
- (id)aggregatedSegmentReport:(int)arg1;
- (id)aggregatedSegmentQRReport;
- (void)flushCurrentSegment;
- (void)updateVideoFECStats:(id)arg1;
- (void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3;
- (void)initAdaptiveLearningWithParameters:(id)arg1;
- (id)aggregatedCallReports;
- (id)aggregatedSessionReport;
- (id)sessionFECReport;
- (void)processRealtimeStats:(id)arg1;
- (void)updateReceiverVideoStreamConfiguration:(id)arg1;
- (void)updateSenderVideoStreamConfiguration:(id)arg1;

@end
