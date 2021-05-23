/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@protocol EARCaesuraSilencePosteriorGeneratorDelegate, OS_dispatch_queue;

@interface EARCaesuraSilencePosteriorGenerator : NSObject

{
    struct shared_ptr<quasar::SilencePosteriorGenerator> _silenceGenerator;
    NSObject<OS_dispatch_queue> *_spgQueue;
    id <EARCaesuraSilencePosteriorGeneratorDelegate> _delegate;
}

@property (weak, nonatomic) id <EARCaesuraSilencePosteriorGeneratorDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (id).cxx_construct;
- (void)endAudio;
- (void)_startComputeTask;
- (id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2;
- (id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 queue:(id)arg3;
- (id)initWithConfigFile:(id)arg1;
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (long long)getFrameDurationMs;

@end
