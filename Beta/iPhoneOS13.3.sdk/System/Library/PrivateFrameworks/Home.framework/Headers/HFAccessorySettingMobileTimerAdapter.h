/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAccessorySettingAdapter.h>

@class HMAccessoryCollectionSetting, NAFuture, NSHashTable, NSMutableSet, NSSet;

@interface HFAccessorySettingMobileTimerAdapter : HFAccessorySettingAdapter

{
    NAFuture *_alarmManagerForSynchronizationFuture;
    NSHashTable *_observers;
    NAFuture *_setupAccessoryAdapterModeFuture;
    NSMutableSet *_internalAlarmsBeingAdded;
    NSMutableSet *_internalAlarmsBeingRemoved;
    NSMutableSet *_internalAlarmsBeingUpdated;
}

@property (retain, nonatomic) NAFuture *alarmManagerForSynchronizationFuture;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, readonly) NAFuture *setupAccessoryAdapterModeFuture;
@property (copy, nonatomic, readonly) NSMutableSet *internalAlarmsBeingAdded;
@property (copy, nonatomic, readonly) NSMutableSet *internalAlarmsBeingRemoved;
@property (copy, nonatomic, readonly) NSMutableSet *internalAlarmsBeingUpdated;
@property (nonatomic, readonly) _Bool isAdapterReady;
@property (nonatomic, readonly) HMAccessoryCollectionSetting *alarmCollectionSetting;
@property (copy, nonatomic, readonly) NSSet *alarmsWithPendingEdits;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)addAlarm:(id)arg1;
- (id)removeAlarm:(id)arg1;
- (id)allAlarms;
- (id)updateAlarm:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (void)_setupDebugHandler;
- (void)_notifyObserversOfUpdates;
- (id)_synchronizeHomeKitToMobileTimer;
- (id)alarmSettingsCurrentItemsFuture;
- (id)alarmCollectionSettingFuture;
- (id)alarmManagerAlarms;
- (id)allAlarmsFuture;
- (void)_alarmWasAdded:(id)arg1;
- (void)_alarmWasDeleted:(id)arg1;
- (void)_alarmWasUpdated:(id)arg1;
- (void)_respondToAlarmManagerUpdate;
- (id)_synchronizeMobileTimerToHomeKitWithChangeType:(unsigned long long)arg1;

@end
