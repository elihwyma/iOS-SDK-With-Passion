/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CLHeading, CLLocation, GEOLocation, GEOLocationShifter, NSBundle, NSError, NSHashTable, NSLock, NSMutableArray, NSString, NSTimer;

@protocol MKLocationProvider, MNLocationRecorder;

@interface MKLocationManager : NSObject

{
    id <MKLocationProvider> _locationProvider;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    CLLocation *_lastLocation;
    CLLocation *_lastGoodLocation;
    double _lastLocationUpdateTime;
    _Bool _isLastLocationStale;
    _Bool _lastLocationPushed;
    _Bool _trackingLocation;
    _Bool _trackingHeading;
    id <MNLocationRecorder> _locationRecorder;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    double _headingUpdateTime;
    double _locationAccuracyUpdateTime;
    double _locationUpdateStartTime;
    _Bool _isReceivingAccurateLocations;
    NSMutableArray *_waitForAccurateLocationsHandlers;
    NSTimer *_waitForAccurateLocationsTimer;
    double _lastLocationReportTime;
    GEOLocationShifter *_locationShifter;
    CLHeading *_throttledHeading;
    CLHeading *_heading;
    NSTimer *_headingThrottlingTimer;
    CDUnknownBlockType _networkActivity;
    _Bool _enabled;
    _Bool _useCourseForHeading;
    double _lastVehicleHeading;
    double _lastVehicleSpeed;
    double _lastVehicleHeadingUpdateTime;
    double _lastVehicleSpeedUpdateTime;
    int _consecutiveOutOfCourseCount;
    double _navCourse;
    CDUnknownBlockType _locationCorrector;
    double _minimumLocationUpdateInterval;
    _Bool _allowOldLocations;
    _Bool _continuedAfterBecomingInactive;
    _Bool _suspended;
    NSMutableArray *_recentLocationUpdateIntervals;
    NSLock *_lastLocationLock;
    NSLock *_observersLock;
    _Bool _hasCustomDesiredAccuracy;
    _Bool _continuesWhileInactive;
    _Bool _logStartStopLocationUpdates;
    NSError *_locationError;
}

@property (nonatomic, readonly) int lastLocationSource;
@property (retain, nonatomic) id <MKLocationProvider> locationProvider;
@property (copy, nonatomic) CDUnknownBlockType locationCorrector;
@property (nonatomic) _Bool logStartStopLocationUpdates;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=isLocationServicesAuthorizationNeeded) _Bool locationServicesAuthorizationNeeded;
@property (nonatomic, readonly) _Bool isLocationServicesAvailable;
@property (nonatomic, readonly) _Bool isLocationServicesPossiblyAvailable;
@property (nonatomic, readonly) _Bool isLocationServicesEnabled;
@property (nonatomic, readonly) _Bool isLocationServicesApproved;
@property (nonatomic, readonly) _Bool isLocationServicesDenied;
@property (nonatomic, readonly) _Bool isLocationServicesRestricted;
@property (nonatomic, readonly) _Bool isHeadingServicesAvailable;
@property (nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property (nonatomic, readonly) double headingUpdateTimeInterval;
@property (nonatomic, readonly) GEOLocation *currentLocation;
@property (nonatomic, readonly) GEOLocation *gridSnappedCurrentLocation;
@property (nonatomic, readonly) GEOLocation *courseCorrectedLocation;
@property (nonatomic) long long headingOrientation;
@property (copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property (nonatomic, readonly) _Bool locationShiftEnabled;
@property (nonatomic, readonly) _Bool hasLocation;
@property (nonatomic, readonly) CLLocation *lastLocation;
@property (nonatomic, readonly) CLLocation *lastGoodLocation;
@property (nonatomic, readonly) _Bool isLastLocationStale;
@property (nonatomic, readonly) NSError *locationError;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic) _Bool matchInfoEnabled;
@property (nonatomic, readonly) CLLocation *lastProviderLocation;
@property (nonatomic) _Bool allowOldLocations;
@property (nonatomic) long long activityType;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (nonatomic, readonly) double timeScale;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (nonatomic) _Bool useCourseForHeading;
@property (nonatomic, readonly) CLHeading *heading;
@property (retain, nonatomic) CLHeading *throttledHeading;
@property (nonatomic, readonly) double currentVehicleHeading;
@property (nonatomic, readonly) double currentVehicleSpeed;
@property (nonatomic, readonly) double vehicleHeadingOrCourse;
@property (copy, nonatomic) CDUnknownBlockType networkActivity;
@property (retain, nonatomic) id <MNLocationRecorder> locationRecorder;
@property (nonatomic, readonly) double navigationCourse;
@property (nonatomic) double minimumLocationUpdateInterval;
@property (nonatomic) _Bool continuesWhileInactive;
@property (nonatomic, readonly, getter=wasLastLocationPushed) _Bool lastLocationPushed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)timeoutError;
+ (id)sharedLocationManager;
+ (void)setCanMonitorWiFiStatus:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)_suspend;
- (void)reset;
- (void)requestWhenInUseAuthorization;
- (void)dismissHeadingCalibrationDisplay;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)setHeading:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
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
- (void)_useCoreLocationProvider;
- (void)_syncLocationProviderWithTracking;
- (void)_reportHeadingSuccess;
- (_Bool)_isTimeToResetOnResume;
- (void)resetAfterResumeIfNecessary;
- (void)_setTrackingLocation:(_Bool)arg1;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationReset;
- (void)_setIsReceivingAccurateLocations:(_Bool)arg1;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (_Bool)_shouldAllowLocationUpdateInterval:(double)arg1;
- (void)dampenGPSLocationAccuracy:(id *)arg1 oldLocationSource:(int)arg2;
- (void)_reportLocationSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (id)observersDescription;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)_waitForAccurateLocationsTimerFired:(id)arg1;
- (void)_setTrackingHeading:(_Bool)arg1;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)pushLocation:(id)arg1;
- (void)listenForLocationUpdates:(id)arg1;
- (void)stopListeningForLocationUpdates:(id)arg1;
- (void)waitForAccurateLocationWithHandler:(CDUnknownBlockType)arg1;
- (id)singleLocationUpdateWithHandler:(CDUnknownBlockType)arg1;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2 timeout:(double)arg3;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2 timeout:(double)arg3 maxLocationAge:(double)arg4;
- (void)startVehicleSpeedUpdate;
- (void)stopVehicleSpeedUpdate;
- (void)startVehicleHeadingUpdate;
- (void)stopVehicleHeadingUpdate;

@end
