/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAWeatherAirQualityObject, SAWeatherCurrentConditions, SAWeatherLocation, SAWeatherUnits;

@interface SAWeatherAbstractObject : SADomainObject

@property (retain, nonatomic) SAWeatherAirQualityObject *airQuality;
@property (retain, nonatomic) SAWeatherCurrentConditions *currentConditions;
@property (copy, nonatomic) NSArray *dailyForecasts;
@property (copy, nonatomic) NSString *extendedForecastUrl;
@property (copy, nonatomic) NSArray *hourlyForecasts;
@property (retain, nonatomic) SAWeatherUnits *units;
@property (retain, nonatomic) SAWeatherLocation *weatherLocation;
@property (copy, nonatomic) NSString *weatherRequest;

+ (id)abstractObject;
+ (id)abstractObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
