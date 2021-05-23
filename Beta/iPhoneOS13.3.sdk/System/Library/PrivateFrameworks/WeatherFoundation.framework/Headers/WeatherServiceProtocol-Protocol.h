/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/Swift-Protocol.h>

@protocol WeatherServiceProtocol <Swift>

- (unsigned short)cancelTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)airQualityForLocation:locale:options:taskIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)forecastForLocation:locale:atDate:options:taskIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)hourlyForecastForLocation:locale:taskIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)dailyForecastForLocation:locale:taskIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)forecast:forLocation:locale:taskIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)locationForString:taskIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)locationForCoordinate:taskIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)locationForSearchCompletion:taskIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)temperatureUnitWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceTemperatureUnitWith:identifier: /* Error: Ran out of types for this method. */;
- (unsigned short)reachabilityConfigurationForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateCache: /* Error: Ran out of types for this method. */;

@end
