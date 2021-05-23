/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFTask.h>

@class NSData, NSDateComponents, NSLocale, NSString, WFLocation;

@interface WFForecastRequest : WFTask

{
    _Bool _attachRawAPIData;
    WFLocation *_location;
    NSDateComponents *_date;
    CDUnknownBlockType _completionHandler;
    unsigned long long _forecastType;
    NSData *_rawAPIData;
    NSLocale *_locale;
    NSString *_trackingParameter;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSDateComponents *date;
@property (copy, nonatomic) WFLocation *location;
@property (nonatomic) unsigned long long forecastType;
@property (nonatomic) _Bool attachRawAPIData;
@property (retain, nonatomic) NSData *rawAPIData;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *trackingParameter;

+ (id)forecastRequestForLocation:(id)arg1 date:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)forecastRequestForLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)description;
- (void)cleanup;
- (id)initWithLocation:(id)arg1 date:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (id)editLinksForForecast:(id)arg1;
- (void)handleCancellation;

@end
