/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/Swift-Protocol.h>

@protocol WFAPIConfigurationProtocol <Swift>

@property (nonatomic, readonly) _Bool isValid;

- (unsigned short)hostUrl;
- (unsigned short)forecastRequestForTypes:location:date:error:rules: /* Error: Ran out of types for this method. */;
- (unsigned short)parseForecast:data:location:locale:date:error:rules: /* Error: Ran out of types for this method. */;

@end
