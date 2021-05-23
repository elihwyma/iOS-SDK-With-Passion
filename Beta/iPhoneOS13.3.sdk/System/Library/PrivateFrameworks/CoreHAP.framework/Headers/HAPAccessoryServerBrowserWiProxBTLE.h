/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSObject, NSString, WPHomeKit;

@protocol HAPAccessoryServerBrowserWiProxBTLEDelegate, OS_dispatch_queue;

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject

{
    _Bool _scanInBackground;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HAPAccessoryServerBrowserWiProxBTLEDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    WPHomeKit *_wpHomeKit;
    long long _currentScanState;
    NSMutableSet *_trackedIdentifiers;
    NSMutableSet *_trackedPeripherals;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, readonly) id <HAPAccessoryServerBrowserWiProxBTLEDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) WPHomeKit *wpHomeKit;
@property (nonatomic) long long currentScanState;
@property (nonatomic) _Bool scanInBackground;
@property (nonatomic, readonly) NSMutableSet *trackedIdentifiers;
@property (nonatomic, readonly) NSMutableSet *trackedPeripherals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)pauseScans;
- (void)homeKitDidUpdateState:(id)arg1;
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5;
- (void)resetLastSeenForTrackedAccessories:(id)arg1;
- (void)startBrowsingForHAPBLEAccessories;
- (void)stopBrowsingForHAPBLEAccessories;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (void)probeReachabilityForTrackedAccessories;
- (void)_stopScanning;
- (void)_startBrowsingForHAPBLEAccessories;
- (void)_startScanningWithData:(id)arg1;
- (void)_stopBrowsingForHAPBLEAccessories;
- (void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 restartScan:(_Bool)arg2;
- (void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (void)_removeTrackedPeripheral:(id)arg1;
- (id)_getTrackedPeripheralWithIdentifier:(id)arg1;
- (unsigned long long)_getLinkQuality:(id)arg1;
- (void)_probeReachabilityForTrackedAccessories;
- (void)_reportHAPPeripheral:(id)arg1;
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4;
- (id)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 RSSI:(id)arg3;
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)homeKitStartedScanning:(id)arg1;
- (void)homeKitStoppedScanning:(id)arg1;
- (void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2;

@end
