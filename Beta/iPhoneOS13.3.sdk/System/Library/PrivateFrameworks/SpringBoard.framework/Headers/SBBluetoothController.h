/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBBluetoothController : NSObject

{
    NSMutableArray *_devices;
    _Bool _tetheringConnected;
}

+ (id)sharedInstance;

- (void)dealloc;
- (int)batteryLevel;
- (void)startWatchingForDevices;
- (_Bool)tetheringConnected;
- (void)stopWatchingForDevices;
- (id)firstBTDeviceToReportBatteryLevel;
- (void)iapDeviceChanged:(id)arg1;
- (void)connectionChanged:(id)arg1;
- (void)addDeviceNotification:(id)arg1;
- (void)removeDeviceNotification:(id)arg1;
- (void)batteryChanged:(id)arg1;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)arg1;
- (void)bluetoothDeviceEndedVoiceControl:(id)arg1;
- (void)noteDevicesChanged;
- (void)updateTetheringConnected;
- (void)updateBattery;
- (_Bool)canReportBatteryLevel;
- (id)deviceForAudioRoute:(id)arg1;

@end
