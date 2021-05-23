/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@class ASDAudioDevice, ASDDSPGraph, ASDStreamDSPConfiguration, NSArray, NSObject, NSString, NSUserDefaults;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASDDSPStream

{
    ASDAudioDevice *_owningDevice;
    struct unique_ptr<ASDDSPStreamHelper, std::__1::default_delete<ASDDSPStreamHelper>> _streamHelper;
    struct list<ASDDSPGraphHelper, std::__1::allocator<ASDDSPGraphHelper>> _graphHelpers;
    struct unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> _clientToGraphMap;
    NSObject<OS_dispatch_queue> *_dspQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    long long _DSPCaptureType;
    NSString *_DSPCaptureDirectory;
    long long _maximumFramesPerIOCycle;
    NSUserDefaults *_defaults;
    NSArray *_underlyingStreams;
    long long _graphAudioValidationMode;
    long long _ioReferenceCount;
    NSObject<OS_dispatch_source> *mHUPSource;
    _Bool _isRunning;
    _Bool _keepGraphInitialized;
    ASDStreamDSPConfiguration *_currentDSPConfiguration;
}

@property (retain, nonatomic) ASDStreamDSPConfiguration *currentDSPConfiguration;
@property (copy, nonatomic) NSArray *underlyingStreams;
@property (nonatomic, readonly) long long maximumFramesPerIOCycle;
@property (nonatomic) _Bool keepGraphInitialized;
@property (nonatomic, readonly) _Bool isRunning;
@property (nonatomic) long long graphAudioValidationMode;
@property (nonatomic, readonly) ASDDSPGraph *hardwareDSP;

- (void)dealloc;
- (id).cxx_construct;
- (void)stopStream;
- (void)startStream;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (id)driverClassName;
- (CDUnknownBlockType)readInputBlock;
- (CDUnknownBlockType)writeMixBlock;
- (long long)getDSPCaptureTypeFromDefault;
- (void)enableDSPCaptureByType:(long long)arg1 withGraph:(id)arg2;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (void)_updateMaximumFramesPerIOCycle;
- (id)getASDAudioDefaultsPath;
- (id)getDSPCaptureDirectory;
- (void)enableDSPCaptureInAction;
- (id)_hardwareDSP;
- (_Bool)_allocateStreamingResources;
- (void)_deallocateStreamingResources;
- (void)_allocateStreamingResourcesForGraphHelper:(struct ASDDSPGraphHelper *)arg1;
- (long long)getAudioDebugTypeWithDict:(id)arg1;
- (_Bool)enableBasicDSPCaptureOnGraph:(id)arg1 withLevel:(id)arg2 andDebugType:(long long)arg3;
- (_Bool)graphStructureIsValid:(id)arg1 clientID:(unsigned long long)arg2;
- (void)_updateLatency;
- (void)_suspendProcessing;
- (void)_resumeProcessing;
- (_Bool)addClientDSP:(id)arg1 withKey:(unsigned long long)arg2;
- (_Bool)removeClientDSPwithKey:(unsigned long long)arg1;
- (id)initWithOwningDevice:(id)arg1 underlyingStreams:(id)arg2 direction:(unsigned int)arg3 plugin:(id)arg4;
- (_Bool)changePhysicalFormat:(id)arg1;
- (void)suspendProcessing;
- (void)resumeProcessing;
- (void)updateLatency;
- (_Bool)addHardwareDSP:(id)arg1;
- (_Bool)removeHardwareDSP;
- (_Bool)addClientDSP:(id)arg1 forClient:(unsigned int)arg2;
- (_Bool)removeClientDSPForClient:(unsigned int)arg1;
- (id)clientDSPForClient:(unsigned int)arg1;
- (CDUnknownBlockType)processOutputBlock;

@end
