/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface HapticServer : NSObject

{
    NSXPCListener *_listener;
    struct map<unsigned int, NSMutableArray<ServerWrapper *>*, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSMutableArray<ServerWrapper *>*>>> _instanceMap;
    struct mutex _instanceMutex;
    struct ServerManager *_manager;
    struct map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255>>>> _processIndexMap;
    unsigned long long _initCount;
    unsigned long long _audioPrewarmCount;
    unsigned long long _hapticsPrewarmCount;
    unsigned long long _audioRunningCount;
    unsigned long long _hapticsRunningCount;
    unsigned long long _runningChannelIDCount;
    unsigned long long _SSSClientID;
    NSError *_savedError;
    struct WatchdogTimer *_SSSCompletionWatchDogTimer;
}

@property (readonly) unsigned long long initCount;
@property (readonly) struct ServerManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id).cxx_construct;
- (void)cleanup;
- (int)stopPrewarm;
- (shared_ptr_47fb3459)entryWithID:(unsigned long long)arg1;
- (void)incrementChannelID;
- (unsigned long long)getChannelID;
- (void)doStopRunning:(shared_ptr_47fb3459)arg1;
- (int)doStartRunning:(shared_ptr_47fb3459)arg1;
- (void)doStopPrewarm:(shared_ptr_47fb3459)arg1;
- (int)doPrewarm:(shared_ptr_47fb3459)arg1;
- (void)doReleaseClientResources:(shared_ptr_47fb3459)arg1;
- (_Bool)incrementInit:(id *)arg1;
- (void)addListener:(id)arg1 forAudioSessionID:(unsigned int)arg2;
- (void)removeProcessEntry:(unsigned long long)arg1;
- (void)removeListener:(id)arg1 withAudioSessionID:(unsigned int)arg2;
- (void)doStopRunningForInterrupt:(shared_ptr_47fb3459)arg1;
- (_Bool)setupSSSClient;
- (int)loadSynthPreset;
- (void)decrementInit;
- (void)incrementPrewarmCountForAudio:(_Bool)arg1 haptics:(_Bool)arg2;
- (void)decrementPrewarmCountAndStopAudio:(_Bool)arg1 stopHaptics:(_Bool)arg2;
- (void)incrementRunningCountForAudio:(_Bool)arg1 haptics:(_Bool)arg2;
- (void)decrementRunningCountAndStopAudio:(_Bool)arg1 stopHaptics:(_Bool)arg2;
- (void)HandleInterruptionForSessionID:(unsigned int)arg1 command:(unsigned int)arg2 dictionary:(const struct __CFDictionary *)arg3;
- (unsigned long long)addProcessEntry:(int)arg1;
- (int)startPrewarm;
- (int)playVibePattern:(struct __CFDictionary *)arg1 gain:(float)arg2 synchronizer:(struct SSPlayerSynchronizer *)arg3 flags:(unsigned int)arg4 atTime:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (int)cancelPatternWithOptions:(struct __CFDictionary *)arg1;

@end
