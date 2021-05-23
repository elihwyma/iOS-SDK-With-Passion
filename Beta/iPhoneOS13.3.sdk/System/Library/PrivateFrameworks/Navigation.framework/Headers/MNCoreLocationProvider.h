/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, NSBundle, NSLock, NSRunLoop, NSString;

@protocol MNLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNCoreLocationProvider : NSObject

{
    _Bool _waitingForAuthorization;
    _Bool _hasQueriedAuthorization;
    NSLock *_authorizationLock;
    _Bool _alternate;
    CLLocationManager *_clLocationManager;
    id <MNLocationProviderDelegate> _delegate;
    _Bool _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    CDUnknownBlockType _authorizationRequestBlock;
    NSRunLoop *_debug_initRunLoop;
    NSRunLoop *_debug_deinitRunLoop;
    _Bool _updatingLocations;
}

@property (nonatomic, readonly) CLLocationManager *_clLocationManager;
@property (nonatomic) _Bool updatingLocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <MNLocationProviderDelegate> delegate;
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
@property (nonatomic, readonly) _Bool isSimulation;
@property (nonatomic, readonly) _Bool isTracePlayer;
@property (nonatomic, readonly) unsigned long long traceVersion;
@property (nonatomic, readonly) double timeScale;

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
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)requestWhenInUseAuthorization;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)initWithEffectiveBundle:(id)arg1;
- (void)requestLocation;
- (void)stopUpdatingHeading;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleHeading;
- (void)_sharedInit;
- (void)_createCLLocationManager;
- (void)_updateAuthorizationStatus;
- (void)_resetForNewEffectiveBundle;
- (void)resetForActiveTileGroupChanged;

@end
