/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString, WPDeviceScanner, WPZoneTracker;

@protocol CRKWiProxTrackerScannerDelegate;

@interface CRKWiProxTrackerScanner : NSObject

{
    WPZoneTracker *_zoneTracker;
    WPDeviceScanner *_deviceScanner;
    id <CRKWiProxTrackerScannerDelegate> _delegate;
}

@property (retain, nonatomic) WPZoneTracker *zoneTracker;
@property (retain, nonatomic) WPDeviceScanner *deviceScanner;
@property (weak, nonatomic) id <CRKWiProxTrackerScannerDelegate> delegate;
@property (nonatomic, readonly) long long zoneTrackerState;
@property (nonatomic, readonly) long long deviceScannerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1;
- (void)deviceScannerDidUpdateState:(id)arg1;
- (void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)scanner:(id)arg1 foundRequestedDevices:(id)arg2;
- (void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3;
- (void)registerForDevicesMatching:(id)arg1 options:(id)arg2;
- (void)unregisterAllDeviceChanges;
- (void)zoneTracker:(id)arg1 enteredZone:(id)arg2;
- (void)zoneTracker:(id)arg1 exitedZone:(id)arg2;
- (void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3;
- (void)zoneTrackerDidUpdateState:(id)arg1;
- (void)registerForZoneChangesMatching:(id)arg1;
- (void)unregisterForZoneChanges:(id)arg1;
- (void)unregisterAllZoneChanges;

@end
