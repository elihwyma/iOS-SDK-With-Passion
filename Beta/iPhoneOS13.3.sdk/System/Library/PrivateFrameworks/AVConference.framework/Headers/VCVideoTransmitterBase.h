/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterBase : NSObject

{
    void *_controlInfoGenerator;
    unsigned int _captureWidth;
    unsigned int _captureHeight;
    unsigned int _encodingWidth;
    unsigned int _encodingHeight;
    unsigned int _targetFramerate;
    unsigned int _targetBitrate;
    unsigned int _targetBitrateChangeCounter;
    unsigned int _txMaxBitrate;
    unsigned int _txMinBitrate;
    unsigned int _temporaryMaximumBitrate;
    VCVideoRule *_videoRule;
    CDStruct_1b6d18a9 _latestSampleBufferTimestamp;
    double _lastKeyFrameSentTime;
    unsigned int _timestamp;
    unsigned int _lastSentAudioSampleTime;
    double _lastSentAudioHostTime;
    _Bool _isServerBasedBandwidthProbingEnabled;
}

@property CDStruct_1b6d18a9 lastFrameTime;
@property double lastKeyFrameSentTime;
@property unsigned int lastRTPTimestamp;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
@property (nonatomic) _Bool isServerBasedBandwidthProbingEnabled;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) unsigned int targetBitrateChangeCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithConfig:(id)arg1;
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

@end
