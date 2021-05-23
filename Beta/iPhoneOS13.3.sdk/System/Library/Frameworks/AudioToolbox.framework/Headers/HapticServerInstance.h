/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

#import <Foundation/NSObject.h>

@class HapticServer, NSString, NSXPCConnection, ServerWrapper;

__attribute__((visibility("hidden")))
@interface HapticServerInstance : NSObject

{
    HapticServer *_master;
    NSXPCConnection *_connection;
    unsigned long long _clientID;
    struct shared_ptr<HapticSession> _hapticSession;
    struct shared_ptr<opaqueCMSession> _clientSession;
    ServerWrapper *_listenerWrapper;
    _Bool _clientSuspended;
    _Bool _wasPrewarmedAndSuspended;
    _Bool _wasRunningAndSuspended;
    _Bool _clientInterrupted;
    _Bool _runningInBackground;
    struct WatchdogTimer *_FinishWithCompletionWatchDogTimer;
}

@property (readonly) HapticServer *master;
@property (readonly) unsigned long long clientID;
@property _Bool clientSuspended;
@property _Bool wasPrewarmedAndSuspended;
@property _Bool clientInterrupted;
@property _Bool wasRunningAndSuspended;
@property _Bool runningInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)stopPrewarm;
- (void)stopRunning;
- (void)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)removeCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prewarm:(CDUnknownBlockType)arg1;
- (void)startRunning:(CDUnknownBlockType)arg1;
- (void)stopRunning:(CDUnknownBlockType)arg1;
- (id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)removeChannel:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestChannels:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)releaseChannels;
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSessionID:(unsigned int)arg1 isShared:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)allocateClientResources:(CDUnknownBlockType)arg1;
- (void)releaseClientResources;
- (void)getHapticLatency:(CDUnknownBlockType)arg1;
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)loadHapticSequenceFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadHapticSequenceFromEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadVibePattern:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)detachSequence:(unsigned long long)arg1;
- (void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyClientOnStopWithReason:(long long)arg1 error:(id)arg2;
- (void)handleClientRouteChange:(id)arg1;
- (void)handleClientApplicationStateChange:(id)arg1;
- (void)muteClientForRingerSwitch:(_Bool)arg1;
- (void)fadeClientForSessionInterruption:(_Bool)arg1 fadeTime:(float)arg2 fadeLevel:(float)arg3 stopAfterFade:(_Bool)arg4;
- (void)unmuteClientAfterSessionInterruption:(float)arg1;
- (void)handleClientSessionInterruptionCommand:(unsigned int)arg1 dictionary:(id)arg2;
- (id)initWithMaster:(id)arg1 id:(unsigned long long)arg2 connection:(id)arg3 outError:(id *)arg4;
- (void)handleConnectionError;
- (_Bool)setupAudioSessionFromID:(unsigned int)arg1 isShared:(_Bool)arg2 error:(id *)arg3;
- (void)setupCompletionWatchdogTimerForTime:(double)arg1;
- (void)resetCompletionWatchdogTimer;

@end
