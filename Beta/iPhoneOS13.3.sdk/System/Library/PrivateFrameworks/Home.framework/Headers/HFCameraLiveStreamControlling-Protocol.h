/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HMCameraSource, NSError;

@protocol HFCameraLiveStreamControllerDelegate;

@protocol HFCameraLiveStreamControlling <Swift>

@property (weak, nonatomic) id <HFCameraLiveStreamControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isStreamingEnabled) _Bool streamingEnabled;
@property (nonatomic, readonly) unsigned long long streamState;
@property (nonatomic, readonly) HMCameraSource *liveCameraSource;
@property (nonatomic, readonly) NSError *streamError;
@property (nonatomic, getter=isStreamAudioEnabled) _Bool streamAudioEnabled;
@property (nonatomic) float streamAudioVolume;
@property (nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled;

- (unsigned short)startStreaming;
- (unsigned short)stopStreaming;

@end
