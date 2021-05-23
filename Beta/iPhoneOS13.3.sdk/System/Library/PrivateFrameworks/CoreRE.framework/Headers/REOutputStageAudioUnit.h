/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AVAudioPCMBuffer;

__attribute__((visibility("hidden")))
@interface REOutputStageAudioUnit : AUAudioUnit

{
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct atomic<int> _clipCount;
}

- (void)deallocateRenderResources;
- (id)outputBusses;
- (id)inputBusses;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)channelCapabilities;

@end
