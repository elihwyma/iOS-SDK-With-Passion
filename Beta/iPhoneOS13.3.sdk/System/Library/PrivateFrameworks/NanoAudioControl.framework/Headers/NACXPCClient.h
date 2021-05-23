/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NACXPCClient : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSMutableSet *_routeObservingCategories;
    NSMutableSet *_volumeObservingTargets;
    NSMutableSet *_listeningModesObservingTargets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedClient;

- (id)init;
- (id)_proxy;
- (void)setHapticIntensity:(float)arg1;
- (void)_createConnection;
- (void)beginObservingVolumeForTarget:(id)arg1;
- (void)beginObservingListeningModesForTarget:(id)arg1;
- (void)beginObservingAudioRoutesForCategory:(id)arg1;
- (void)endObservingVolumeForTarget:(id)arg1;
- (void)endObservingListeningModesForTarget:(id)arg1;
- (void)volumeValueForTarget:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)volumeControlAvailabilityForTarget:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)mutedStateForTarget:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)hapticState:(CDUnknownBlockType)arg1;
- (void)hapticIntensity:(CDUnknownBlockType)arg1;
- (void)prominentHapticEnabled:(CDUnknownBlockType)arg1;
- (void)systemMutedState:(CDUnknownBlockType)arg1;
- (void)EULimitForTarget:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)volumeWarningForTarget:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)setVolumeValue:(float)arg1 forTarget:(id)arg2;
- (void)setMuted:(_Bool)arg1 forTarget:(id)arg2;
- (void)setProminentHapticEnabled:(_Bool)arg1;
- (void)setHapticState:(long long)arg1;
- (void)setSystemMuted:(_Bool)arg1;
- (void)availableListeningModesForTarget:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)currentListeningModeForTarget:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)setCurrentListeningMode:(id)arg1 forTarget:(id)arg2;
- (void)audioRoutesForCategory:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)endObservingAudioRoutesForCategory:(id)arg1;
- (void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
- (void)playAudioAndHapticPreview;
- (void)playDefaultHapticPreview;
- (void)playProminentHapticPreview;
- (void)_resumeVolumeObservingIfNecessary;
- (void)_resumeListeningModesObservingIfNecessary;
- (void)_resumeRouteObservingIfNecessary;

@end
