/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <Weather/WATodayModel.h>

@class NSString, WFGeocodeRequest, WeatherLocationManager, WeatherPreferences;

@interface WATodayAutoupdatingLocationModel : WATodayModel

{
    _Bool _isLocationTrackingEnabled;
    _Bool _locationServicesActive;
    _Bool _stopUpdateIfNeeded;
    WeatherLocationManager *_locationManager;
    WFGeocodeRequest *_geocodeRequest;
    unsigned long long _citySource;
    WeatherPreferences *_preferences;
    CDUnknownBlockType _WeatherLocationManagerGenerator;
}

@property (retain, nonatomic) WFGeocodeRequest *geocodeRequest;
@property (nonatomic) _Bool isLocationTrackingEnabled;
@property (nonatomic) unsigned long long citySource;
@property (retain, nonatomic) WeatherLocationManager *locationManager;
@property (nonatomic) _Bool stopUpdateIfNeeded;
@property (retain, nonatomic) WeatherPreferences *preferences;
@property (copy, nonatomic) CDUnknownBlockType WeatherLocationManagerGenerator;
@property (nonatomic) _Bool locationServicesActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
- (id)forecastModel;
- (void)_executeLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_willDeliverForecastModel:(id)arg1;
- (void)_persistStateWithModel:(id)arg1;
- (void)checkIfNeedsToUpdate;
- (void)clearLocationUpdateState;
- (void)weatherPreferencesWereSynchronized;
- (void)setCitySource:(unsigned long long)arg1 fireNotification:(_Bool)arg2;
- (void)_teardownLocationManager;
- (_Bool)_reloadForecastData:(_Bool)arg1;
- (void)_kickstartLocationManager;
- (_Bool)updateLocationTrackingStatus;
- (void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldNotUseUpdatedLocation;
- (void)ubiquitousDefaultsDidChange:(id)arg1;
- (void)syncLastUpdateTime;

@end
