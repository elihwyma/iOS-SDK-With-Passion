/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFTask.h>

@class NSLocale, WFLocation;

@interface WFAirQualityRequest : WFTask

{
    _Bool _attachRawAPIData;
    NSLocale *_locale;
    WFLocation *_location;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) WFLocation *location;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool attachRawAPIData;

+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (id)options;
- (void)cleanup;
- (id)initWithLocation:(id)arg1 locale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;

@end
