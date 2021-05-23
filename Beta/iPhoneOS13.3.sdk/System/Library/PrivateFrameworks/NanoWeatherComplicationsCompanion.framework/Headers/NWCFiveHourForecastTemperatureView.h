/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <NanoWeatherComplicationsCompanion/NWCFiveHourForecastConditionGlyphView.h>

@class NWMTemperatureFormatter;

__attribute__((visibility("hidden")))
@interface NWCFiveHourForecastTemperatureView : NWCFiveHourForecastConditionGlyphView

{
    NWMTemperatureFormatter *_formatter;
}

@property (retain, nonatomic) NWMTemperatureFormatter *formatter;

- (id)dataFormatter;
- (Class)hourlyForecastViewClass;

@end
