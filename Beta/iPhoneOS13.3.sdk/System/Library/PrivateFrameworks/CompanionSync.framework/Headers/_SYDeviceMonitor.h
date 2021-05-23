/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableSet, NSUUID;

@protocol OS_dispatch_queue;

@interface _SYDeviceMonitor : NSObject

{
    NSMutableSet *_devices;
    NSUUID *_currentTargetDeviceUUID;
    NSObject<OS_dispatch_queue> *_syncQ;
}

+ (id)sharedInstance;

- (id)init;
- (id)allDevices;
- (id)deviceForPairingID:(id)arg1;
- (void)_rebuildDeviceList;
- (void)_clearDeviceList;
- (void)_deviceDidBecomeActive:(id)arg1;
- (void)_deviceDidBecomeInactive:(id)arg1;
- (id)currentTargetableDevice;
- (id)deviceForNRDevice:(id)arg1;
- (void)addNRDevice:(id)arg1;
- (void)removeNRDevice:(id)arg1;
- (void)deviceBecameTargetable:(id)arg1;

@end
