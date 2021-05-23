/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSAudioSampleRateConverter : NSObject

{
    struct OpaqueAudioConverter *_sampleRateConverter;
    float _outBufferScaleFactor;
    struct AudioStreamBasicDescription _inASBD;
    struct AudioStreamBasicDescription _outASBD;
}

+ (id)upsampler;
+ (id)downsampler;

- (void)dealloc;
- (id)convertSampleRateOfBuffer:(id)arg1;
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;
- (struct OpaqueAudioConverter *)_createSampleRateConverterWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;

@end
