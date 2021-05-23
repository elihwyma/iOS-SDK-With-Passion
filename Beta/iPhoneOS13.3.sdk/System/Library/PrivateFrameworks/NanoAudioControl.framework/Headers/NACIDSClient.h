/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString;

@protocol NACIDSClientDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NACIDSClient : NSObject

{
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
    id <NACIDSClientDelegate> _delegate;
}

@property (weak, nonatomic) id <NACIDSClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)setHapticIntensity:(float)arg1;
- (void)beginObservingVolumeForTarget:(id)arg1;
- (void)beginObservingListeningModesForTarget:(id)arg1;
- (void)beginObservingAudioRoutesForCategory:(id)arg1;
- (void)endObservingVolumeForTarget:(id)arg1;
- (void)endObservingListeningModesForTarget:(id)arg1;
- (void)setVolumeValue:(float)arg1 forTarget:(id)arg2;
- (void)setMuted:(_Bool)arg1 forTarget:(id)arg2;
- (void)setProminentHapticEnabled:(_Bool)arg1;
- (void)setHapticState:(long long)arg1;
- (void)setSystemMuted:(_Bool)arg1;
- (void)setCurrentListeningMode:(id)arg1 forTarget:(id)arg2;
- (void)endObservingAudioRoutesForCategory:(id)arg1;
- (void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
- (void)_handleVolumeValueDidChange:(id)arg1;
- (void)_handleVolumeControlAvailabilityDidChange:(id)arg1;
- (void)_handleMutedStateDidChange:(id)arg1;
- (void)_handleEUVolumeLimitDidChange:(id)arg1;
- (void)_handleVolumeWarningDidChange:(id)arg1;
- (void)_handleAudioRoutesDidChange:(id)arg1;
- (void)_handleVolumeObservationCancelled:(id)arg1;
- (void)_handleRouteObservationCancelled:(id)arg1;
- (void)_handleSystemMutedStatedDidChange:(id)arg1;
- (void)_handleHapticStateDidChange:(id)arg1;
- (void)_handleListeningModesDidChange:(id)arg1;
- (void)_handleHapticIntensityDidChange:(id)arg1;
- (void)_handleProminentHapticStateDidChange:(id)arg1;
- (void)_sendMessage:(id)arg1 type:(long long)arg2 timeout:(double)arg3 queueOne:(id)arg4 priority:(long long)arg5;

@end
