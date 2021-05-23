/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@protocol CRKWiProxTrackerScannerDelegate <Swift>

- (unsigned short)trackerScanner:didUpdateZoneTrackerState: /* Error: Ran out of types for this method. */;
- (unsigned short)trackerScanner:zoneTracker:enteredZone: /* Error: Ran out of types for this method. */;
- (unsigned short)trackerScanner:zoneTracker:exitedZone: /* Error: Ran out of types for this method. */;
- (unsigned short)trackerScanner:zoneTracker:didFailToRegisterZones:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)trackerScanner:didUpdateDeviceScannerState: /* Error: Ran out of types for this method. */;
- (unsigned short)trackerScanner:scanner:foundRequestedDevices: /* Error: Ran out of types for this method. */;
- (unsigned short)trackerScanner:scanner:foundDevice:withData: /* Error: Ran out of types for this method. */;
- (unsigned short)trackerScanner:scanner:didFailToRegisterDevices:withError: /* Error: Ran out of types for this method. */;

@end
