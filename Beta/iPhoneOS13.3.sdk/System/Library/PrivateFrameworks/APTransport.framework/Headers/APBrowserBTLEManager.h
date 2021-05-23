/*
 Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

#import <Foundation/NSObject.h>

@class APBluetoothClient, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APBrowserBTLEManager : NSObject

{
    unsigned short _btleMode;
    _Bool _p2pSoloSupported;
    _Bool _p2pSoloSupportedIsSet;
    _Bool _trackingEnabled;
    _Bool _isAdvertising;
    _Bool _isScanning;
    _Bool _isEnabled;
    _Bool _preferencesUpdated;
    _Bool _isInvalidated;
    _Bool _isSoloBeaconDisabled;
    APBluetoothClient *_btleClient;
    void *_eventHandlerContext;
    CDUnknownFunctionPointerType _eventHandlerFunc;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueAPBrowserBTLEManager *_managerRef;
    NSMutableDictionary *_btleDevices;
    NSObject<OS_dispatch_source> *_staleDevicesTimer;
}

@property (retain, nonatomic) APBluetoothClient *btleClient;
@property (nonatomic) void *eventHandlerContext;
@property (nonatomic) CDUnknownFunctionPointerType eventHandlerFunc;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool isAdvertising;
@property (nonatomic) _Bool isEnabled;
@property (nonatomic) _Bool isScanning;
@property (nonatomic) _Bool isSoloBeaconDisabled;
@property (nonatomic) _Bool isInvalidated;
@property (nonatomic) _Bool preferencesUpdated;
@property (nonatomic) struct OpaqueAPBrowserBTLEManager *managerRef;
@property (retain, nonatomic) NSMutableDictionary *btleDevices;
@property (nonatomic) NSObject<OS_dispatch_source> *staleDevicesTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)createEventInfoDictionary:(id *)arg1 withDeviceID:(id)arg2 IPAddress:(id)arg3 port:(id)arg4 supportsSolo:(id)arg5 rssi:(id)arg6;

- (id)init;
- (void)dealloc;
- (int)invalidate;
- (int)stop;
- (int)update;
- (void)airPlaySoloDidUpdateState:(id)arg1;
- (void)airPlaySoloStartedAdvertising:(id)arg1;
- (void)airPlaySoloStoppedAdvertising:(id)arg1;
- (void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)airPlaySoloStartedScanning:(id)arg1;
- (void)airPlaySoloStoppedScanning:(id)arg1;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (int)setBTLEMode:(unsigned short)arg1;
- (int)getBTLEMode:(unsigned short *)arg1;
- (int)setEventHandler:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 managerRef:(struct OpaqueAPBrowserBTLEManager *)arg3;
- (int)copyShowInfo:(id *)arg1 verbose:(_Bool)arg2;
- (int)ensurePreferencesUpdatedWithShouldForce:(_Bool)arg1;
- (int)setSupportsSolo:(_Bool)arg1;
- (int)setTrackingEnabled:(_Bool)arg1;
- (int)getTrackingEnabled:(_Bool *)arg1;
- (int)dispatchEvent:(unsigned int)arg1 withEventInfo:(id)arg2;
- (int)ensureBTLEClientInitialized;
- (id)stringForBTLEmode:(unsigned short)arg1;
- (int)ensureAdvertisingStopped;
- (int)ensureScanningStopped;
- (int)ensureScanningStarted;
- (_Bool)shouldAdvertiseSourcePresence;
- (int)ensureAdvertisingStarted;
- (unsigned long long)nearbySoloDevicesCount;
- (int)startMode:(unsigned short)arg1;
- (int)handleLostDevice:(id)arg1;
- (int)ensureStaleDeviceTimerStarted;
- (int)dispatchLostEventForAllDevices;
- (int)handleFoundDevice:(id)arg1 withAdvertisementData:(CDStruct_b2d45402 *)arg2 rssi:(int)arg3;

@end
