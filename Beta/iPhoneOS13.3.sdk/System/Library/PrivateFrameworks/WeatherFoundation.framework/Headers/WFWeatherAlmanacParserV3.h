/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSString;

@interface WFWeatherAlmanacParserV3 : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;
- (id)parseAlmanacForecastDataFromJson:(id)arg1 location:(id)arg2 date:(id)arg3;

@end
