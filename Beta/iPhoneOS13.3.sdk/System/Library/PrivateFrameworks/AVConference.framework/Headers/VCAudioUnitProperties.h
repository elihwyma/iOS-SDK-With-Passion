/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioUnitProperties : NSObject

{
    unsigned int _samplesPerFrame;
    struct AudioStreamBasicDescription _format;
    unsigned int _audioUnitType;
    _Bool _allowAudioRecording;
    int _operatingMode;
    unsigned int _vpOperatingMode;
    int _deviceRole;
    _Bool _isFarEndVersionInfoValid;
    struct VoiceIOFarEndVersionInfo _farEndVersionInfo;
    unsigned int _remoteCodecType;
    double _remoteCodecSampleRate;
    _Bool _enableDNNVAD;
}

@property (nonatomic) unsigned int samplesPerFrame;
@property (nonatomic) struct AudioStreamBasicDescription format;
@property (nonatomic) unsigned int audioUnitType;
@property (nonatomic) _Bool allowAudioRecording;
@property (nonatomic) int operatingMode;
@property (nonatomic) int deviceRole;
@property (nonatomic) unsigned int vpOperatingMode;
@property (nonatomic, readonly) _Bool isFarEndVersionInfoValid;
@property (nonatomic) struct VoiceIOFarEndVersionInfo farEndVersionInfo;
@property (nonatomic) unsigned int remoteCodecType;
@property (nonatomic) double remoteCodecSampleRate;
@property (nonatomic) _Bool enableDNNVAD;

- (id)description;

@end
