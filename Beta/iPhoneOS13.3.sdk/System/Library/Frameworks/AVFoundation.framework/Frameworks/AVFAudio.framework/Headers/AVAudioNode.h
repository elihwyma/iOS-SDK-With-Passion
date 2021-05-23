/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AUAudioUnit, AVAudioEngine, AVAudioTime;

@interface AVAudioNode : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) struct AVAudioNodeImplBase *impl;
@property (nonatomic, readonly) AVAudioEngine *engine;
@property (nonatomic, readonly) unsigned long long numberOfInputs;
@property (nonatomic, readonly) unsigned long long numberOfOutputs;
@property (nonatomic, readonly) AVAudioTime *lastRenderTime;
@property (nonatomic, readonly) AUAudioUnit *AUAudioUnit;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly) double outputPresentationLatency;

- (id)init;
- (void)dealloc;
- (void)reset;
- (struct AVAudio3DPoint)position;
- (void)setPosition:(struct AVAudio3DPoint)arg1;
- (void)setPan:(float)arg1;
- (float)pan;
- (float)volume;
- (void)setVolume:(float)arg1;
- (void)setRate:(float)arg1;
- (float)rate;
- (id)clock;
- (id)initWithImpl:(struct AVAudioNodeImplBase *)arg1;
- (struct OpaqueAudioComponentInstance *)audioUnit;
- (void)didAttachToEngine:(id)arg1;
- (void)didDetachFromEngine:(id)arg1 error:(id *)arg2;
- (long long)renderingAlgorithm;
- (void)setRenderingAlgorithm:(long long)arg1;
- (long long)sourceMode;
- (void)setSourceMode:(long long)arg1;
- (long long)pointSourceInHeadMode;
- (void)setPointSourceInHeadMode:(long long)arg1;
- (float)reverbBlend;
- (void)setReverbBlend:(float)arg1;
- (float)obstruction;
- (void)setObstruction:(float)arg1;
- (float)occlusion;
- (void)setOcclusion:(float)arg1;
- (id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;
- (_Bool)resetImpl:(struct AVAudioNodeImplBase *)arg1;
- (id)outputFormatForBus:(unsigned long long)arg1;
- (_Bool)setOutputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (id)inputFormatForBus:(unsigned long long)arg1;
- (_Bool)setInputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (id)nameForInputBus:(unsigned long long)arg1;
- (id)nameForOutputBus:(unsigned long long)arg1;
- (void)setNumberOfInputs:(unsigned int)arg1;
- (void)setNumberOfOutputs:(unsigned int)arg1;
- (void)installTapOnBus:(unsigned long long)arg1 bufferSize:(unsigned int)arg2 format:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)removeTapOnBus:(unsigned long long)arg1;

@end
