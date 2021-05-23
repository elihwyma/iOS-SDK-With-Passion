/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol VCMediaStreamSyncSource, VCVideoReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoReceiverBase : NSObject

{
    int _remoteVideoOrientation;
    id <VCVideoReceiverDelegate> _delegate;
    id <VCMediaStreamSyncSource> _syncSource;
    double _roundTripTime;
    double _lastReceivedVideoRTPPacketTime;
    double _lastReceivedVideoRTCPPacketTime;
}

@property int remoteVideoOrientation;
@property (nonatomic) id <VCVideoReceiverDelegate> delegate;
@property (nonatomic) id <VCMediaStreamSyncSource> syncSource;
@property double roundTripTime;
@property (readonly) double lastReceivedVideoRTPPacketTime;
@property (readonly) double lastReceivedVideoRTCPPacketTime;
@property (nonatomic, readonly) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)pauseVideo;
- (void)startVideo;
- (void)stopVideo;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)setTargetStreamID:(unsigned short)arg1;
- (_Bool)startSynchronization:(id)arg1;
- (void)stopSynchronization;
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setEnableCVO:(_Bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;
- (void)rtcpSendIntervalElapsed;
- (void)collectChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;

@end
