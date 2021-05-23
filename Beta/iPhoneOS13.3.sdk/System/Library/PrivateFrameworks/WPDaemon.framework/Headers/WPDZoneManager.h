/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <WPDaemon/WPDManager.h>

@class CBCentralManager, NSDate, NSMutableDictionary, NSNumber, NSObject, NSString;

@protocol OS_dispatch_source;

@interface WPDZoneManager : WPDManager

{
    NSMutableDictionary *_trackRequests;
    NSMutableDictionary *_trackedZones;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_source> *_exitTimer;
    NSNumber *_zoneExitTimeout;
    NSDate *_lastTimeScannerStarted;
}

@property (retain, nonatomic) NSMutableDictionary *trackRequests;
@property (retain, nonatomic) NSMutableDictionary *trackedZones;
@property (retain) CBCentralManager *centralManager;
@property (retain) NSObject<OS_dispatch_source> *exitTimer;
@property (retain, nonatomic) NSNumber *zoneExitTimeout;
@property (retain, nonatomic) NSDate *lastTimeScannerStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cleanup;
- (void)update;
- (id)initWithServer:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didLoseZone:(id)arg2 mask:(id)arg3;
- (id)generateStateDump;
- (_Bool)updateScanner;
- (void)unregisterZonesForClient:(id)arg1;
- (id)addZoneTrackingRequest:(id)arg1 forClient:(id)arg2;
- (void)unregisterZones:(id)arg1 forClient:(id)arg2;
- (id)getAllZones;
- (void)cancelExitTimer;
- (void)unregisterAllZones;
- (void)printTrackedZones;
- (void)startExitTimer;
- (void)exitTimerFired;
- (void)addSingleZoneTrackingRequest:(id)arg1 forClient:(id)arg2;
- (void)unregisterZonesForClient:(id)arg1 updateScanner:(_Bool)arg2;

@end
