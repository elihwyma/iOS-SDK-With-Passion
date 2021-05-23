/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSError, NSHashTable, NSNumber, NSString, NSTimeZone, NSTimer, NSURL, WFAQIScaleCategory, WFGeocodeRequest, WFLocation, WFTemperature;

@interface City : NSObject

{
    _Bool _isDay;
    _Bool _isLocalWeatherCity;
    _Bool _transient;
    _Bool _autoUpdate;
    _Bool _isUpdating;
    _Bool _isRequestedByFrameworkClient;
    _Bool _lockedForDemoMode;
    float _windChill;
    float _windDirection;
    float _windSpeed;
    float _humidity;
    float _visibility;
    float _pressure;
    float _dewPoint;
    float _heatIndex;
    long long _conditionCode;
    NSArray *_dayForecasts;
    NSArray *_hourlyForecasts;
    NSString *_updateTimeString;
    NSString *_name;
    NSString *_woeid;
    NSString *_state;
    NSString *_ISO3166CountryAbbreviation;
    WFTemperature *_temperature;
    WFTemperature *_feelsLike;
    unsigned long long _observationTime;
    unsigned long long _sunsetTime;
    unsigned long long _sunriseTime;
    unsigned long long _moonPhase;
    unsigned long long _uvIndex;
    double _precipitationPast24Hours;
    NSURL *_link;
    NSURL *_deeplink;
    CLLocation *_location;
    NSTimeZone *_timeZone;
    NSDate *_timeZoneUpdateDate;
    NSError *_lastUpdateError;
    NSDate *_updateTime;
    unsigned long long _pressureRising;
    NSNumber *_airQualityIdx;
    NSNumber *_airQualityCategory;
    WFAQIScaleCategory *_airQualityScaleCategory;
    WFLocation *_wfLocation;
    unsigned long long _lastUpdateStatus;
    long long _updateInterval;
    NSTimer *_autoUpdateTimer;
    WFGeocodeRequest *_activeGeocodeRequest;
    NSHashTable *_cityUpdateObservers;
    NSString *_fullName;
}

@property (readonly) NSDictionary *urlComponents;
@property (retain, nonatomic) WFLocation *wfLocation;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSError *lastUpdateError;
@property (nonatomic) unsigned long long lastUpdateStatus;
@property (nonatomic) _Bool isUpdating;
@property (nonatomic) _Bool isRequestedByFrameworkClient;
@property (nonatomic) _Bool lockedForDemoMode;
@property (nonatomic) long long updateInterval;
@property (retain, nonatomic) NSTimer *autoUpdateTimer;
@property (retain, nonatomic) WFGeocodeRequest *activeGeocodeRequest;
@property (copy, nonatomic) NSString *updateTimeString;
@property (retain, nonatomic) NSHashTable *cityUpdateObservers;
@property (nonatomic, readonly) _Bool timeZoneIsFresh;
@property (copy, nonatomic) NSString *fullName;
@property (nonatomic) _Bool isLocalWeatherCity;
@property (nonatomic, getter=isTransient) _Bool transient;
@property (copy, nonatomic) NSString *woeid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *locationID;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *ISO3166CountryAbbreviation;
@property (retain, nonatomic) WFTemperature *temperature;
@property (retain, nonatomic) WFTemperature *feelsLike;
@property (nonatomic) long long conditionCode;
@property (nonatomic) unsigned long long observationTime;
@property (nonatomic) unsigned long long sunsetTime;
@property (nonatomic) unsigned long long sunriseTime;
@property (nonatomic) unsigned long long moonPhase;
@property (nonatomic, setter=setUVIndex:) unsigned long long uvIndex;
@property (nonatomic) double precipitationPast24Hours;
@property (copy, nonatomic) NSURL *link;
@property (copy, nonatomic) NSURL *deeplink;
@property (copy) CLLocation *location;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) NSDate *timeZoneUpdateDate;
@property (retain, nonatomic) NSDate *updateTime;
@property (nonatomic) float windChill;
@property (nonatomic) float windDirection;
@property (nonatomic) float windSpeed;
@property (nonatomic) float humidity;
@property (nonatomic) float visibility;
@property (nonatomic) float pressure;
@property (nonatomic) unsigned long long pressureRising;
@property (nonatomic) float dewPoint;
@property (nonatomic) float heatIndex;
@property (retain, nonatomic) NSNumber *airQualityIdx;
@property (retain, nonatomic) NSNumber *airQualityCategory;
@property (retain, nonatomic) WFAQIScaleCategory *airQualityScaleCategory;
@property (nonatomic) _Bool isDay;
@property (nonatomic) _Bool autoUpdate;
@property (copy, nonatomic) NSArray *hourlyForecasts;
@property (copy, nonatomic) NSArray *dayForecasts;

+ (id)cityContainingLocation:(id)arg1 expectedName:(id)arg2 fromCities:(id)arg3;
+ (id)_ISO8601Calendar;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CLLocationCoordinate2D)coordinate;
- (id)dictionaryRepresentation;
- (id)displayName;
- (_Bool)update;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)_isUpdating;
- (id)detailedDescription;
- (void)_updateTimeZone;
- (void)updateCityForModel:(id)arg1;
- (void)removeUpdateObserver:(id)arg1;
- (void)addUpdateObserver:(id)arg1;
- (unsigned long long)precipitationForecast;
- (void)_clearAutoUpdateTimer;
- (unsigned long long)weatherDataAge;
- (long long)timeDigit;
- (_Bool)_dataIsValid;
- (void)_notifyDidStartWeatherUpdate;
- (void)updateTimeZoneWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)discardDataIfNeeded;
- (double)distanceToLatitude:(double)arg1 longitude:(double)arg2;
- (double)distanceToLocation:(id)arg1;
- (id)naturalLanguageDescriptionWithDescribedCondition:(out long long *)arg1;
- (id)windDirectionAsString:(double)arg1;
- (long long)primaryConditionForRange:(struct _NSRange)arg1;
- (long long)locationOfTime:(long long)arg1;
- (void)clearForecasts;
- (void)localWeatherDidBeginUpdate;
- (void)cityDidFinishUpdatingWithError:(id)arg1;
- (_Bool)isUpdatingOrNoData;
- (id)cityAndState;
- (id)getName;
- (_Bool)populateWithDataFromCity:(id)arg1;
- (_Bool)containsLatitude:(double)arg1 longitude:(double)arg2;
- (_Bool)isDuplicateOfCity:(id)arg1;
- (id)naturalLanguageDescription;
- (void)_generateLocalizableStrings;

@end
