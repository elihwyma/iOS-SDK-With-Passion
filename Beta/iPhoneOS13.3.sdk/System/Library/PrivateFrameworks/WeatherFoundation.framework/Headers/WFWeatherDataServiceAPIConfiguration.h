/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSString;

@protocol WFForecastDataParser;

@interface WFWeatherDataServiceAPIConfiguration : NSObject

{
    Class _forecastRequestFormatterClass;
    id <WFForecastDataParser> _forecastParser;
    NSString *_environment;
}

@property (retain, nonatomic) Class forecastRequestFormatterClass;
@property (retain, nonatomic) id <WFForecastDataParser> forecastParser;
@property (nonatomic, readonly) NSString *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isValid;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)hostUrl;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id *)arg4 rules:(id)arg5;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (id)initWithVersion:(id)arg1 environment:(id)arg2;

@end
