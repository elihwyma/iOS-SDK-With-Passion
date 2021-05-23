/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class AVVoiceController, CSAudioFileReader, CSRemoteRecordClient, NSDictionary, NSHashTable, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CSAudioRecorder : NSObject

{
    AVVoiceController *_voiceController;
    struct OpaqueAudioConverter *_deinterleaver;
    struct AudioBufferList _interleavedABL;
    struct AudioBufferList *_pNonInterleavedABL;
    CSRemoteRecordClient *_remoteRecordClient;
    NSDictionary *_latestContext;
    _Bool _shouldUseRemoteRecord;
    NSMutableDictionary *_opusDecoders;
    CSAudioFileReader *_audioFileReader;
    unsigned long long _audioFilePathIndex;
    _Bool _waitingForDidStart;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) _Bool duckOthersOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)createSharedAudioSession;
+ (unsigned long long)_convertDeactivateOption:(unsigned long long)arg1;

- (void)dealloc;
- (id)metrics;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)enableMiniDucking:(_Bool)arg1;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (_Bool)playAlertSoundForType:(long long)arg1;
- (void)setMeteringEnabled:(_Bool)arg1;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (unsigned long long)setContext:(id)arg1 error:(id *)arg2;
- (unsigned long long)alertStartTime;
- (void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;
- (void)voiceControllerBeginRecordInterruption:(id)arg1;
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)voiceControllerEndRecordInterruption:(id)arg1;
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(_Bool)arg2;
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(_Bool)arg2;
- (id)playbackRoute;
- (id)voiceTriggerInfo;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerMediaServicesWereLost:(id)arg1;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;
- (void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;
- (void)voiceControllerStreamInvalidated:(id)arg1 forStream:(unsigned long long)arg2;
- (void)audioFileReaderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (id)initWithQueue:(id)arg1 error:(id *)arg2;
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;
- (void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 receivedNumChannels:(unsigned int)arg6;
- (_Bool)isRecordingWithStreamHandleId:(unsigned long long)arg1;
- (_Bool)prepareAudioStreamRecord:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)startAudioStreamWithOption:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)stopAudioStreamWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;
- (id)recordRouteWithStreamHandleId:(unsigned long long)arg1;
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1;
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1;
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;
- (void)willDestroy;
- (_Bool)isSessionCurrentlyActivated;
- (id)_voiceControllerWithError:(id *)arg1;
- (void)_destroyVoiceController;
- (void)_audioRecorderDidStartRecordingSuccessfully:(_Bool)arg1 streamHandleID:(unsigned long long)arg2 error:(id)arg3;
- (id)_getRecordSettingsWithRequest:(id)arg1;
- (void)_createDeInterleaverIfNeeded;
- (_Bool)_shouldInjectAudio;
- (_Bool)_needResetAudioInjectionIndex:(id)arg1;
- (_Bool)_startAudioStreamForAudioInjection;
- (id)_deinterleaveBufferIfNeeded:(id)arg1;
- (id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned int)arg2;
- (void)_processAudioChain:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 atTime:(unsigned long long)arg4;
- (void)_processAudioBuffer:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1 streamHandleID:(unsigned long long)arg2;
- (_Bool)_shouldUseRemoteRecordForContext:(id)arg1;
- (_Bool)_shouldUseRemoteBuiltInMic:(id)arg1;

@end
