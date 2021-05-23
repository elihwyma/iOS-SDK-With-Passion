/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoTransmitterBase.h>

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterDefault : VCVideoTransmitterBase

{
    struct tagHANDLE *_videoTransmitterHandle;
}

@property (readonly) struct tagHANDLE *videoTransmitterHandle;

+ (double)minKeyFrameGenerationIntervalForMode:(int)arg1;

- (void)dealloc;
- (id)initWithConfig:(id)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (void)generateKeyFrame;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (void)startVideo;
- (void)stopVideo;
- (_Bool)enqueueVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;
- (void)setStreamIDs:(unsigned short *)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short *)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;
- (void)setFECRatio:(double)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)collectChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (unsigned int)parameterSetForPayload:(int)arg1;
- (void)computeTimestamp:(unsigned int *)arg1 hostTime:(double *)arg2 forFrame:(struct opaqueCMSampleBuffer *)arg3;
- (void)setIsServerBasedBandwidthProbingEnabled:(_Bool)arg1;

@end
