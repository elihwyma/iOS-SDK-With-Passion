/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class ATDeviceService, NSString;

@protocol OS_dispatch_queue;

@interface ATDevicePairedSyncManager : NSObject

{
    ATDeviceService *_deviceService;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedPairedSyncManager;

- (id)init;
- (void)stop;
- (void)start;
- (void)_cleanupSyncState;
- (void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(id)arg1;
- (void)nanoPairedDeviceStatusMonitorNewActiveDevice:(id)arg1;
- (void)nanoPairedDeviceStatusMonitor:(id)arg1 didFinishInitialSyncForPairingIdentifier:(id)arg2;
- (void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2;
- (void)_triggerInitialSync;
- (void)_setInstallDateIfNeededForBundleID:(id)arg1;
- (_Bool)hasRestriction;

@end
