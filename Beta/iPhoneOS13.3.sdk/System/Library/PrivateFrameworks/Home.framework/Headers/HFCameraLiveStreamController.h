/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCameraAudioManager, HMCameraProfile, HMCameraSource, HMHome, NSError, NSString;

@protocol HFCameraLiveStreamControllerDelegate;

@interface HFCameraLiveStreamController : NSObject

{
    _Bool _microphoneEnabled;
    _Bool _streamAudioEnabled;
    _Bool _startStreamingAfterStop;
    float _streamAudioVolume;
    id <HFCameraLiveStreamControllerDelegate> _delegate;
    HMCameraSource *_liveCameraSource;
    NSError *_streamError;
    HMHome *_home;
    HMCameraProfile *_cameraProfile;
    HFCameraAudioManager *_audioManager;
    unsigned long long _inferredStreamState;
}

@property (retain, nonatomic) HFCameraAudioManager *audioManager;
@property (nonatomic) unsigned long long inferredStreamState;
@property (nonatomic) _Bool startStreamingAfterStop;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HFCameraLiveStreamControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isStreamingEnabled) _Bool streamingEnabled;
@property (nonatomic, readonly) unsigned long long streamState;
@property (nonatomic, readonly) HMCameraSource *liveCameraSource;
@property (nonatomic, readonly) NSError *streamError;
@property (nonatomic, getter=isStreamAudioEnabled) _Bool streamAudioEnabled;
@property (nonatomic) float streamAudioVolume;
@property (nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled;

- (id)init;
- (void)dealloc;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (id)mostRecentSnapshot;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(id)arg1;
- (void)cameraStreamControlDidUpdateManagerState:(id)arg1;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2;
- (void)startStreaming;
- (void)stopStreaming;
- (id)activeStream;
- (void)_updateAudioManagerState;
- (unsigned long long)_derivedAudioStreamSetting;

@end
