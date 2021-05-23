/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AVAudioPCMBuffer, NSString;

__attribute__((visibility("hidden")))
@interface RECaptureAudioUnit : AUAudioUnit

{
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> _recordingStreamWriter;
    NSString *_captureName;
}

@property (copy, nonatomic) NSString *captureName;

- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)outputBusses;
- (id)inputBusses;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)channelCapabilities;

@end
