/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioNode.h>

@class AVAudioEnvironmentDistanceAttenuationParameters, AVAudioEnvironmentReverbParameters, NSArray, NSString;

@interface AVAudioEnvironmentNode : AVAudioNode

@property (nonatomic) long long outputType;
@property (nonatomic) float outputVolume;
@property (nonatomic, readonly) unsigned long long nextAvailableInputBus;
@property (nonatomic) struct AVAudio3DPoint listenerPosition;
@property (nonatomic) struct AVAudio3DVectorOrientation listenerVectorOrientation;
@property (nonatomic) struct AVAudio3DAngularOrientation listenerAngularOrientation;
@property (nonatomic, readonly) AVAudioEnvironmentDistanceAttenuationParameters *distanceAttenuationParameters;
@property (nonatomic, readonly) AVAudioEnvironmentReverbParameters *reverbParameters;
@property (nonatomic, readonly) NSArray *applicableRenderingAlgorithms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float volume;

- (id)init;

@end
