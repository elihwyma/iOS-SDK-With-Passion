/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, CLRegion, NSArray, NSString;

@protocol DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, OS_dispatch_queue;

@interface DNDSLocationLifetimeMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CLLocationManager *_locationManager;
    CLRegion *_currentRegion;
    _Bool _regionEntered;
    _Bool _hasActiveLifetimes;
    NSArray *_activeLifetimeAssertionUUIDs;
    id <DNDSLifetimeMonitorDataSource> _dataSource;
    id <DNDSLifetimeMonitorDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id <DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id <DNDSLifetimeMonitorDelegate> delegate;

- (id)init;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)refreshMonitorForDate:(id)arg1;
- (void)_queue_refreshMonitor;
- (void)_queue_stopMonitoringCurrentLocation;
- (void)_queue_sendExpiryEventForAllLocationAssertions;
- (void)_queue_beginMonitoringCurrentLocation;
- (void)_queue_geofenceLocation:(id)arg1;

@end
