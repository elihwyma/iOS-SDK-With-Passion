/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIColor;

@interface NWCTemperatureModel : NSObject

{
    double _fraction;
    NSString *_localizedTemperatureCurrent;
    NSString *_localizedTemperatureHigh;
    UIColor *_tintColorHigh;
    NSString *_localizedTemperatureLow;
    UIColor *_tintColorLow;
    NSArray *_spectrum;
    NSArray *_spectrumTicks;
}

@property (nonatomic, readonly) double fraction;
@property (nonatomic, readonly) NSString *localizedTemperatureCurrent;
@property (nonatomic, readonly) NSString *localizedTemperatureHigh;
@property (nonatomic, readonly) UIColor *tintColorHigh;
@property (nonatomic, readonly) NSString *localizedTemperatureLow;
@property (nonatomic, readonly) UIColor *tintColorLow;
@property (nonatomic, readonly) NSArray *spectrum;
@property (nonatomic, readonly) NSArray *spectrumTicks;

+ (id)temperatureModelForCurrentObservation:(id)arg1 dailyForecastedConditions:(id)arg2 temperatureFormatter:(id)arg3 shouldUseNoUnitCurrentTemperature:(_Bool)arg4;

@end
