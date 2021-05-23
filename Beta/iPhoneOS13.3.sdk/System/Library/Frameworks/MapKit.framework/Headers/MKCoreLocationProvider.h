/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLLocationManager, NSBundle, NSString, geo_isolater;

@protocol MKLocationProviderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKCoreLocationProvider : NSObject

{
    CLLocationManager *_clLocationManager;
    id <MKLocationProviderDelegate> _delegate;
    _Bool _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    CDUnknownBlockType _authorizationRequestBlock;
    _Bool _waitingForAuthorization;
    _Bool _hasQueriedAuthorization;
    double _expectedGpsUpdateInterval;
    geo_isolater *_isolation;
    NSObject<OS_dispatch_queue> *_coreLocationQueue;
    double _desiredAccuracy;
    long long _activityType;
    double _distanceFilter;
    _Bool _matchInfoEnabled;
    int _headingOrientation;
}

@property (nonatomic, readonly) CLLocationManager *_clLocationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <MKLocationProviderDelegate> delegate;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property (nonatomic) double distanceFilter;
@property (nonatomic) _Bool matchInfoEnabled;
@property (nonatomic) int headingOrientation;
@property (copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (nonatomic, readonly) int authorizationStatus;
@property (nonatomic) long long activityType;
@property (nonatomic, readonly) _Bool usesCLMapCorrection;
@property (nonatomic, readonly) _Bool shouldShiftIfNecessary;
@property (nonatomic, readonly) _Bool isTracePlayer;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) CLLocation *lastLocation;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)startUpdatingHeading;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)requestWhenInUseAuthorization;
- (void)stopUpdatingHeading;
- (void)dismissHeadingCalibrationDisplay;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleHeading;
- (void)_createCLLocationManager;
- (int)_authorizationStatusOnQueue;
- (void)_updateAuthorizationStatus;
- (void)_resetForNewEffectiveBundle;
- (void)authorizationStatusOnQueue:(id)arg1 result:(CDUnknownBlockType)arg2;

@end
