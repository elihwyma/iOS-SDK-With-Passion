/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFTask.h>

@class WFLocation;

@interface WFAggregateForecastRequest : WFTask

{
    WFLocation *_location;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) WFLocation *location;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)cleanup;
- (id)initWithLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleResponse:(id)arg1;
- (void)handleCancellation;

@end
