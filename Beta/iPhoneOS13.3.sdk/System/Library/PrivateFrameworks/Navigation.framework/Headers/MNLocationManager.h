/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class CLHeading, CLInUseAssertion, GEOLocationShifter, MNLocation, NSBundle, NSDate, NSError, NSHashTable, NSLock, NSString;

@protocol MNLocationProvider, MNLocationRecorder;

@interface MNLocationManager : NSObject

{
    unsigned long long _locationProviderType;
    id <MNLocationProvider> _locationProvider;
    id <MNLocationRecorder> _locationRecorder;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    NSHashTable *_accessRequesters;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    NSLock *_observersLock;
    NSLock *_lastLocationLock;
    MNLocation *_lastLocation;
    GEOLocationShifter *_locationShifter;
    double _lastLocationUpdateTime;
    double _lastLocationReportTime;
    double _locationUpdateStartTime;
    double _expectedGpsUpdateInterval;
    CLInUseAssertion *_locationAssertion;
    CLHeading *_heading;
    NSDate *_lastUpdatedHeadingDate;
    _Bool _hasCustomDesiredAccuracy;
    _Bool _trackingLocation;
    _Bool _logStartStopLocationUpdates;
    _Bool _isLastLocationStale;
    _Bool _lastLocationPushed;
    _Bool _useCourseForHeading;
    _Bool _trackingHeading;
    CDUnknownBlockType _locationCorrector;
    NSError *_locationError;
}

@property (copy, nonatomic) CDUnknownBlockType locationCorrector;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (nonatomic, readonly) _Bool isHeadingServicesAvailable;
@property (nonatomic, readonly) CLHeading *heading;
@property (nonatomic, readonly) MNLocation *lastLocation;
@property (nonatomic, readonly) _Bool hasLocation;
@property (nonatomic, readonly) _Bool isLastLocationStale;
@property (nonatomic, readonly) NSError *locationError;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic) long long activityType;
@property (nonatomic) int headingOrientation;
@property (retain, nonatomic) id <MNLocationRecorder> locationRecorder;
@property (nonatomic, readonly) unsigned long long locationProviderType;
@property (retain, nonatomic) id <MNLocationProvider> locationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedLocationManager;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)_reset;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setLastLocation:(id)arg1;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (_Bool)isLocationServicesPossiblyAvailable:(id *)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (_Bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (_Bool)isLocationServicesApproved;
- (_Bool)isLocationServicesDenied;
- (_Bool)isLocationServicesRestricted;
- (void)_setTrackingLocation:(_Bool)arg1;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationReset;
- (_Bool)isLocationServicesPossiblyAvailable;
- (_Bool)isLocationServicesAvailable;
- (void)_reportLocationSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)_setTrackingHeading:(_Bool)arg1;
- (_Bool)isLocationServicesAuthorizationNeeded;
- (void)pushLocation:(id)arg1;
- (void)addLocationListener:(id)arg1;
- (void)removeLocationListener:(id)arg1;
- (void)setLocationProviderType:(unsigned long long)arg1;
- (void)_createLocationAssertion;
- (void)_clearLocationAssertion;
- (void)_updateForNewLocation:(id)arg1 rawLocation:(id)arg2;
- (void)useGPSLocationProvider;
- (void)useLeechedLocationProvider;
- (void)useHybridLocationProvider;
- (void)useTraceLocationProvider:(id)arg1;
- (void)_setLastLocationReceivedFromMaps:(id)arg1;
- (_Bool)_hasLocationAssertion;
- (void)requestLocationAccessFor:(id)arg1;
- (void)removeLocationAccessFor:(id)arg1;
- (void)removeLocationAccessForAll;

@end
