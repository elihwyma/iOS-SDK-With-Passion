/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol WFForecastDataParser;

@interface WFWeatherChannelAPIConfiguration : NSObject

{
    NSMutableDictionary *_requestFormatterForForecastType;
    NSMutableDictionary *_requestParserForForecastType;
    Class _defaultForecastRequestFormatterClass;
    id <WFForecastDataParser> _defaultForecastParser;
}

@property (retain, nonatomic) NSMutableDictionary *requestFormatterForForecastType;
@property (retain, nonatomic) NSMutableDictionary *requestParserForForecastType;
@property (retain, nonatomic) Class defaultForecastRequestFormatterClass;
@property (retain, nonatomic) id <WFForecastDataParser> defaultForecastParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isValid;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVersion:(id)arg1;
- (id)hostUrl;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id *)arg4 rules:(id)arg5;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (void)setDefaultForecastFormatter:(Class)arg1;
- (void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2;
- (void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2;

@end
