/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, VCAudioRelay, VCAudioRelayIOControllerSettings;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioRelayIOController : NSObject

{
    unsigned int _relayType;
    unsigned int _relayIOType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_allClients;
    NSMutableArray *_startingIOClients;
    VCAudioRelay *_relay;
    struct _VCAudioIOControllerIOState _sinkData;
    struct _VCAudioIOControllerIOState _sourceData;
    VCAudioRelayIOControllerSettings *_currentSettings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initializeStateStrings;
+ (id)sharedInstanceRemoteFacing;
+ (id)sharedInstanceClientFacing;
+ (id)sharedInstanceSafeViewRemoteFacing;
+ (id)sharedInstanceSafeViewClientFacing;

- (void)dealloc;
- (_Bool)addClient:(id)arg1;
- (_Bool)removeClient:(id)arg1;
- (struct _VCAudioIOControllerIOState *)sinkIO;
- (struct _VCAudioIOControllerIOState *)sourceIO;
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;
- (void)resetAudioTimestamps;
- (void)flushEventQueue:(struct opaqueCMSimpleQueue *)arg1;
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState *)arg1;
- (void)_cleanupDeadClients;
- (void)stopClient:(id)arg1;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)startClient:(id)arg1;
- (void)updateClient:(id)arg1;
- (id)initWithRelayType:(unsigned int)arg1 relayIOType:(unsigned int)arg2;
- (void)loadRelay;
- (void)addStartingClient:(id)arg1 controllerSettings:(id)arg2;
- (_Bool)updateStateWithClient:(id)arg1;
- (id)newRelayIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)startRelayIO:(id)arg1;
- (_Bool)handleTransitionPrepareToStarting;
- (void)unloadRelay;
- (id)newControllerSettingsWithNewClient:(id)arg1;
- (_Bool)stateIdleWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int *)arg3;
- (_Bool)statePrepareWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int *)arg3;
- (_Bool)stateStartingWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int *)arg3;
- (_Bool)stateRunningWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int *)arg3;
- (void)processEventQueue:(struct AudioEventQueue_t *)arg1 clientList:(id)arg2;

@end
