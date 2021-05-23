/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray;

__attribute__((visibility("hidden")))
@interface REGainRampingAudioUnit : AUAudioUnit

{
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct unique_ptr<boost::lockfree::queue<GainRampCommand>, std::__1::default_delete<boost::lockfree::queue<GainRampCommand>>> _rampGainQueue;
    float _targetGain;
    unsigned int _remainingRampFrames;
    float _currentGain;
}

@property (readonly) float currentGain;

- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)outputBusses;
- (id)inputBusses;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)channelCapabilities;
- (void)fadeToGain:(float)arg1 duration:(double)arg2;

@end
