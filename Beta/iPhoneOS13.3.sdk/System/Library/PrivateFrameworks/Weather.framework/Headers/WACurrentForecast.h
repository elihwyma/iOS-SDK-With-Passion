/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class WFTemperature;

@interface WACurrentForecast : NSObject

{
    float _windSpeed;
    float _windDirection;
    float _humidity;
    float _dewPoint;
    float _visibility;
    float _pressure;
    float _precipitationPast24Hours;
    WFTemperature *_temperature;
    WFTemperature *_feelsLike;
    unsigned long long _pressureRising;
    unsigned long long _UVIndex;
    long long _conditionCode;
    unsigned long long _observationTime;
}

@property (retain, nonatomic) WFTemperature *temperature;
@property (retain, nonatomic) WFTemperature *feelsLike;
@property (nonatomic) float windSpeed;
@property (nonatomic) float windDirection;
@property (nonatomic) float humidity;
@property (nonatomic) float dewPoint;
@property (nonatomic) float visibility;
@property (nonatomic) float pressure;
@property (nonatomic) unsigned long long pressureRising;
@property (nonatomic) unsigned long long UVIndex;
@property (nonatomic) float precipitationPast24Hours;
@property (nonatomic) long long conditionCode;
@property (nonatomic) unsigned long long observationTime;

+ (id)currentForecastForLocation:(id)arg1 conditions:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
