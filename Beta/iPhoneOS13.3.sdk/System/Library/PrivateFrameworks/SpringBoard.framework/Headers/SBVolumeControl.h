/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, SBAVSystemControllerCache, SBHUDController, SBRingerControl, SBVolumeHUDSettings;

@protocol OS_dispatch_queue;

@interface SBVolumeControl : NSObject <Swift>

{
    SBHUDController *_hudController;
    SBVolumeHUDSettings *_volumeHUDSettings;
    SBRingerControl *_ringerControl;
    _Bool _debounce;
    unsigned long long _mode;
    NSMutableArray *_activeAudioRoutes;
    NSMutableSet *_alwaysHiddenCategories;
    NSString *_lastEventCategory;
    _Bool _hudHandledLastVolumeChange;
    _Bool _euDevice;
    _Bool _userAcknowledgedEUVolumeLimit;
    _Bool _lastVolumeChangedWasBlocked;
    _Bool _volumeDownButtonIsDown;
    _Bool _volumeUpButtonIsDown;
    _Bool _controlCenterIsPresented;
    int _anyCallActive;
    struct os_unfair_lock_s _effectiveVolumeLock;
    float _effectiveVolume;
    NSObject<OS_dispatch_queue> *_avSystemControllerQueue;
    SBAVSystemControllerCache *_avCache;
    NSString *_lastDisplayedCategory;
}

@property (nonatomic, readonly) NSString *lastDisplayedCategory;
@property (nonatomic, readonly) NSArray *activeAudioRouteTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)_isVolumeChangeAllowedForState:(id)arg1 error:(out id *)arg2;

- (float)_effectiveVolume;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)increaseVolume;
- (void)decreaseVolume;
- (void)cancelVolumeEvent;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(_Bool)arg2;
- (void)setActiveCategoryVolume:(float)arg1;
- (_Bool)isEUVolumeLimitEnabled;
- (void)toggleMute;
- (void)_serverConnectionDied:(id)arg1;
- (void)_effectiveVolumeChanged:(id)arg1;
- (void)_presentVolumeHUDWithVolume:(float)arg1;
- (void)removeAlwaysHiddenCategory:(id)arg1;
- (void)addAlwaysHiddenCategory:(id)arg1;
- (void)cache:(id)arg1 didUpdateActiveAudioRoutingWithRoute:(id)arg2 routeAttributes:(id)arg3 activeOutputDevices:(id)arg4;
- (void)cache:(id)arg1 didUpdateVolumeLimitEnforced:(_Bool)arg2;
- (id)initWithHUDController:(id)arg1 ringerControl:(id)arg2;
- (void)_resetMediaServerConnection;
- (void)_updateEUVolumeSettings;
- (void)_controlCenterWillPresent:(id)arg1;
- (void)_controlCenterDidDismiss:(id)arg1;
- (float)_volumeStepUp:(_Bool)arg1;
- (float)volumeStepUp;
- (_Bool)isEUVolumeLimitSet;
- (float)euVolumeLimit;
- (_Bool)isEUVolumeLimitEnforced;
- (void)_dispatchAVSystemControllerAsync:(CDUnknownBlockType)arg1;
- (float)_calcButtonRepeatDelay;
- (void)changeVolumeByDelta:(float)arg1;
- (float)volumeStepDown;
- (id)presentedVolumeHUDViewController;
- (void)_sendEUVolumeLimitAcknowledgementIfNecessary;
- (_Bool)_HUDIsDisplayableForLastEventCategory;
- (_Bool)_turnOnScreenIfNecessaryForEULimit:(_Bool)arg1;
- (void)_updateAudioRoutesIfNecessary:(_Bool)arg1 forRoute:(id)arg2 withAttributes:(id)arg3 andOutputDevices:(id)arg4;
- (void)_userAcknowledgedEUEnforcement:(float)arg1;
- (void)_dispatchAVSystemControllerSync:(CDUnknownBlockType)arg1;
- (_Bool)_isVolumeHUDVisibleOrFading;
- (_Bool)_HUDIsDisplayableForCategory:(id)arg1;
- (_Bool)_HUDIsDisplayableInCurrentSpringBoardContext;
- (_Bool)_isCategoryAlwaysHidden:(id)arg1;
- (_Bool)isEUDevice;
- (_Bool)wouldShowAtLeastAYellowWarningForVolume:(float)arg1;
- (_Bool)_isHUDDisplayable;
- (_Bool)_isVolumeHUDVisible;
- (id)_configureVolumeHUDViewControllerWithVolume:(float)arg1;
- (_Bool)_outputDevicesRepresentWirelessSplitterGroup:(id)arg1;
- (long long)_audioRouteTypeForOutputDevice:(id)arg1;
- (long long)_audioRouteTypeForActiveAudioRoute:(id)arg1 withAttributes:(id)arg2;
- (long long)_audioRouteTypeForTelephonyDeviceType:(long long)arg1;
- (void)_updateEffectiveVolume:(float)arg1;
- (id)avSystemControllerDispatchQueue;
- (id)existingVolumeHUDViewController;
- (_Bool)_shouldRouteChangeResultInPresentingVolumeHUDWhenTransitioningFrom:(id)arg1 toAudioRoutes:(id)arg2;
- (void)_presentVolumeHUDIfDisplayableOrRefreshIfPresented:(id)arg1;
- (void)volumeHUDViewControllerRequestsDismissal:(id)arg1;
- (void)setVolume:(float)arg1 forCategory:(id)arg2;
- (void)clearAlwaysHiddenCategories;
- (void)hideVolumeHUDIfVisible;
- (id)acquireVolumeHUDHiddenAssertionForReason:(id)arg1;
- (_Bool)userHasAcknowledgedEUVolumeLimit;
- (void)_setMediaVolumeForIAP:(float)arg1;
- (float)_getMediaVolumeForIAP;

@end
