/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray;

__attribute__((visibility("hidden")))
@interface REAUHostAudioUnit : AUAudioUnit

{
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    CDUnknownBlockType _cachedRenderBlock;
    struct atomic<bool> _running;
    _Bool _prepared;
    _Bool _shouldPrepareTargetOnAllocate;
    struct mutex _targetPreparationMutex;
    double _currentHostingSampleRate;
    unsigned int _currentHostingMaxFramesToRender;
    struct AudioBufferList *_abl;
    float *_buffer;
    struct atomic<float> _signalPresent;
    double _signalPresentDecayPerSample;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> _recordingStreamWriter;
    unsigned int _desiredLayoutTag;
    AUAudioUnit *_target;
}

@property (nonatomic) unsigned int desiredLayoutTag;
@property (retain, nonatomic) AUAudioUnit *target;
@property (nonatomic, getter=isPrepared) _Bool prepared;
@property (nonatomic, getter=isRunning) _Bool running;
@property (nonatomic) float signalPresent;

- (void)dealloc;
- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)outputBusses;
- (id)inputBusses;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)channelCapabilities;
- (void)prepareTargetAU;

@end
