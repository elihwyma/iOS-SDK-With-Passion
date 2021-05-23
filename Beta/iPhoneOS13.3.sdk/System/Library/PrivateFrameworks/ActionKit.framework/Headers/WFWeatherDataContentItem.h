/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFWeatherDataContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)date;
- (id)visibility;
- (id)location;
- (id)temperature;
- (id)pressure;
- (id)uvIndex;
- (id)windSpeed;
- (id)highTemperature;
- (id)lowTemperature;
- (id)windDirection;
- (id)pollutants;
- (id)humidity;
- (id)sunriseTime;
- (id)sunsetTime;
- (id)localizedAirQualityIndex;
- (id)localizedAirQualityCategory;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)localizedConditionString;
- (id)feelsLikeTemperature;
- (id)dewpoint;
- (id)precipitationAmount;
- (id)precipitationChance;
- (id)weatherData;

@end
