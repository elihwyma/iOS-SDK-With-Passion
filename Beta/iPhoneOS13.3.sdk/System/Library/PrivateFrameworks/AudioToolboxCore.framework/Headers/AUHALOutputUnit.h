/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <AudioToolboxCore/AUAudioUnitV2Bridge.h>

__attribute__((visibility("hidden")))
@interface AUHALOutputUnit : AUAudioUnitV2Bridge

{
    CDUnknownBlockType _outputProvider;
    CDUnknownBlockType _inputHandler;
    _Bool _inputWasEnabled;
    _Bool _outputWasEnabled;
    _Bool _inputBusEnabled;
    int _renderObserverToken;
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> _renderObservers;
}

@property (nonatomic, getter=isInputEnabled) _Bool inputEnabled;
@property (nonatomic, getter=isOutputEnabled) _Bool outputEnabled;

- (void)dealloc;
- (_Bool)isRunning;
- (id).cxx_construct;
- (void)removeRenderObserver:(long long)arg1;
- (long long)tokenByAddingRenderObserver:(CDUnknownBlockType)arg1;
- (void)setInputHandler:(CDUnknownBlockType)arg1;
- (void)setOutputProvider:(CDUnknownBlockType)arg1;
- (void)stopHardware;
- (_Bool)startHardwareAndReturnError:(id *)arg1;
- (_Bool)canPerformOutput;
- (_Bool)canPerformInput;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)addRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (void)removeRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(_Bool)arg3;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1 description:(struct AudioComponentDescription)arg2;
- (CDUnknownBlockType)_inputHandler;
- (void)initAUHALOutputUnit;
- (CDUnknownBlockType)outputProvider;

@end
