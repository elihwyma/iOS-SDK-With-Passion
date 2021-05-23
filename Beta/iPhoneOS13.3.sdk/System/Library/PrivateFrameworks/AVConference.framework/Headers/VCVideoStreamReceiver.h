/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoReceiverBase.h>

@class NSObject, NSString, VCMediaStreamStats, VCMediaStreamSynchronizer, VCVideoStreamRateAdaptation, VideoAttributes;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCVideoStreamReceiver : VCVideoReceiverBase

{
    struct tagHANDLE *_hRTP;
    struct OpaqueCMMemoryPool *_blockBufferMemoryPool;
    struct __CFAllocator *_blockBufferMemoryPoolAllocator;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    _Bool _receivedFirstPacket;
    _Bool _receivedFirstRemoteFrame;
    unsigned short _lastSequenceNumber;
    int _sequenceNumberOutOfOrder;
    unsigned char _firSequenceNumber;
    double _lastFIRArrivalTime;
    VCVideoStreamRateAdaptation *_rateAdaptation;
    struct opaqueCMBufferQueue *_videoQueue;
    unsigned int _mostRecentTimestamp;
    unsigned int _lastVideoTimestamp;
    unsigned int _videoTimestampWrapCount;
    struct opaqueCMFormatDescription *_formatDescription;
    NSObject<OS_dispatch_queue> *_videoStreamReceiverQueue;
    struct OpaqueFigThread *_networkReceiveThread;
    _Bool _runNetworkReceiveThread;
    int _sRecvReset;
    struct VideoPacketBuffer_t *_videoPacketBuffer;
    VideoAttributes *_remoteVideoAttributes;
    VCMediaStreamSynchronizer *_mediaStreamSynchronizer;
    int _remoteVideoCamera;
    _Bool _remoteVideoMirrored;
    _Bool _enableCVO;
    unsigned long long _cvoExtensionID;
    unsigned long long _lastKeyFrameSampleBufferSize;
    CDStruct_1b6d18a9 _lastFrameTime;
    CDStruct_1b6d18a9 _lastDisplayTime;
    VCMediaStreamStats *_stats;
    double _reportingIntervalStartTime;
    double _reportingLastUpdateTime;
    unsigned int _receivedBytes;
    unsigned int _videoStallDurationMillis;
    double _videoStallStartTime;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingModuleID;
    _Bool _enableReceiveBitstreamDump;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pauseVideo;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)startVideo;
- (void)stopVideo;
- (void)handleActiveConnectionChange:(id)arg1;
- (_Bool)startSynchronization:(id)arg1;
- (void)stopSynchronization;
- (int)stopNetworkReceiveThread;
- (void)teardownDecodeSession:(_Bool)arg1;
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (int)startNetworkReceiveThread;
- (void)setSyncSource:(id)arg1;
- (id)syncSource;
- (void)handleAlarmForTimeStamp:(unsigned int)arg1;
- (int)processVideoRTP;
- (int)processVideoRTCP;
- (void)updateVideoStallStatus:(_Bool)arg1;
- (int)scheduleDecodeForFrameWithBuffer:(struct VCVideoReceiverSampleBuffer_t *)arg1 timestamp:(unsigned int)arg2 hostTime:(double)arg3 showFrame:(_Bool)arg4;
- (void)scheduleDecodeForTimestamp:(unsigned int)arg1;
- (void)scheduleVideoDecode:(unsigned int *)arg1 schedule_n:(int)arg2;
- (void)updateSequenceNumber:(unsigned short)arg1;
- (void)processReceptionReportBlock:(struct tagRTCP_RRB *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (int)decodeFrame:(struct opaqueCMSampleBuffer *)arg1 showFrame:(_Bool)arg2;
- (void)createDecodeSession:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)canDequeue:(struct opaqueCMBufferQueue *)arg1 forTimestamp:(unsigned int)arg2;
- (void)dequeueAndDecodeForTimestamp:(unsigned int)arg1;
- (_Bool)handleRemoteVideoAttributesChange:(struct __CVBuffer *)arg1;
- (id)initWithRTP:(struct tagHANDLE *)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3 dumpID:(unsigned int)arg4 reportingParentID:(int)arg5 statisticsCollector:(id)arg6;
- (void)setEnableCVO:(_Bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;
- (void *)networkReceivePackets;
- (void)rtcpSendIntervalElapsed;
- (int)showDecodedFrame:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;

@end
