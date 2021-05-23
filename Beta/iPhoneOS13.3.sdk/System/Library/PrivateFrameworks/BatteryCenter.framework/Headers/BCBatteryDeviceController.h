/*
 Image: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface BCBatteryDeviceController : NSObject

{
    NSMutableDictionary *_devicesByIdentifier;
    struct __CFRunLoopSource *_powerSourcesChangedRunLoopSource;
    struct __CFRunLoopSource *_accessoriesChangedRunLoopSource;
    struct __CFRunLoopSource *_accessoriesLimitedPowerRunLoopSource;
    NSMapTable *_handlersByIdentifier;
    _Bool _batterySaverModeActive;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _chargeChangeHandlingDisabled;
    NSArray *_sortedDevices;
}

@property (retain, nonatomic, getter=_sortedDevices, setter=_setSortedDevices:) NSArray *sortedDevices;
@property (nonatomic, getter=_chargeChangeHandlingDisabled, setter=_setChargeChangeHandlingDisabled:) _Bool chargeChangeHandlingDisabled;
@property (nonatomic, readonly) NSString *connectedDevicesDidChangeNotificationName;
@property (weak, nonatomic, readonly) NSArray *connectedDevices;

+ (id)sharedInstance;
+ (id)_internalBatteryDeviceGlyph;
+ (id)_glyphForBatteryDeviceWithTransport:(long long)arg1 accessoryCategory:(unsigned long long)arg2 vendor:(long long)arg3 productIdentifier:(long long)arg4 parts:(unsigned long long)arg5 modelNumber:(id)arg6;
+ (id)_glyphForBatteryDevice:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_postDidChangeNotification;
- (void)removeDeviceChangeHandlerWithIdentifier:(id)arg1;
- (void)addDeviceChangeHandler:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (void)_queue_handleBatterySaverModeChanged:(int)arg1;
- (void)_handleBatterySaverModeChanged:(int)arg1;
- (void)_handlePSChange;
- (void)_reenableChargeChangeHandling;
- (id)_queue_connectedDevices;
- (void)_queue_addDeviceChangeHandler:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (void)_queue_removeDeviceChangeHandlerWithIdentifier:(id)arg1;
- (void)_queue_invalidateConnectedDevices;
- (void)_queue_handlePSChange;
- (void)_queue_performUpdateWithPowerSourcesBlob:(void *)arg1 andPowerSourcesList:(struct __CFArray *)arg2;
- (_Bool)_isDevicePartOfPair:(id)arg1;
- (_Bool)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg1;
- (id)_identifierFromPowerSourceDescription:(id)arg1;
- (long long)_transportTypeFromPowerSourceTransportTypeString:(id)arg1;
- (long long)_vendorFromPowerSourceDescriptionVendorIdentifier:(id)arg1 transportType:(long long)arg2;
- (unsigned long long)_partFromPowerSourcePartIdentifier:(id)arg1;
- (id)_queue_batteryDeviceWithIdentifier:(id)arg1;
- (unsigned long long)_accessoryCategoryFromPowerSourceAccessoryCategory:(id)arg1 partType:(unsigned long long)arg2 transportType:(long long)arg3 vendor:(long long)arg4 productIdentifier:(long long)arg5;
- (void)_queue_setBatteryDevice:(id)arg1 forIdentifier:(id)arg2;
- (long long)_powerSourceStateFromPowerSourceStateString:(id)arg1;
- (id)_nameForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 name:(id)arg3 partName:(id)arg4;
- (int)_displayChargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(_Bool)arg3;
- (long long)_lowBatteryLevelForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 transportType:(long long)arg3;
- (void)_queue_callHandlersForDevice:(id)arg1;
- (_Bool)_shouldCoalesceDevices:(id)arg1 minimumPercentCharge:(long long *)arg2;
- (id)_deviceByCoalescingDevice:(id)arg1;
- (void)_queue_removeBatteryDevicesWithIdentifiers:(id)arg1;
- (void)connectedDevicesWithResult:(CDUnknownBlockType)arg1;
- (struct CGSize)_largestBatteryDeviceGlyphSize;
- (void)_incrementPercentChargeForConnectedDevices:(_Bool)arg1;
- (void)_incrementNumberOfConnectedDevices:(_Bool)arg1;

@end
