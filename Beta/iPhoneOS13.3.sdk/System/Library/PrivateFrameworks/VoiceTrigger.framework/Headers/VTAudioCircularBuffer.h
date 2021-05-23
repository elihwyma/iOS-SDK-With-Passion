/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface VTAudioCircularBuffer : NSObject

{
    struct unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short>>> _vtAudioCircularBufferImpl;
    unsigned long long _bufferLength;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long bufferLength;

- (void)reset;
- (id).cxx_construct;
- (unsigned long long)sampleCount;
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 withNumSamplesCopiedIn:(unsigned long long *)arg3;
- (id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(unsigned long long)arg2 samplingRate:(unsigned long long)arg3;
- (void)addSamples:(void *)arg1 numSamples:(unsigned long long)arg2;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long *)arg1;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;

@end
