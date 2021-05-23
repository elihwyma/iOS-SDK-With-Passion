/*
 Image: /System/Library/PrivateFrameworks/AccessoryAudio.framework/AccessoryAudio
 */

#import <Foundation/NSObject.h>

@class ACCAudioClient, NSString;

@interface ACCAudioManager : NSObject

{
    ACCAudioClient *_audioClient;
}

@property (retain, nonatomic) ACCAudioClient *audioClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedACCAudioManager;

- (id)init;
- (_Bool)setDigitalAudioSampleRate:(unsigned int)arg1;
- (unsigned int)supportedDigitalAudioSampleRate:(unsigned int)arg1;
- (id)supportedDigitalAudioSampleRates;
- (id)deviceAudioStates;
- (_Bool)allowBackgroundAudioForClient:(id)arg1;

@end
