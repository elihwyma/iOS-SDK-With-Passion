/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioStream, NSHashTable, NSMutableSet, NSString;

@protocol CSAudioAlertProvidingDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSXPCClientDelegate, OS_xpc_object;

@interface CSXPCClient : NSObject

{
    id <CSAudioSessionProvidingDelegate> _audioSessionProvidingDelegate;
    id <CSAudioStreamProvidingDelegate> _audioStreamProvidingDelegate;
    id <CSAudioAlertProvidingDelegate> _audioAlertProvidingDelegate;
    id <CSXPCClientDelegate> _delegate;
    NSObject<OS_xpc_object> *_xpcConnection;
    CSAudioStream *_audioStream;
    NSMutableSet *_activationAssertions;
    NSHashTable *_audioSessionInfoObservers;
    unsigned long long _xpcClientType;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) NSMutableSet *activationAssertions;
@property (retain, nonatomic) NSHashTable *audioSessionInfoObservers;
@property (nonatomic) unsigned long long xpcClientType;
@property (weak, nonatomic) id <CSAudioSessionProvidingDelegate> audioSessionProvidingDelegate;
@property (weak, nonatomic) id <CSAudioStreamProvidingDelegate> audioStreamProvidingDelegate;
@property (weak, nonatomic) id <CSAudioAlertProvidingDelegate> audioAlertProvidingDelegate;
@property (weak, nonatomic) id <CSXPCClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)disconnect;
- (id)initWithType:(unsigned long long)arg1;
- (void)connect;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (_Bool)isRecording;
- (id)recordRoute;
- (void)enableMiniDucking:(_Bool)arg1;
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (_Bool)playAlertSoundForType:(long long)arg1;
- (_Bool)playRecordStartingAlertAndResetEndpointer;
- (void)configureAlertBehavior:(id)arg1;
- (id)recordSettings;
- (void)setMeteringEnabled:(_Bool)arg1;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (unsigned long long)alertStartTime;
- (id)playbackRoute;
- (void)setDuckOthersOption:(_Bool)arg1;
- (_Bool)duckOthersOption;
- (unsigned int)audioSessionID;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2;
- (id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id *)arg3;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;
- (id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;
- (void)cancelAudioStreamHold:(id)arg1;
- (_Bool)prepareAudioProviderWithContext:(id)arg1 clientType:(unsigned long long)arg2 error:(id *)arg3;
- (void)_handleListenerEvent:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_decodeError:(id)arg1;
- (_Bool)isNarrowBand;
- (void)triggerInfoForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableBargeInMode:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)prewarmAudioSessionWithError:(id *)arg1;
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;
- (id)recordDeviceInfo;
- (id)audioMetric;
- (void)setAudioSessionDelegate:(id)arg1;
- (void)setAudioAlertDelegate:(id)arg1;
- (float)getEstimatedTTSVolume;
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;
- (void)sendXPCClientType;
- (_Bool)_sendMessageAndReplySync:(id)arg1 connection:(id)arg2 error:(id *)arg3;
- (void)_handleListenerMessage:(id)arg1;
- (void)_handleSessionProvidingDelegateMessageBody:(id)arg1;
- (void)_handleStreamProvidingDelegateMessageBody:(id)arg1;
- (void)_handleAlertProvidingDelegateMessageBody:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg1;
- (void)_handleListenerDisconnectedError:(id)arg1;
- (void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg1;
- (void)_handleSessionProvidingDelegateBeginInterruption:(id)arg1;
- (void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg1;
- (void)_handleSessionProvidingDelegateEndInterruption:(id)arg1;
- (void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg1;
- (void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg1;
- (void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg1;
- (void)_handleSessionProvidingDelegateDidChangeContext:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg1;
- (void)_handleStreamProvidingDelegateDidStopUnexpectly:(id)arg1;
- (void)_handleStreamProvidingDelegateChunkAvailable:(id)arg1;
- (void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg1;
- (void)_handleStreamProvidingDelegateHardwareConfigChange:(id)arg1;
- (void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)audioChunkToEndFrom:(unsigned long long)arg1;
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;
- (void)updateMusicVolume:(float)arg1;
- (void)updateAlarmVolume:(float)arg1;
- (void)updateAlarmState:(long long)arg1;
- (void)updateTimerState:(long long)arg1;
- (void)pingpong:(CDUnknownBlockType)arg1;

@end
