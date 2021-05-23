/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class CLLocationManager, NSString, UNSKeyedObservable;

@protocol OS_dispatch_queue;

@interface UNSLocationMonitor : NSObject

{
    CLLocationManager *_locationManager;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)markAsHavingReceivedLocation;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_triggerDidFireForRegion:(id)arg1;
- (_Bool)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1;
- (void)setMonitoredRegions:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1 locationManager:(id)arg2;
- (id)initWithQueue:(id)arg1 locationManager:(id)arg2 observable:(id)arg3;

@end
