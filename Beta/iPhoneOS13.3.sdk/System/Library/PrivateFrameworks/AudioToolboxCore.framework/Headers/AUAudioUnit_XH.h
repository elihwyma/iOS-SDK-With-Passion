/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@class AUAudioUnitBusArray_XH, AUParameterTree, NSArray, NSExtension, NSObject, NSUUID, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUAudioUnit_XH

{
    NSExtension *_extension;
    struct OpaqueAudioComponentInstance *_componentInstance;
    NSUUID *_requestIdentifier;
    int _remotePID;
    _Bool _canRender;
    _Bool _canProcess;
    _Bool _removingObserverWithContext;
    _Bool _installedParamTreeObserver;
    AUAudioUnitBusArray_XH *_inputBusses;
    AUAudioUnitBusArray_XH *_outputBusses;
    struct unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData>> _elementCountListenerToken;
    struct recursive_mutex _propListenerMutex;
    struct vector<AUAudioUnit_XH_PropListener, std::__1::allocator<AUAudioUnit_XH_PropListener>> _propListeners;
    struct IPCAURenderingClient _renderClient;
    AUParameterTree *_cachedParameterTree;
    NSObject<OS_dispatch_queue> *_viewControllerRequestQueue;
    NSArray *_userPresets;
    AUAudioUnit_XH *_strongInstance;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) AUAudioUnit_XH *strongInstance;
@property (weak, nonatomic) NSXPCConnection *xpcConnection;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)instantiateWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 options:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;

- (void)dealloc;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)reset;
- (id).cxx_construct;
- (id)_getValueForKey:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)deallocateRenderResources;
- (id)parameterTree;
- (id)outputBusses;
- (id)inputBusses;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (void)propertiesChanged:(id)arg1;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_getValueForProperty:(id)arg1;
- (_Bool)_setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 error:(id *)arg3;
- (void)doOpen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didCrash;
- (void)internalInitWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 completion:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)internalRenderBlock;
- (void)_refreshBusses:(unsigned int)arg1;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (id)supportedViewConfigurations:(id)arg1;
- (void)selectViewConfiguration:(id)arg1;
- (_Bool)providesUserInterface;
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;
- (_Bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;
- (_Bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;
- (void)invalidateAllParameters;
- (void)setFullState:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (_Bool)saveUserPreset:(id)arg1 error:(id *)arg2;
- (_Bool)deleteUserPreset:(id)arg1 error:(id *)arg2;
- (id)presetStateFor:(id)arg1 error:(id *)arg2;
- (id)userPresets;

@end
