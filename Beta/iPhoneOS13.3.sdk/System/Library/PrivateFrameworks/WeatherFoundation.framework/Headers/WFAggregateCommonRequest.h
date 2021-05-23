/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFTask.h>

@class NSLocale, WFLocation;

@interface WFAggregateCommonRequest : WFTask

{
    WFLocation *_location;
    unsigned long long _types;
    CDUnknownBlockType _completionHandler;
    NSLocale *_locale;
}

@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic, readonly) WFLocation *location;
@property (nonatomic, readonly) unsigned long long types;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;

- (id)description;
- (void)cleanup;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (void)handleCancellation;
- (unsigned long long)_supportedForecastTypes:(unsigned long long)arg1;
- (id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
