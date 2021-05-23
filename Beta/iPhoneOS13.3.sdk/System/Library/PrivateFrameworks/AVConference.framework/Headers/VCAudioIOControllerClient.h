/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol VCAudioIOControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioIOControllerClient : NSObject

{
    id _delegate;
    struct AudioStreamBasicDescription _format;
    int _deviceRole;
    _Bool _allowAudioRecording;
    int _operatingMode;
    _Bool _isRemoteCodecInfoValid;
    unsigned int _remoteCodecType;
    double _remoteCodecSampleRate;
    _Bool _isRemoteVersionInfoValid;
    struct VoiceIOFarEndVersionInfo _farEndVersionInfo;
    int _clientPid;
    _Bool _isInputMeteringEnabled;
    _Bool _isOutputMeteringEnabled;
    unsigned char _direction;
    struct _VCAudioIOControllerClientIO _sinkIO;
    struct _VCAudioIOControllerClientIO _sourceIO;
}

@property (nonatomic, readonly) int clientPid;
@property (nonatomic, readonly) id <VCAudioIOControllerDelegate> delegate;
@property (nonatomic, readonly) struct AudioStreamBasicDescription format;
@property (nonatomic) int deviceRole;
@property (nonatomic) _Bool allowAudioRecording;
@property (nonatomic) int operatingMode;
@property (nonatomic) unsigned char direction;
@property (nonatomic, readonly) _Bool isRemoteCodecInfoValid;
@property (nonatomic, readonly) unsigned int remoteCodecType;
@property (nonatomic, readonly) double remoteCodecSampleRate;
@property (nonatomic, readonly) _Bool isRemoteVersionInfoValid;
@property (nonatomic, readonly) struct VoiceIOFarEndVersionInfo farEndVersionInfo;
@property (nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
@property (nonatomic, getter=isOuputMeteringEnabled) _Bool outputMeteringEnabled;
@property (nonatomic, readonly) struct _VCAudioIOControllerClientIO *sinkIO;
@property (nonatomic, readonly) struct _VCAudioIOControllerClientIO *sourceIO;

- (void)dealloc;
- (id)description;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)setClientFormat:(struct AudioStreamBasicDescription)arg1;
- (id)initWithDelegate:(id)arg1 sourceContext:(void *)arg2 sourceProcess:(CDUnknownFunctionPointerType)arg3 sinkContext:(void *)arg4 sinkProcess:(CDUnknownFunctionPointerType)arg5 clientPid:(int)arg6;

@end
