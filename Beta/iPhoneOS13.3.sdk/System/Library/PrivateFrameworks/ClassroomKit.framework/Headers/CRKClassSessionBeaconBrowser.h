/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKWiProxTrackerScanner, NSMutableSet, NSSet, NSString;

@protocol CRKClassSessionBeaconBrowserDelegate;

@interface CRKClassSessionBeaconBrowser : NSObject

{
    long long mZoneTrackerLastState;
    NSMutableSet *mScanningZones;
    long long mIncreasedScanRequestCount;
    _Bool _allowInvitationSessions;
    _Bool _isBrowsing;
    _Bool _isScanning;
    id <CRKClassSessionBeaconBrowserDelegate> _delegate;
    NSSet *_organizationUUIDs;
    CRKWiProxTrackerScanner *_trackerScanner;
    NSSet *_trackingUUIDs;
}

@property (retain, nonatomic) CRKWiProxTrackerScanner *trackerScanner;
@property (copy, nonatomic) NSSet *trackingUUIDs;
@property (nonatomic) _Bool isBrowsing;
@property (nonatomic) _Bool isScanning;
@property (weak, nonatomic) id <CRKClassSessionBeaconBrowserDelegate> delegate;
@property (copy, nonatomic) NSSet *organizationUUIDs;
@property (nonatomic) _Bool allowInvitationSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)invitationUUID;

- (id)init;
- (void)dealloc;
- (void)stopBrowsing;
- (void)startBrowsing;
- (id)stateDictionary;
- (void)delegateDidFailWithError:(id)arg1;
- (void)updateScanner;
- (void)trackerScanner:(id)arg1 didUpdateZoneTrackerState:(id)arg2;
- (void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 enteredZone:(id)arg3;
- (void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 exitedZone:(id)arg3;
- (void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 didFailToRegisterZones:(id)arg3 withError:(id)arg4;
- (void)trackerScanner:(id)arg1 didUpdateDeviceScannerState:(id)arg2;
- (void)trackerScanner:(id)arg1 scanner:(id)arg2 foundRequestedDevices:(id)arg3;
- (void)trackerScanner:(id)arg1 scanner:(id)arg2 foundDevice:(id)arg3 withData:(id)arg4;
- (void)trackerScanner:(id)arg1 scanner:(id)arg2 didFailToRegisterDevices:(id)arg3 withError:(id)arg4;
- (void)updateZones;
- (void)startInitialScan;
- (void)stopScanningForDevicesInAllZones;
- (void)increasedScanDurationElapsed;
- (id)zoneDataForAdvertisementUUID:(id)arg1;
- (id)organizationUUIDsMatchingZoneData:(id)arg1;
- (id)zoneDataForOrganizationUUID:(id)arg1;
- (void)stopScanningForDevicesInZone:(id)arg1;
- (void)startScanningForDevicesInZone:(id)arg1;
- (void)delegateDidFindInvitationSessionWithEndpoint:(id)arg1;
- (void)delegateDidFindClassSession:(id)arg1 flags:(unsigned short)arg2;
- (void)increaseScanFrequencyForDuration:(double)arg1;

@end
