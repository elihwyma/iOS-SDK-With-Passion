/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVAudioDevice, NSDictionary, NSMutableArray, NSString, VCAudioRelay, VCAudioRelayIO, VCAudioSessionMediaProperties, VCAudioUnitProperties;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioManager : NSObject

{
    struct tagHANDLE *_hAUIO;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _state;
    VCAudioSessionMediaProperties *_currentAudioSessionMediaProperties;
    VCAudioUnitProperties *_currentAudioUnitProperties;
    NSDictionary *_vpOperatingModeToAudioSessionMediaFormatMapping;
    NSMutableArray *_allClients;
    NSMutableArray *_startingIOClients;
    AVAudioDevice *_inputDevice;
    AVAudioDevice *_outputDevice;
    _Bool _isGKVoiceChat;
    _Bool _isMicrophoneMuted;
    _Bool _isInDaemon;
    _Bool _isInputMeteringEnabled;
    _Bool _isOutputMeteringEnabled;
    _Bool _isSpeakerPhoneEnabled;
    _Bool _isSuspended;
    struct _VCAudioIOControllerIOState _sinkData;
    struct _VCAudioIOControllerIOState _sourceData;
    int _interruptThreadState;
    VCAudioRelay *_interruptThread;
    VCAudioRelayIO *_interruptThreadClient;
}

@property (retain, nonatomic) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties;
@property (retain, nonatomic) VCAudioUnitProperties *currentAudioUnitProperties;
@property (retain, nonatomic) NSDictionary *vpOperatingModeToAudioSessionMediaFormatMapping;
@property (retain, nonatomic) AVAudioDevice *currentInputDevice;
@property (retain, nonatomic) AVAudioDevice *currentOutputDevice;
@property (nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted;
@property (nonatomic) _Bool isInDaemon;
@property (nonatomic) _Bool isGKVoiceChat;
@property (nonatomic, getter=isSpeakerPhoneEnabled) _Bool speakerPhoneEnabled;
@property (nonatomic, readonly) struct _VCAudioIOControllerIOState *sinkIO;
@property (nonatomic, readonly) struct _VCAudioIOControllerIOState *sourceIO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)addClient:(id)arg1;
- (_Bool)removeClient:(id)arg1;
- (void)stopAudioSession;
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;
- (_Bool)setupInterruptThread;
- (void)computeHardwarePreferences;
- (void)cleanupInterruptThread;
- (_Bool)getAudioSessionMediaProperties:(id)arg1 forVPOperatingMode:(unsigned int)arg2;
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;
- (void)waitIdleForClient:(id)arg1;
- (void)setupIODevicesForAUIO:(struct tagHANDLE *)arg1;
- (void)setInputMetering;
- (void)setOutputMetering;
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;
- (_Bool)startAudioSessionWithProperties:(id)arg1;
- (void)resetAudioTimestamps;
- (void)flushEventQueue:(struct opaqueCMSimpleQueue *)arg1;
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState *)arg1;
- (_Bool)shouldResetAudioSessionWithProperties:(id)arg1;
- (void)resetAudioSessionWithProperties:(id)arg1;
- (_Bool)startAUIOWithProperties:(id)arg1;
- (_Bool)stateRunningShouldTransitionToStarted:(id)arg1;
- (void)stopAUIO;
- (void)enterStateStarted;
- (void)startInterruptThread;
- (void)stateRunningToSessionStarted;
- (_Bool)stateRunningShouldTransitionToInterrupted:(id)arg1;
- (void)stateTransitionRunningToInterrupted;
- (_Bool)shouldResetAudioUnitWithProperties:(id)arg1;
- (void)applyControllerFormatToClients:(id)arg1;
- (void)activateStartingClient:(id)arg1 applyControllerFormat:(_Bool)arg2;
- (void)resetAUIOWithProperties:(id)arg1;
- (void)completeStartForAllStartingClients;
- (_Bool)stateInterruptedShouldGoToStarted:(id)arg1;
- (void)stopInterruptThread;
- (void)stateTransitionInterruptedToStarted;
- (_Bool)stateInterruptedShouldGoToRunning:(id)arg1;
- (void)stateTransitionInterruptedToRunning;
- (void)_cleanupDeadClients;
- (id)newAudioUnitPropertiesWithClient:(id)arg1;
- (id)newAudioSessionMediaPropertiesWithClient:(id)arg1;
- (_Bool)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (_Bool)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (_Bool)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (_Bool)stateInterruptedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (_Bool)updateStateWithAudioIOClient:(id)arg1;
- (void)stopClient:(id)arg1;
- (void)didSessionPause;
- (void)didSessionResume;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)startClient:(id)arg1;
- (void)updateClient:(id)arg1;
- (void)refreshInputMetering;
- (void)refreshOutputMetering;
- (void)refreshRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)didSessionStop;
- (void)didSessionEnd;
- (void)getPreferredFormat:(struct AudioStreamBasicDescription *)arg1 blockSize:(double *)arg2 vpOperatingMode:(unsigned int *)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(struct AudioStreamBasicDescription *)arg6;

@end
