/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NACIDSClient, NPSDomainAccessor, NSMutableDictionary, NSString, NSXPCListener;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NACXPCServer : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_audioAndHapticPreviewQueue;
    NPSDomainAccessor *_domainAccessor;
    NSMutableDictionary *_volumeRecords;
    NSMutableDictionary *_listeningModesRecords;
    NSMutableDictionary *_audioRoutesRecords;
    NSXPCListener *_xpcListener;
    NACIDSClient *_idsClient;
    float _hapticIntensity;
    _Bool _prominentHapticEnabled;
    long long _hapticState;
    _Bool _systemMutedState;
    NSObject<OS_dispatch_source> *_audioRouteDeferTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)server;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setHapticIntensity:(float)arg1;
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
- (id)_cachedVolumeRecords;
- (float)_cachedHapticIntensity;
- (_Bool)_cachedSystemMutedState;
- (_Bool)_cachedProminentHapticState;
- (long long)_cachedHapticState;
- (void)_cleanupConnection:(id)arg1;
- (void)_beginObservingVolumeForTarget:(id)arg1 connection:(id)arg2;
- (id)_volumeRecordForTarget:(id)arg1;
- (long long)_aggregatedCountOfObserversForTarget:(id)arg1 inRecords:(id)arg2;
- (void)_endObservingVolumeForTarget:(id)arg1 connection:(id)arg2;
- (void)_beginObservingListeningModesForTarget:(id)arg1 connection:(id)arg2;
- (void)_endObservingListeningModesForTarget:(id)arg1 connection:(id)arg2;
- (id)_listeningModesRecordForTarget:(id)arg1;
- (id)_audioRoutesRecordForCategory:(id)arg1;
- (void)_endObservingAudioRoutesForCategory:(id)arg1 connection:(id)arg2;
- (void)_persistVolumeRecords;
- (void)_persistHapticIntensity;
- (void)_persistProminentHapticState;
- (void)_persistHapticState;
- (void)_persistSystemMutedState;
- (void)_scheduleDeferredAudioRoutesUpdate:(id)arg1 category:(id)arg2;
- (void)_updateAudioRoutes:(id)arg1 category:(id)arg2;
- (void)_cancelDeferredAudioRoutesUpdate;
- (id)_routeObservationCategoriesForConnection:(id)arg1;
- (void)client:(id)arg1 volumeValue:(float)arg2 didChangeForTarget:(id)arg3;
- (void)client:(id)arg1 volumeControlAvailable:(_Bool)arg2 didChangeForTarget:(id)arg3;
- (void)client:(id)arg1 mutedState:(_Bool)arg2 didChangeForTarget:(id)arg3;
- (void)client:(id)arg1 EULimit:(float)arg2 didChangeForTarget:(id)arg3;
- (void)client:(id)arg1 volumeWarningEnabled:(_Bool)arg2 volumeWarningState:(long long)arg3 didChangeForTarget:(id)arg4;
- (void)client:(id)arg1 volumeObservationCancelledForTarget:(id)arg2;
- (void)client:(id)arg1 availableListeningModes:(id)arg2 didChangeForTarget:(id)arg3;
- (void)client:(id)arg1 currentListeningMode:(id)arg2 didChangeForTarget:(id)arg3;
- (void)client:(id)arg1 didFailToSetCurrentListeningModeForTarget:(id)arg2 error:(id)arg3;
- (void)client:(id)arg1 audioRoutes:(id)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 routeObservationCancelledForCategory:(id)arg2;
- (void)client:(id)arg1 systemMutedStateDidChange:(_Bool)arg2;
- (void)client:(id)arg1 hapticStateDidChange:(long long)arg2;
- (void)client:(id)arg1 hapticIntensityDidChange:(float)arg2;
- (void)client:(id)arg1 prominentHapticStateDidChange:(_Bool)arg2;

@end
