/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/Swift-Protocol.h>

@protocol WFWeatherStore <Swift>

- (unsigned short)cancelTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)forecastForLocation:locale:atDate:requestIdentifier:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)hourlyForecastForLocation:locale:requestIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)dailyForecastForLocation:locale:requestIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)forecast:forLocation:locale:requestIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)airQualityForLocation:locale:requestIdentifier:options:completionHandler: /* Error: Ran out of types for this method. */;

@end
