/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSAudioCircularBuffer : NSObject

{
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> _csAudioCircularBufferImpl;
    unsigned long long _bufferLength;
}

@property (nonatomic) unsigned long long bufferLength;

+ (id)createAudioCircularBufferWithDefaultSettings;

- (void)reset;
- (id).cxx_construct;
- (unsigned long long)sampleCount;
- (id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3;
- (void)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long *)arg1;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2 atHostTime:(unsigned long long)arg3;
- (id)copySamplesFromHostTime:(unsigned long long)arg1;

@end
