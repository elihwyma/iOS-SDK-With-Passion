/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@interface WFTemperature : NSObject <Swift>

{
    struct {
        double celsiusVal;
        double kelvinVal;
        double fahrenheitVal;
    } _temperatureValues;
}

@property (nonatomic) double celsius;
@property (nonatomic) double fahrenheit;
@property (nonatomic) double kelvin;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)temperatureForUnit:(int)arg1;
- (id)initWithTemperatureUnit:(int)arg1 value:(double)arg2;
- (_Bool)isEqualToTemperature:(id)arg1;
- (void)_setValue:(double)arg1 forUnit:(int)arg2;
- (void)_resetTemperatureValues;
- (_Bool)_unitIsHydrated:(int)arg1 outputValue:(out double *)arg2;

@end
