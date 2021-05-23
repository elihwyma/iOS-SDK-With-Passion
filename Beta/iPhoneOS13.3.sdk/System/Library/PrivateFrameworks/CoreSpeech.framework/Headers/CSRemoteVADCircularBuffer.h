/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSRemoteVADCircularBuffer : NSObject

{
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>> _remoteVADCircularBufferImpl;
    int _audioSamplesPerRemoteVAD;
    unsigned long long _capacity;
    unsigned long long _size;
    unsigned long long _beginSampleCount;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned long long beginSampleCount;

- (void)reset;
- (id).cxx_construct;
- (void)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2;
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)initWithRecordingDuration:(float)arg1 audioSamplesPerRemoteVAD:(int)arg2 audioSampleRate:(float)arg3;
- (unsigned long long)remoteVADSampleCount;
- (id)copySamplesFromAudioSampleCount:(unsigned long long)arg1 toAudioSampleCount:(unsigned long long)arg2;

@end
