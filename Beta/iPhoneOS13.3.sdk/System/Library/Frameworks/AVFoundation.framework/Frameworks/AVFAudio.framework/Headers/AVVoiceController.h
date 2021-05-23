/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, NSDictionary, NSString;

@protocol AVVoiceControllerPlaybackDelegate, AVVoiceControllerRecordDelegate, Endpointer;

@interface AVVoiceController : NSObject

{
    void *_impl;
    unsigned long long _alertStartTime;
}

@property (getter=isBargeInDetectEnabled) _Bool bargeInDetectEnabled;
@property (getter=isStopOnBargeInEnabled) _Bool stopOnBargeInEnabled;
@property (copy, readonly) NSString *recordRoute;
@property (copy, readonly) NSString *playbackRoute;
@property (readonly) unsigned long long lastRecordStartTime;
@property (readonly) NSDictionary *voiceTriggerInfo;
@property (getter=isSynchronousCallbackEnabled) _Bool synchronousCallbackEnabled;
@property (readonly) AVAudioFormat *pcmRecordBufferFormat;
@property (setter=setDuckOthersOption:) _Bool duckOthersOption;
@property (readonly) unsigned long long numberOfChannels;
@property (readonly) NSDictionary *recordSettings;
@property (readonly, getter=isRecording) _Bool recording;
@property (retain) id <Endpointer> endpointerDelegate;
@property int recordEndpointMode;
@property double recordStartWaitTime;
@property double recordInterspeechWaitTime;
@property double recordEndWaitTime;
@property id <AVVoiceControllerRecordDelegate> recordDelegate;
@property (getter=isMeteringEnabled) _Bool meteringEnabled;
@property (readonly) NSDictionary *playbackSettings;
@property (readonly, getter=isPlaying) _Bool playing;
@property id <AVVoiceControllerPlaybackDelegate> playbackDelegate;
@property float playbackVolume;
@property (getter=isStopOnEndpointEnabled) _Bool stopOnEndpointEnabled;
@property float alertVolume;
@property (readonly) unsigned long long alertStartTime;
@property (readonly) NSDictionary *metrics;

- (void)dealloc;
- (void)finalize;
- (void)decodeError;
- (id)initWithError:(id *)arg1;
- (struct ControllerImpl *)impl;
- (void)handleInterruption:(id)arg1;
- (void)stopRecording;
- (void)stopPlaying;
- (id)initWithContext:(id)arg1 error:(id *)arg2;
- (void)prewarmAudioSession;
- (void)releaseAudioSession;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (_Bool)willAcceptContext:(id)arg1;
- (void)enableMiniDucking:(_Bool)arg1;
- (_Bool)IsDeviceAvailableInLocalRoute:(id)arg1 error:(id *)arg2;
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;
- (_Bool)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(int)arg2;
- (_Bool)playAlertSoundForType:(int)arg1;
- (void)resetEndpointer;
- (_Bool)playRecordStartingAlertAndResetEndpointer;
- (int)doStartRecordingAtTime:(unsigned long long)arg1 behavior:(id)arg2;
- (void)setupAlertBehavior:(id)arg1;
- (_Bool)startRecording;
- (_Bool)startRecording:(id *)arg1;
- (_Bool)startRecordingAtTime:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (void)configureAlertBehavior:(id)arg1;
- (_Bool)prepareListenWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)startListening:(id *)arg1;
- (_Bool)startListeningWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)setRecordMode:(long long)arg1 error:(id *)arg2;
- (_Bool)releaseAudioSessionForListening:(id *)arg1;
- (_Bool)releaseAudioSessionForListening:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)preparePlaybackWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)preparePlaybackFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)startPlaying;
- (double)getRecordBufferDuration;
- (_Bool)setRecordBufferDuration:(double)arg1;
- (double)getPlaybackBufferDuration;
- (_Bool)setPlaybackBufferDuration:(double)arg1;
- (unsigned long long)getAlertStartTime;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (id)currentRecordDeviceInfo;
- (unsigned long long)setContext:(id)arg1 error:(id *)arg2;
- (void)prepareRecordForStream:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)prepareRecordForStream:(id)arg1 error:(id *)arg2;
- (void)startRecordWithSettings:(id)arg1 completion:(CDUnknownBlockType)arg2 alertCompletion:(CDUnknownBlockType)arg3 audioCallback:(CDUnknownBlockType)arg4;
- (_Bool)startRecordForStream:(id)arg1 error:(id *)arg2;
- (_Bool)configureAlertBehaviorForStream:(id)arg1 error:(id *)arg2;
- (void)stopRecordOnStream:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)stopRecordForStream:(unsigned long long)arg1 error:(id *)arg2;
- (long long)getCurrentStreamState:(unsigned long long)arg1;
- (id)getRecordDeviceInfoForStream:(unsigned long long)arg1;
- (_Bool)activateAudioSessionForStream:(unsigned long long)arg1 isPrewarm:(_Bool)arg2 error:(id *)arg3;
- (void)deactivateAudioSessionWithOptions:(unsigned long long)arg1;
- (long long)getCurrentSessionState;
- (_Bool)setContextForStream:(id)arg1 forStream:(unsigned long long)arg2 error:(id *)arg3;
- (void)playAlert:(int)arg1 withOverride:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)playAlertSoundForType:(int)arg1 overrideMode:(long long)arg2;
- (double)getRecordBufferDurationForStream:(unsigned long long)arg1;
- (id)getRecordSettingsForStream:(unsigned long long)arg1;
- (_Bool)isMeteringEnabledForStream:(unsigned long long)arg1;
- (_Bool)updateMeterForStream:(unsigned long long)arg1;
- (float)getPeakPowerForStream:(unsigned long long)arg1 forChannel:(unsigned long long)arg2;
- (float)getAveragePowerForStream:(unsigned long long)arg1 forChannel:(unsigned long long)arg2;
- (void)setRecordStatusChangeBlock:(CDUnknownBlockType)arg1;
- (void)setSessionNotifications;
- (void)removeSessionNotifications;
- (void)hardwareConfigChanged;
- (void)handlePluginDidPublishDevice:(id)arg1 withDevice:(id)arg2;
- (void)handlePluginDidUnpublishDevice:(id)arg1 withDevice:(id)arg2;
- (void)beganRecording:(id)arg1;
- (void)finishedRecording:(id)arg1;
- (void)startpointDetected;
- (void)interspeechPointDetected;
- (void)endpointDetected;
- (void)encodeError;
- (void)beganPlaying;
- (void)playbackBufferReceived:(struct MyAudioQueueBuffer *)arg1;
- (void)finishedPlaying;
- (void)alertPlaybackFinishedOfType:(int)arg1;
- (void)beginRecordInterruption;
- (void)beginRecordInterruptionWithContext:(id)arg1;
- (void)endRecordInterruption;
- (void)beginPlaybackInterruption;
- (void)endPlaybackInterruption;
- (void)beginAudioSessionActivate:(_Bool)arg1;
- (void)endAudioSessionActivate:(_Bool)arg1;
- (void)sendRemoteConnectionMessage:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)handleMediaServerDeath:(id)arg1;
- (void)handleMediaServerReset:(id)arg1;

@end
