/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class DNDState, DNDStateService, NSDateFormatter, NSHashTable, NSString, NSTimer, SBSStatusBarStyleOverridesAssertion, SBStatusBarDefaults, SBSystemStatusBatteryDataProvider, SBSystemStatusWifiDataProvider, SBTelephonyManager, SBUserSessionController, STBatteryStatusDomain, STTelephonyStatusDomain, STTelephonyStatusDomainDataProvider, STVoiceControlStatusDomain, STWifiStatusDomain;

@interface SBStatusBarStateAggregator : NSObject

{
    SBStatusBarDefaults *_statusBarDefaults;
    SBTelephonyManager *_override_telephonyManager;
    SBUserSessionController *_override_userSessionController;
    unsigned long long _coalescentBlockDepth;
    _Bool _hasPostedOnce;
    unsigned long long _itemPostState[42];
    _Bool _nonItemDataChanged;
    CDStruct_0942cde0 _data;
    int _actions;
    _Bool _performingAtomicUpdate;
    unsigned long long _atomicUpdateItemPostState[42];
    CDStruct_0942cde0 _atomicUpdateData;
    NSHashTable *_postObservers;
    _Bool _notifyingPostObservers;
    long long _showsRecordingOverrides;
    NSTimer *_timeItemTimer;
    NSDateFormatter *_timeItemDateFormatter;
    NSDateFormatter *_shortTimeItemDateFormatter;
    NSDateFormatter *_dateItemDateFormatter;
    NSString *_timeItemTimeString;
    NSString *_shortTimeItemTimeString;
    NSString *_dateItemTimeString;
    NSString *_serviceString;
    NSString *_serviceCrossfadeString;
    NSString *_secondaryServiceString;
    NSString *_secondaryServiceCrossfadeString;
    NSString *_serviceBadgeString;
    NSString *_secondaryServiceBadgeString;
    unsigned long long _airplaneTransitionToken;
    _Bool _suppressCellServiceForAirplaneModeTransition;
    _Bool _cachedShowRSSI;
    _Bool _showsActivityIndicatorOnHomeScreen;
    long long _activityIndicatorEverywhereCount;
    long long _syncActivityIndicatorCount;
    NSString *_activityDisplayIdentifier;
    NSString *_batteryDetailString;
    _Bool _shouldShowBluetoothHeadphoneGlyph;
    _Bool _shouldShowBluetoothHeadphoneBatteryPercent;
    _Bool _alarmEnabled;
    int _locationStatusBarIconType;
    unsigned int _locationIconPendingRequestCount;
    SBSStatusBarStyleOverridesAssertion *_tetheringStatusBarStyleOverrideAssertion;
    SBUserSessionController *_lazy_userSessionController;
    NSString *_personName;
    NSString *_overridePersonName;
    DNDStateService *_dndStateService;
    DNDState *_dndState;
    _Bool _isInternalOrDeveloperDevice;
    SBSystemStatusBatteryDataProvider *_batteryDataProvider;
    STTelephonyStatusDomainDataProvider *_telephonyDataProvider;
    SBSystemStatusWifiDataProvider *_wifiDataProvider;
    STBatteryStatusDomain *_batteryDomain;
    STTelephonyStatusDomain *_telephonyDomain;
    STVoiceControlStatusDomain *_voiceControlDomain;
    STWifiStatusDomain *_wifiDomain;
}

@property (nonatomic, readonly) SBSystemStatusBatteryDataProvider *batteryDataProvider;
@property (nonatomic, readonly) STTelephonyStatusDomainDataProvider *telephonyDataProvider;
@property (nonatomic, readonly) SBSystemStatusWifiDataProvider *wifiDataProvider;
@property (nonatomic, readonly) STBatteryStatusDomain *batteryDomain;
@property (nonatomic, readonly) STTelephonyStatusDomain *telephonyDomain;
@property (nonatomic, readonly) STVoiceControlStatusDomain *voiceControlDomain;
@property (nonatomic, readonly) STWifiStatusDomain *wifiDomain;
@property (retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager;
@property (retain, nonatomic, getter=_userSessionController, setter=_setUserSessionController:) SBUserSessionController *userSessionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (int)_thermalColorForLevel:(long long)arg1;

- (id)init;
- (void)dealloc;
- (const CDStruct_0942cde0 *)_statusBarData;
- (void)_registerForNotifications;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)_updateAirplaneMode;
- (void)beginCoalescentBlock;
- (void)endCoalescentBlock;
- (void)setShowsActivityIndicatorOnHomeScreen:(_Bool)arg1;
- (void)cache:(id)arg1 didUpdateActiveAudioRoute:(id)arg2;
- (void)cache:(id)arg1 didUpdatePickableRoutes:(id)arg2;
- (void)setShowsActivityIndicatorEverywhere:(_Bool)arg1;
- (void)setShowsSyncActivityIndicator:(_Bool)arg1;
- (void)setShowsOverridesForRecording:(_Bool)arg1;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)updateStatusBarItem:(int)arg1;
- (void)setUserNameOverride:(id)arg1;
- (void)setAlarmEnabled:(_Bool)arg1;
- (void)_stopTimeItemTimer;
- (void)_removeTetheringStatusBarStyleOverrideAssertion;
- (void)_postItem:(int)arg1 withState:(unsigned long long)arg2 inList:(unsigned long long *)arg3;
- (_Bool)_setItem:(int)arg1 enabled:(_Bool)arg2 inList:(_Bool *)arg3 itemPostState:(unsigned long long *)arg4;
- (void)_resetTimeItemFormatter;
- (void)_updateSignalStrengthItem;
- (void)_updateServiceItem;
- (void)_updateDataNetworkItem;
- (void)_updateSecondarySignalStrengthItem;
- (void)_updateSecondaryServiceItem;
- (void)_updateSecondaryDataNetworkItem;
- (void)_updateBatteryItems;
- (void)_tickRefCount:(long long *)arg1 up:(_Bool)arg2 withTransitionBlock:(CDUnknownBlockType)arg3;
- (void)_updateBluetoothBatteryItem;
- (void)_requestActions:(int)arg1;
- (void)_notifyItemChanged:(int)arg1;
- (void)_updateTetheringState;
- (void)_buildLocationState;
- (void)_updatePersonNameItem;
- (void)_updateLockItem;
- (void)_restartTimeItemTimer;
- (void)_noteAirplaneModeChanged;
- (void)_updateCarPlayItem;
- (void)_updateThermalColorItem;
- (_Bool)_setItem:(int)arg1 enabled:(_Bool)arg2;
- (void)_updateSignalStrengthItem:(int)arg1 withData:(id)arg2 SIMInfo:(id)arg3 barsGetter:(CDUnknownBlockType)arg4 barsSetter:(CDUnknownBlockType)arg5;
- (void)_updateServiceItem:(int)arg1 withData:(id)arg2 SIMInfo:(id)arg3 otherSIMInfo:(id)arg4 serviceStringGetter:(CDUnknownBlockType)arg5 serviceStringSetter:(CDUnknownBlockType)arg6 serviceCrossfadeStringGetter:(CDUnknownBlockType)arg7 serviceCrossfadeStringSetter:(CDUnknownBlockType)arg8 serviceContentTypeGetter:(CDUnknownBlockType)arg9 serviceContentTypeSetter:(CDUnknownBlockType)arg10 serviceBadgeStringGetter:(CDUnknownBlockType)arg11 serviceBadgeStringSetter:(CDUnknownBlockType)arg12;
- (_Bool)_shouldShowPersonName;
- (_Bool)_shouldShowEmergencyOnlyStatusForInfo:(id)arg1;
- (void)_updateDataNetworkItem:(int)arg1 withData:(id)arg2 primary:(_Bool)arg3 dataNetworkTypeGetter:(CDUnknownBlockType)arg4 dataNetworkTypeSetter:(CDUnknownBlockType)arg5;
- (int)_statusBarBatteryStateForSystemStatusChargingState:(unsigned long long)arg1;
- (void)_updateStateAtomicallyWithoutAnimationUsingBlock:(CDUnknownBlockType)arg1;
- (void)setShouldShowBluetoothHeadphoneGlyph:(_Bool)arg1 andShouldShowBluetoothHeadphoneBatteryPercent:(_Bool)arg2;
- (void)_updateCallForwardingItem:(int)arg1 withInfo:(id)arg2;
- (void)_notifyNonItemDataChanged;
- (void)_updateTimeItems;
- (void)_updateQuietModeItem;
- (void)_updateBluetoothHeadphonesItem;
- (void)_updateBluetoothItem;
- (void)_updateTTYItem;
- (void)_updateAlarmItem;
- (void)_updateLocationItem;
- (void)_updateRotationLockItem;
- (void)_updateAirplayItem;
- (void)_updateVPNItem;
- (void)_updateCallForwardingItem;
- (void)_updateSecondaryCallForwardingItem;
- (void)_updateVoiceControlItem;
- (void)_updateActivityItem;
- (void)_updateLiquidDetectionItem;
- (void)_updateLocationState;
- (void)sendStatusBarActions:(int)arg1;
- (void)addPostingObserver:(id)arg1;
- (void)removePostingObserver:(id)arg1;

@end
