/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSSet, _UIStatusBarDataActivityEntry, _UIStatusBarDataBackgroundActivityEntry, _UIStatusBarDataBatteryEntry, _UIStatusBarDataBluetoothEntry, _UIStatusBarDataBoolEntry, _UIStatusBarDataCellularEntry, _UIStatusBarDataEntry, _UIStatusBarDataIntegerEntry, _UIStatusBarDataLocationEntry, _UIStatusBarDataLockEntry, _UIStatusBarDataStringEntry, _UIStatusBarDataTetheringEntry, _UIStatusBarDataThermalEntry, _UIStatusBarDataVoiceControlEntry, _UIStatusBarDataWifiEntry;

@interface _UIStatusBarData : NSObject <Swift>

{
    _UIStatusBarDataStringEntry *_timeEntry;
    _UIStatusBarDataStringEntry *_shortTimeEntry;
    _UIStatusBarDataStringEntry *_dateEntry;
    _UIStatusBarDataStringEntry *_personNameEntry;
    _UIStatusBarDataStringEntry *_deviceNameEntry;
    _UIStatusBarDataCellularEntry *_cellularEntry;
    _UIStatusBarDataCellularEntry *_secondaryCellularEntry;
    _UIStatusBarDataWifiEntry *_wifiEntry;
    _UIStatusBarDataBatteryEntry *_mainBatteryEntry;
    _UIStatusBarDataBluetoothEntry *_bluetoothEntry;
    _UIStatusBarDataThermalEntry *_thermalEntry;
    _UIStatusBarDataActivityEntry *_activityEntry;
    _UIStatusBarDataTetheringEntry *_tetheringEntry;
    _UIStatusBarDataLocationEntry *_locationEntry;
    _UIStatusBarDataLockEntry *_lockEntry;
    _UIStatusBarDataBoolEntry *_quietModeEntry;
    _UIStatusBarDataBoolEntry *_electronicTollCollectionEntry;
    _UIStatusBarDataBoolEntry *_radarEntry;
    _UIStatusBarDataEntry *_rotationLockEntry;
    _UIStatusBarDataEntry *_airplaneModeEntry;
    _UIStatusBarDataEntry *_ttyEntry;
    _UIStatusBarDataEntry *_nikeEntry;
    _UIStatusBarDataEntry *_assistantEntry;
    _UIStatusBarDataEntry *_studentEntry;
    _UIStatusBarDataEntry *_vpnEntry;
    _UIStatusBarDataEntry *_liquidDetectionEntry;
    _UIStatusBarDataVoiceControlEntry *_voiceControlEntry;
    _UIStatusBarDataEntry *_airPlayEntry;
    _UIStatusBarDataEntry *_carPlayEntry;
    _UIStatusBarDataEntry *_alarmEntry;
    _UIStatusBarDataIntegerEntry *_volumeEntry;
    _UIStatusBarDataBackgroundActivityEntry *_backgroundActivityEntry;
    _UIStatusBarDataStringEntry *_backNavigationEntry;
    _UIStatusBarDataStringEntry *_forwardNavigationEntry;
}

@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) NSSet *existingEntryKeys;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *timeEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *shortTimeEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *dateEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *personNameEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *deviceNameEntry;
@property (copy, nonatomic) _UIStatusBarDataCellularEntry *cellularEntry;
@property (copy, nonatomic) _UIStatusBarDataCellularEntry *secondaryCellularEntry;
@property (copy, nonatomic) _UIStatusBarDataWifiEntry *wifiEntry;
@property (copy, nonatomic) _UIStatusBarDataBatteryEntry *mainBatteryEntry;
@property (copy, nonatomic) _UIStatusBarDataBluetoothEntry *bluetoothEntry;
@property (copy, nonatomic) _UIStatusBarDataThermalEntry *thermalEntry;
@property (copy, nonatomic) _UIStatusBarDataActivityEntry *activityEntry;
@property (copy, nonatomic) _UIStatusBarDataTetheringEntry *tetheringEntry;
@property (copy, nonatomic) _UIStatusBarDataLocationEntry *locationEntry;
@property (copy, nonatomic) _UIStatusBarDataLockEntry *lockEntry;
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *quietModeEntry;
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *electronicTollCollectionEntry;
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *radarEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *rotationLockEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *airplaneModeEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *ttyEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *nikeEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *assistantEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *studentEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *vpnEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *liquidDetectionEntry;
@property (copy, nonatomic) _UIStatusBarDataVoiceControlEntry *voiceControlEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *airPlayEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *carPlayEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *alarmEntry;
@property (copy, nonatomic) _UIStatusBarDataIntegerEntry *volumeEntry;
@property (copy, nonatomic) _UIStatusBarDataBackgroundActivityEntry *backgroundActivityEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *backNavigationEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *forwardNavigationEntry;

+ (_Bool)supportsSecureCoding;
+ (id)entryKeys;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyUpdate:(id)arg1;
- (id)dataByApplyingUpdate:(id)arg1 keys:(id)arg2;
- (id)dataByApplyingOverlay:(id)arg1;
- (void)_applyUpdate:(id)arg1 keys:(id)arg2;
- (void)makeUpdateFromData:(id)arg1;
- (id)updateFromData:(id)arg1;

@end
