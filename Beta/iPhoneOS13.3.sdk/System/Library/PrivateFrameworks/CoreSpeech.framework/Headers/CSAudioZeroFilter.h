/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSAudioZeroFilter : NSObject

{
    struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short>>> _audioZeroFilterImpl;
}

- (id).cxx_construct;
- (id)metrics;
- (id)initWithZeroWindowSize:(unsigned long long)arg1 approxAbsSpeechThreshold:(unsigned short)arg2 numHostTicksPerAudioSample:(double)arg3;
- (unsigned long long)filterZerosInAudioPacket:(id)arg1 atBufferHostTime:(unsigned long long)arg2 filteredPacket:(id *)arg3;
- (unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id *)arg1;

@end
