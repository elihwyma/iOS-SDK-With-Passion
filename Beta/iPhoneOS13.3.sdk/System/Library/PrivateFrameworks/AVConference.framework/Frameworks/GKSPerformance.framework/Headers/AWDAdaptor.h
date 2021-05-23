/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
 */

#import <Foundation/NSObject.h>

@class AWDStats, NSMutableArray, TimingCollection;

@interface AWDAdaptor : NSObject

{
    AWDStats *_awdstat;
    TimingCollection *_videoQualityTimers;
    _Bool _callStarted;
    _Bool _RTStatsReceived;
    NSMutableArray *_rtpPacketLossRateArray;
    NSMutableArray *_jitterBufferUnderflowRateArray;
    NSMutableArray *_frameErasureRateArray;
    NSMutableArray *_jitterBufferResidencyTimeArray;
}

@property (retain) AWDStats *awdstat;
@property _Bool callStarted;
@property _Bool RTStatsReceived;
@property (retain) TimingCollection *videoQualityTimers;

- (id)init;
- (void)dealloc;
- (void)processSecondDisplayLogTransportInfoStats;
- (void)generateSecondDisplayAggregatedCallStats:(id)arg1;
- (void)updateMomentsStats:(id)arg1;
- (void)parseAudioTierChange:(id)arg1;
- (void)parseRTStats:(id)arg1;
- (void)parseVideoStats:(unsigned short)arg1 dict:(id)arg2;
- (void)parseConnectivityTimings:(id)arg1;
- (void)parseVideoDegraded:(id)arg1 direction:(unsigned short)arg2;
- (void)parseAWDEvent:(unsigned short)arg1 dict:(id)arg2;
- (void)parseCellTechChange:(unsigned short)arg1 dict:(id)arg2;
- (void)parseVideoProperty:(unsigned short)arg1 dict:(id)arg2;
- (void)parseConnectionEstablishment:(unsigned short)arg1 dict:(id)arg2;
- (void)parseDuplication:(unsigned short)arg1 dict:(id)arg2;
- (void)parseWindowMode:(unsigned short)arg1 dict:(id)arg2;
- (void)parseDisconnectReport:(unsigned short)arg1 dict:(id)arg2;
- (void)wifiCallingAddSamples:(id)arg1;
- (_Bool)wifiCallingAddSamplesGenerateAndSendCallEndReport:(id)arg1;
- (void)parseDTXReport:(unsigned short)arg1 dict:(id)arg2;
- (void)parseModeRoleTransportReport:(unsigned short)arg1 dict:(id)arg2;
- (void)parseHomeKitIPCameraStreamStart:(id)arg1;
- (void)parseHomeKitIPCameraFirstVideoFrame:(id)arg1;
- (void)parseHomeKitIPCameraRealtimeStatsReport:(id)arg1;
- (void)updateHomeKitIPCameraPLISentReport;
- (void)updateHomeKitIPCameraKeyFrameReceivedReport;
- (void)parseFaceTimeAggregatedSegmentStats:(id)arg1;
- (void)generateFaceTimeAggregatedCallStats:(id)arg1;
- (unsigned int *)generateHistogramForValues:(id)arg1 withBinBoundaries:(id)arg2;
- (double)computeMean:(id)arg1;
- (double)computeMedian:(id)arg1;
- (double)compute95thPercentile:(id)arg1;
- (void)sendMessageWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3;

@end
