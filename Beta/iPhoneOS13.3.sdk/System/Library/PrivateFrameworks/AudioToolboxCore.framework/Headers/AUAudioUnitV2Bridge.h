/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@class AUParameterTree, AUV2BridgeBusArray, NSObject;

@protocol OS_dispatch_queue;

@interface AUAudioUnitV2Bridge

{
    NSObject<OS_dispatch_queue> *_eventListenerQueue;
    struct AUListenerBase *_eventListener;
    struct AUListenerBase *_parameterListener;
    _Bool _removingObserverWithContext;
    _Bool _audioUnitIsOwned;
    AUV2BridgeBusArray *_inputBusses;
    AUV2BridgeBusArray *_outputBusses;
    AUParameterTree *_cachedParameterTree;
    struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> _renderer;
    CDUnknownBlockType _MIDIOutputEventBlock;
    struct OpaqueAudioComponentInstance *_audioUnit;
}

@property (nonatomic, readonly) struct OpaqueAudioComponentInstance *audioUnit;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)reset;
- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)parameterTree;
- (id)outputBusses;
- (id)inputBusses;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (void)invalidateAudioUnit;
- (void)setMIDIOutputEventBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (void)setFullState:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)channelCapabilities;
- (CDUnknownBlockType)MIDIOutputEventBlock;
- (_Bool)_setElementCount:(unsigned int)arg1 count:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)_elementCountWritable:(unsigned int)arg1;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(_Bool)arg3;
- (unsigned int)_elementCount:(unsigned int)arg1;
- (void)_rebuildBusses:(unsigned int)arg1;
- (void)_addOrRemoveParameterListeners:(_Bool)arg1;
- (void)_invalidateParameterTree;
- (void)init2;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1 description:(struct AudioComponentDescription)arg2;
- (void)_createEventListenerQueue;

@end
