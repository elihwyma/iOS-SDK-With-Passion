/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAWeatherForecast.h>

@class NSNumber;

@interface SAWeatherDailyForecast : SAWeatherForecast

@property (copy, nonatomic) NSNumber *highTemperature;
@property (copy, nonatomic) NSNumber *lowTemperature;

+ (id)dailyForecast;
+ (id)dailyForecastWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
