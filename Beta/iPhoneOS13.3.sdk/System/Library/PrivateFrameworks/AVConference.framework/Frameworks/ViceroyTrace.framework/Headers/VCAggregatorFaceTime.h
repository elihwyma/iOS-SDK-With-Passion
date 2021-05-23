/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <ViceroyTrace/VCAggregator.h>

@class CallSegment, NSString, VCAdaptiveLearning, VCHistogram;

__attribute__((visibility("hidden")))
@interface VCAggregatorFaceTime : VCAggregator

{
    NSString *_remoteInterfaceType;
    NSString *_currentSegmentKey;
    NSString *_relayServer;
    int _relayType;
    NSString *_accessToken;
    NSString *_remoteOSBuild;
    CallSegment *_currentSegment;
    unsigned int _currentWidth;
    _Bool _currentDegradedVideoState;
    double _degradedVideoStartTime;
    double _degradedVideoDuration;
    _Bool _currentNoRemoteState;
    double _noRemoteStartTime;
    int _callTotalDurationTicks;
    int _callAggregatedDurationTicks;
    double _callAverageAudioErasuresRate;
    double _callAverageTargetBitrate;
    double _callAverageSendBitrate;
    double _callAverageReceiveBitrate;
    double _callAverageTotalVideoSendBitrate;
    double _callAverageVideoMediaSendBitrate;
    double _callAverageVideoHeaderSendBitrate;
    double _callAverageVideoFECSendBitrate;
    double _callAverageTotalVideoRecvBitrate;
    double _callAverageRTT;
    double _callPoorConnectionTotalLength;
    double _callPoorConnectionMaxLength;
    unsigned int _callPoorConnectionFrequency;
    double _callTotalVideoStallTime;
    double _callTotalMediaStallTime;
    double _callMaxMediaStallTime;
    double _callMaxVideoStallInterval;
    double _callTotalAudioStallTime;
    double _callMaxAudioStallInterval;
    double _lastReportedAudioStallTime;
    double _lastReportedVideoStallTime;
    double _lastReportedMediaStallTime;
    double _callLastVideoResolutionChangeTime;
    unsigned int _noRemoteAtCallEnd;
    unsigned int _callTotalMediaStallCount;
    unsigned int _remoteNoRemoteAtCallEnd;
    unsigned int _totalConnectionTime;
    unsigned int _startConnectionTime;
    unsigned int _transportConnectionTime;
    unsigned int _mediaConnectionTime;
    unsigned int _callMode;
    unsigned int _callDeviceRole;
    unsigned int _callTransportType;
    unsigned int _callErrorCode;
    unsigned int _callDetailedErrorCode;
    unsigned int _numberOfSegments;
    unsigned int _REDState;
    unsigned char _wifiAssistState;
    unsigned long long _lastReportedAudioPacketSent;
    unsigned long long _lastReportedVideoPacketSent;
    unsigned int _lastReportedAudioPacketRecv;
    unsigned int _lastReportedVideoPacketRecv;
    unsigned int _initialRampUpTime;
    int _initialBitrateDelta;
    int _initialBitrate;
    unsigned int _significantOOOPacketCount;
    unsigned int _totalVideoPacketsExpected;
    unsigned int _totalFIRDemandCounter;
    unsigned int _totalFIRCounter;
    unsigned int _videoFrameDecodedButSkippedCounter;
    unsigned int _videoFrameImcompleteNextTSCounter;
    unsigned int _videoFrameTotalIncompleteCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _videoFrameReceivedCounter;
    unsigned int _videoFrameExpectedCounter;
    unsigned int _videoFrameNonFECTotalCounter;
    unsigned int _videoFrameNonFECCompleteCounter;
    unsigned int _encodedVideoFrameCounter;
    unsigned int _captureVideoFrameCounter;
    unsigned int _negotiatedSwitches;
    unsigned int _remoteSwitches;
    unsigned int _lastReportedTotalCellDupTxDataBytes;
    unsigned int _lastReportedTotalCellDupRxDataBytes;
    unsigned int _lastReportedTotalUsedCellBudgetTxDataBytes;
    unsigned int _lastReportedTotalUsedCellBudgetRxDataBytes;
    unsigned int _lastReportedMBLRampDownCount;
    unsigned int _lastReportedSuddenBandwidthDropCount;
    unsigned char _duplicationType;
    unsigned long long _lastReportedTotalCellTxDataBytes;
    unsigned long long _lastReportedTotalCellRxDataBytes;
    unsigned long long _lastReportedTotalWifiTxDataBytes;
    unsigned long long _lastReportedTotalWifiRxDataBytes;
    unsigned int _totalDuplicationDuration;
    unsigned int _wifiToCellHandoverCount;
    unsigned int _cellToWifiHandoverCount;
    _Bool _isDuplicationEnabled;
    _Bool _remoteFaceTimeSwitchesAvailable;
    double _duplicationStartTime;
    VCHistogram *_callVideoSwitchPeriodHistogram;
    VCAdaptiveLearning *_adaptiveLearning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (id)initWithDelegate:(id)arg1;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (int)initialSettledBitrate;
- (int)previousISBRForSegment:(id)arg1;
- (int)adaptiveLearningState;
- (void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;
- (int)shortTermAverageTBRForSegment:(id)arg1;
- (int)longTermAverageTBRForSegment:(id)arg1;
- (int)longTermAverageISBRForSegment:(id)arg1;
- (int)shortTermAverageISBRForSegment:(id)arg1;
- (int)longTermAverageSATXBRForSegment:(id)arg1;
- (int)shortTermAverageSATXBRForSegment:(id)arg1;
- (int)longTermAverageSARBRForSegment:(id)arg1;
- (int)shortTermAverageSARBRForSegment:(id)arg1;
- (int)longTermAverageBWEForSegment:(id)arg1;
- (int)shortTermAverageBWEForSegment:(id)arg1;
- (void)saveCallSegmentHistory;
- (id)aggregatedSegmentReport:(int)arg1;
- (id)aggregatedSegmentQRReport;
- (id)duplicationIndicator;
- (_Bool)isLocalInterfaceTypeForSegment:(id)arg1 equalTo:(id)arg2;
- (void)flushCurrentSegment;
- (void)updateVideoFECStats:(id)arg1;
- (void)updateRelayInfo:(id)arg1;
- (void)startNewSegment;
- (_Bool)isDuplicationChanged:(_Bool)arg1;
- (void)updateRTStats:(id)arg1;
- (void)updateVideoResolution:(id)arg1;
- (void)updatePauseVideo:(_Bool)arg1;
- (void)updateRoleModeTransport:(unsigned short)arg1 deviceRole:(unsigned short)arg2 transportType:(unsigned short)arg3;
- (void)updateErrorCode:(id)arg1;
- (void)updateConnectionTelemetry:(id)arg1;
- (void)updateNoRemoteState:(_Bool)arg1;
- (void)updateConnectionTimes:(id)arg1;
- (void)updateVideoSwitchTimes;
- (void)updateAdaptiveLearningStats:(unsigned int)arg1 payload:(id)arg2;
- (void)updateSwitchConfiguration:(unsigned int)arg1 payload:(id)arg2;
- (void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3;
- (void)initAdaptiveLearningWithParameters:(id)arg1;
- (id)aggregatedCallReports;
- (id)aggregatedSessionReport;

@end
