/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface _EARLanguageDetectorAudioBuffer : NSObject

{
    shared_ptr_9e2bfca6 _buffer;
}

- (id).cxx_construct;
- (void)addAudioSampleData:(id)arg1;
- (void)endAudio;
- (void)addAudioSamples:(const short *)arg1 count:(unsigned long long)arg2;
- (id)_initWithAudioBuffer:(const shared_ptr_9e2bfca6 *)arg1;

@end
