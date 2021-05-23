/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSString;

@interface WFWeatherChannelRequestFormatterV2 : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hostURLForService;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 rules:(id)arg5;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4;
+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2;
+ (id)forecastRequestForRequest:(id)arg1 queryItems:(id)arg2 forLocation:(id)arg3 rules:(id)arg4;
+ (id)forecastRequestForURL:(id)arg1 queryItems:(id)arg2;

@end
