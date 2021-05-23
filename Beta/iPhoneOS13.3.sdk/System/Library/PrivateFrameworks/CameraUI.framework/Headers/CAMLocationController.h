/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CLHeading, CLLocation, CLLocationManager, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface CAMLocationController : NSObject

{
    _Bool _enabled;
    _Bool _headingEnabled;
    _Bool __monitoringLocation;
    _Bool __didRequestLocation;
    CLLocation *_currentLocation;
    CLHeading *_currentHeading;
    NSObject<OS_dispatch_queue> *__authorizationQueue;
    CLLocationManager *__locationManager;
    NSMutableArray *__enqueuedAssetsWaitingForLocation;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_authorizationQueue;
@property (nonatomic, readonly, getter=_isMonitoringLocation) _Bool _monitoringLocation;
@property (nonatomic, readonly) CLLocationManager *_locationManager;
@property (nonatomic, readonly) NSMutableArray *_enqueuedAssetsWaitingForLocation;
@property (nonatomic, setter=_setDidRequestLocation:) _Bool _didRequestLocation;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isHeadingEnabled) _Bool headingEnabled;
@property (nonatomic, readonly) CLLocation *currentLocation;
@property (nonatomic, readonly) CLHeading *currentHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)locationMetadataForLocation:(id)arg1 heading:(id)arg2 device:(long long)arg3;
+ (id)_sharedGPSTimestampFormatter;
+ (id)_sharedGPSDatestampFormatter;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (id)headingForOrientation:(long long)arg1;
- (void)_updateLocationMonitoring;
- (void)_resetDidRequestLocation;
- (void)_stopMonitoringLocationUpdates;
- (void)_authorizeOrStartLocationManager;
- (void)_startMonitoringLocationUpdates;
- (void)_updateAssetsWaitingOnLocation;
- (void)enqueueAssetForLocationUpdates:(id)arg1;

@end
