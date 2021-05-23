/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class CLLocationManager, NSDate, NSString, NSTimer, WeatherPreferences;

@protocol CLLocationManagerDelegate;

@interface WeatherLocationManager : NSObject

{
    _Bool _locationTrackingIsReady;
    _Bool _locationUpdatesEnabled;
    _Bool _isInternalBuild;
    int _authorizationStatus;
    float _lastLocationAccuracy;
    NSString *_effectiveBundleIdentifier;
    id <CLLocationManagerDelegate> _delegate;
    CLLocationManager *_locationManager;
    unsigned long long _updateInterval;
    double _oldestAllowedUpdateTime;
    NSTimer *_delayedUpdateTimer;
    NSTimer *_accuracyFallbackTimer;
    WeatherPreferences *_preferences;
    NSDate *_lastLocationTimeStamp;
    double _lastLocationUpdateTime;
    double _nextPlannedUpdate;
    struct CLLocationCoordinate2D _lastLocationCoord;
}

@property (copy, nonatomic, readonly) NSString *effectiveBundleIdentifier;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) int authorizationStatus;
@property (nonatomic) _Bool locationUpdatesEnabled;
@property (nonatomic) _Bool locationTrackingIsReady;
@property (nonatomic) unsigned long long updateInterval;
@property (nonatomic) double oldestAllowedUpdateTime;
@property (retain, nonatomic) NSTimer *delayedUpdateTimer;
@property (retain, nonatomic) NSTimer *accuracyFallbackTimer;
@property (retain, nonatomic) WeatherPreferences *preferences;
@property (nonatomic) struct CLLocationCoordinate2D lastLocationCoord;
@property (copy, nonatomic) NSDate *lastLocationTimeStamp;
@property (nonatomic) float lastLocationAccuracy;
@property (nonatomic) double lastLocationUpdateTime;
@property (nonatomic) double nextPlannedUpdate;
@property (nonatomic) _Bool isInternalBuild;
@property (weak, nonatomic) id <CLLocationManagerDelegate> delegate;
@property (nonatomic, readonly) double distanceFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)locationManagerAuthorizationWithEffectiveBundleId:(id)arg1;
+ (id)sharedWeatherLocationManager;
+ (void)clearSharedLocationManager;

- (id)init;
- (void)dealloc;
- (id)location;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)initWithPreferences:(id)arg1;
- (void)updateLocation:(id)arg1;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
- (void)stopLocationUpdate;
- (void)setLocationTrackingReady:(_Bool)arg1 activelyTracking:(_Bool)arg2 watchKitExtension:(_Bool)arg3;
- (void)clearLocalWeatherUpdateState;
- (void)setLocationTrackingActive:(_Bool)arg1;
- (void)askForLocationManagerAuthorization;
- (_Bool)localWeatherAuthorized;
- (_Bool)isLocalStaleOrOutOfDate;
- (_Bool)isCacheOutOfDate;
- (void)forceLocationUpdate;
- (void)updateLocationWithNoConditionCheck;
- (void)cancelAccuracyFallbackTimer;
- (void)cancelDelayedUpdateTimer;
- (int)forceLoadingAuthorizationStatus;
- (void)setLocationTrackingReady:(_Bool)arg1 activelyTracking:(_Bool)arg2 watchKitExtension:(_Bool)arg3 shouldRequestAuthorization:(_Bool)arg4;
- (void)clearLastLocationUpdateTime;
- (void)scheduleDelayedUpdate:(double)arg1;
- (void)delayedUpdateTimerDidFire:(id)arg1;
- (void)accuracyFallbackTimerDidFire:(id)arg1;
- (void)forceLocationManagerAuthorization;
- (void)monitorLocationAuthorization;
- (_Bool)hasCrossedHourBoundary;
- (_Bool)isLocationWithInRange:(id)arg1;

@end
