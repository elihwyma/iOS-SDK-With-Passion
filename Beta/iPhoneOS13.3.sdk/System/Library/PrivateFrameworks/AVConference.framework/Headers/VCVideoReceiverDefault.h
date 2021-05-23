/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoReceiverBase.h>

@class VCDisplayLink, VCVideoStreamRateAdaptationFeedbackOnly, VideoAttributes;

__attribute__((visibility("hidden")))
@interface VCVideoReceiverDefault : VCVideoReceiverBase

{
    struct tagVCVideoReceiverConfig _videoReceiverConfig;
    struct tagHANDLE *_videoReceiverHandle;
    struct tagHANDLE *_videoTransmitterHandle;
    long long _streamToken;
    void *_controlInfoGenerator;
    unsigned int remoteFrameWidth;
    unsigned int remoteFrameHeight;
    VideoAttributes *remoteVideoAttributes;
    _Bool receivedFirstRemoteFrame;
    _Bool _shouldEnableFaceZoom;
    double _lastKeyFrameRequestTime;
    unsigned short _lastKeyFrameRequestStreamID;
    VCVideoStreamRateAdaptationFeedbackOnly *_rateAdaptation;
    VCDisplayLink *_displayLink;
}

@property (retain) VideoAttributes *remoteVideoAttributes;
@property (nonatomic) _Bool shouldEnableFaceZoom;

- (void)dealloc;
- (void)pauseVideo;
- (void)displayLinkTick:(id)arg1;
- (double)roundTripTime;
- (void)startVideo;
- (void)stopVideo;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)setTargetStreamID:(unsigned short)arg1;
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setRoundTripTime:(double)arg1;
- (void)setEnableCVO:(_Bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;
- (void)rtcpSendIntervalElapsed;
- (unsigned int)lastDisplayedFrameRTPTimestamp;
- (void)collectChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (double)lastReceivedVideoRTPPacketTime;
- (double)lastReceivedVideoRTCPPacketTime;
- (id)initWithConfig:(struct tagVCVideoReceiverConfig *)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3 statisticsCollector:(id)arg4 transmitterHandle:(struct tagHANDLE *)arg5;
- (void)handleRemoteFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)arg1;
- (void)handleKeyFrameRequestWithSizeAndFistMBs:(unsigned short *)arg1 count:(int)arg2 didReceiveRTCPFB:(_Bool)arg3 didReceiveFIR:(_Bool)arg4;
- (void)didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2;

@end
