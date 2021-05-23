/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAWeatherForecast.h>

@class NSNumber;

@interface SAWeatherHourlyForecast : SAWeatherForecast

@property (copy, nonatomic) NSNumber *temperature;

+ (id)hourlyForecast;
+ (id)hourlyForecastWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
