/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFTask.h>

@interface WFTemperatureUnitRequest : WFTask

{
    CDUnknownBlockType _resultHandler;
}

@property (copy, nonatomic) CDUnknownBlockType resultHandler;

- (void)cleanup;
- (_Bool)requiresResponse;
- (id)initWithResultHandler:(CDUnknownBlockType)arg1;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (void)handleCancellation;

@end
