/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBusArray, AVAudioEngine, AVAudioMixerNode, AVAudioPlayerNode, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface REPlayerAudioUnit : AUAudioUnit

{
    AUAudioUnitBusArray *_outputBusArray;
    AVAudioEngine *_engine;
    AVAudioMixerNode *_sampleRateConverter;
    AVAudioPlayerNode *_playingNode;
    struct atomic<bool> _ignoreCompletionCallback;
    _Bool _didHitStop;
    struct recursive_mutex _completionMutex;
    struct atomic<bool> _looping;
    id _resource;
    struct mutex _engineConfigurationMutex;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> _recordingStreamWriter;
    CDUnknownBlockType _playingNodeRenderBlock;
    CDUnknownBlockType _sampleRateConverterRenderBlock;
    struct OpaqueAudioComponentInstance *_playingNodeAudioUnit;
    double _startTime;
    double _pauseTime;
    double _renderSampleTime;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
    CDUnknownBlockType _streamPlaybackDidComplete;
}

@property (readonly) _Bool isPrepared;
@property (retain) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (copy) CDUnknownBlockType streamPlaybackDidComplete;

- (void)pause;
- (void)resume;
- (void)stop;
- (id).cxx_construct;
- (void)play;
- (void)deallocateRenderResources;
- (id)outputBusses;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)channelCapabilities;
- (void)scheduleCurrentResourceOnPlayer:(id)arg1;
- (void)_playbackCompletionCallback;
- (void)prepareToPlayFile:(id)arg1 looping:(_Bool)arg2;
- (void)prepareToPlayBuffer:(id)arg1 looping:(_Bool)arg2;

@end
