/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class CLLocation, NSArray, NSDate, NSMeasurement, NSNumber, NSString;

@interface WFWeatherData : NSObject <Swift>

{
    NSDate *_date;
    CLLocation *_location;
    NSMeasurement *_temperature;
    NSMeasurement *_highTemperature;
    NSMeasurement *_lowTemperature;
    NSMeasurement *_feelsLikeTemperature;
    unsigned long long _condition;
    NSMeasurement *_visibility;
    NSMeasurement *_dewpoint;
    NSNumber *_humidity;
    NSMeasurement *_pressure;
    NSMeasurement *_precipitationAmount;
    NSNumber *_precipitationChance;
    NSMeasurement *_windSpeed;
    NSString *_windDirection;
    NSNumber *_uvIndex;
    NSDate *_sunriseTime;
    NSDate *_sunsetTime;
    NSNumber *_localizedAirQualityIndex;
    NSString *_localizedAirQualityCategory;
    NSArray *_pollutants;
}

@property (nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSMeasurement *temperature;
@property (nonatomic, readonly) NSMeasurement *highTemperature;
@property (nonatomic, readonly) NSMeasurement *lowTemperature;
@property (nonatomic, readonly) NSMeasurement *feelsLikeTemperature;
@property (nonatomic, readonly) unsigned long long condition;
@property (nonatomic, readonly) NSString *localizedConditionString;
@property (nonatomic, readonly) NSMeasurement *visibility;
@property (nonatomic, readonly) NSMeasurement *dewpoint;
@property (copy, nonatomic, readonly) NSNumber *humidity;
@property (nonatomic, readonly) NSMeasurement *pressure;
@property (nonatomic, readonly) NSMeasurement *precipitationAmount;
@property (copy, nonatomic, readonly) NSNumber *precipitationChance;
@property (nonatomic, readonly) NSMeasurement *windSpeed;
@property (copy, nonatomic, readonly) NSString *windDirection;
@property (copy, nonatomic, readonly) NSNumber *uvIndex;
@property (copy, nonatomic, readonly) NSDate *sunriseTime;
@property (copy, nonatomic, readonly) NSDate *sunsetTime;
@property (copy, nonatomic, readonly) NSNumber *localizedAirQualityIndex;
@property (copy, nonatomic, readonly) NSString *localizedAirQualityCategory;
@property (copy, nonatomic, readonly) NSArray *pollutants;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;
+ (_Bool)usesMetricSystem;
+ (id)temperatureUnit;
+ (id)windSpeedUnit;
+ (id)pressureUnit;
+ (id)precipitationAmountUnit;
+ (id)visibilityUnit;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWeatherConditions:(id)arg1;
- (void)addAirQualityConditions:(id)arg1;
- (void)addMissingDataFromWeatherData:(id)arg1;
- (id)measurementForTemperature:(id)arg1;
- (unsigned long long)weatherConditionForConditionCode:(unsigned long long)arg1;
- (id)temperatureString;

@end
