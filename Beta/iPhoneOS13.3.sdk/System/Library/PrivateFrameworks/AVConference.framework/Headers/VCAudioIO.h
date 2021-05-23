/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, VCAudioIOControllerClient;

@protocol VCAudioIOControllerControl;

__attribute__((visibility("hidden")))
@interface VCAudioIO : NSObject

{
    id <VCAudioIOControllerControl> _audioIOController;
    VCAudioIOControllerClient *_controllerClient;
    id _delegate;
    id _sourceDelegate;
    id _sinkDelegate;
    struct AudioStreamBasicDescription _clientFormat;
    unsigned int _clientSamplesPerFrame;
    _Bool _isMuted;
    _Bool _isGKVoiceChat;
    struct AudioStreamBasicDescription _controllerFormat;
    unsigned int _controllerSamplesPerFrame;
    _Bool _isControllerAudioFormatValid;
    _Bool _isControllerReset;
    struct _opaque_pthread_mutex_t _stateMutex;
    unsigned int _state;
    CDUnknownBlockType _startCompletionBlock;
    CDUnknownBlockType _stopCompletionBlock;
    struct _VCAudioEndpointData _sourceData;
    struct _VCAudioEndpointData _sinkData;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription controllerFormat;
@property (nonatomic, readonly) struct AudioStreamBasicDescription clientAudioFormat;
@property (nonatomic, readonly) unsigned int samplesPerFrame;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
@property (nonatomic, getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
@property (nonatomic) _Bool isGKVoiceChat;
@property (nonatomic) unsigned char direction;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) unsigned int pullAudioSamplesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)controllerForDeviceRole:(int)arg1;

- (void)dealloc;
- (id)delegate;
- (id)initWithConfiguration:(struct _VCAudioIOInitConfiguration *)arg1;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)forceCleanup;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg1;
- (void)didStart:(_Bool)arg1 error:(id)arg2;
- (void)controllerFormatChanged:(struct AudioStreamBasicDescription)arg1;
- (void)didStop:(_Bool)arg1 error:(id)arg2;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (_Bool)reconfigureWithOperatingMode:(int)arg1 deviceRole:(int)arg2 direction:(unsigned char)arg3 allowAudioRecording:(_Bool)arg4;
- (void)setClientFormat:(struct AudioStreamBasicDescription)arg1;
- (void)spatialAudioSourceIDChanged:(unsigned long long)arg1;
- (void)didResume;
- (void)releaseConverters;
- (_Bool)createConverterForSource:(_Bool)arg1 error:(id *)arg2;
- (void)didSuspend;

@end
