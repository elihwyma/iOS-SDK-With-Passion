/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@interface VSVoiceBooster : NSObject

{
    float _voiceBoostGainDecibels;
    unsigned long long _pcmBufferSize;
    struct OpaqueAudioConverter *_floatConverter;
    struct OpaqueAudioConverter *_integerConverter;
    struct OpaqueAudioComponentInstance *_voiceBoostUnit;
    struct AudioStreamBasicDescription _asbd;
    struct AudioTimeStamp _audioTimeStamp;
}

@property (nonatomic) struct AudioStreamBasicDescription asbd;
@property (nonatomic) unsigned long long pcmBufferSize;
@property (nonatomic) struct OpaqueAudioConverter *floatConverter;
@property (nonatomic) struct OpaqueAudioConverter *integerConverter;
@property (nonatomic) struct OpaqueAudioComponentInstance *voiceBoostUnit;
@property (nonatomic) struct AudioTimeStamp audioTimeStamp;
@property (nonatomic) float voiceBoostGainDecibels;

- (void)dealloc;
- (_Bool)initialize;
- (id)processData:(id)arg1;
- (void)uninitialize;
- (id)initWithStreamDescription:(struct AudioStreamBasicDescription)arg1 pcmBufferSize:(unsigned long long)arg2;

@end
