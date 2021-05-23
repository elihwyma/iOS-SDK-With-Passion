/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBusArray, AVAudioFormat, VCAudioIOControllerClient;

__attribute__((visibility("hidden")))
@interface VCSpatialAudioUnit : AUAudioUnit

{
    AVAudioFormat *_format;
    AUAudioUnitBusArray *_outputBusArray;
    AUAudioUnitBusArray *_inputBusArray;
    struct _VCAudioIOControllerIOState _ioState;
    VCAudioIOControllerClient *_client;
    struct opaqueVCAudioBufferList *_renderBuffer;
    struct opaqueVCAudioBufferList *_tempBuffer;
    double _currentTempBufferSampleTime;
}

@property struct opaqueVCAudioBufferList *renderBuffer;
@property struct opaqueVCAudioBufferList *tempBuffer;
@property struct _VCAudioIOControllerIOState ioState;
@property (retain, nonatomic) VCAudioIOControllerClient *client;

+ (void)registerAudioUnitDescription;
+ (void)instantiate:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (void)deallocateRenderResources;
- (id)outputBusses;
- (id)inputBusses;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3 client:(id)arg4;

@end
