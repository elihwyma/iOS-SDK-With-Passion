/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CBCentralManager, CBPeripheralManager, CUSystemMonitor, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CUTDSAgent : NSObject

{
    unsigned char _advertiseBytes[32];
    unsigned long long _advertiseLen;
    unsigned long long _advertiserCount;
    unsigned long long _advertiseProviderCount;
    unsigned long long _advertiseSeekerCount;
    unsigned long long _advertiseTriggerCount;
    _Bool _advertisingStartCalled;
    CDStruct_83abfce7 _bleAddress48;
    _Bool _bleAddressOverride;
    _Bool _bleAddressValid;
    CUSystemMonitor *_bleAddressMonitor;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct NSMutableDictionary *_devices;
    NSObject<OS_dispatch_source> *_lingerTimer;
    CBPeripheralManager *_peripheralManager;
    struct NSMutableSet *_providers;
    _Bool _scannerStartCalled;
    struct NSMutableSet *_seekers;
    struct NSMutableSet *_sessions;
    struct LogCategory *_ucat;
    unsigned int _updateIDLast;
    _Bool _updatePending;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedTDSAgent;

- (id)init;
- (void)_update;
- (void)removeProvider:(id)arg1;
- (void)_scheduleUpdate;
- (void)addSession:(id)arg1;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)addProvider:(id)arg1;
- (void)addSeeker:(id)arg1;
- (void)removeSeeker:(id)arg1;
- (void)removeSession:(id)arg1;
- (void)_advertiserEnsureStarted;
- (void)_advertiserEnsureStopped;
- (void)_bleAddressMonitorEnsureStarted;
- (void)_bleAddressMonitorEnsureStopped;
- (void)_bleAddressChanged;
- (void)_scannerEnsureStarted;
- (void)_scannerEnsureStopped;
- (void)_startLingerTimer;
- (void)_cancelLingerTimer;
- (void)_processChanges;

@end
