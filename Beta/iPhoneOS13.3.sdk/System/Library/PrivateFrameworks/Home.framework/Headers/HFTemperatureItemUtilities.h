/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFTemperatureItemUtilities : NSObject

+ (id)currentHeatingCoolingModeValueInResponse:(id)arg1;
+ (id)targetHeatingCoolingModeValueInResponse:(id)arg1;
+ (id)targetTemperatureValueInResponse:(id)arg1;
+ (long long)_heatingCoolingValueForCurrentHeaterCoolerState:(long long)arg1 isActive:(_Bool)arg2;
+ (long long)_heatingCoolingValueForTargetHeaterCoolerState:(long long)arg1 isActive:(_Bool)arg2;
+ (id)integerTemperatureRangeWithinNumberRange:(id)arg1 representsCelsius:(_Bool)arg2;

@end
