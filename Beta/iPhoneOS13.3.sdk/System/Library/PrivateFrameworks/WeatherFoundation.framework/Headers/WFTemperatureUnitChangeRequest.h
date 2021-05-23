/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFTemperatureUnitRequest.h>

@interface WFTemperatureUnitChangeRequest : WFTemperatureUnitRequest

{
    int _temperatureUnit;
}

@property (nonatomic) int temperatureUnit;

- (void)startWithService:(id)arg1;

@end
