//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoWeatherComplicationsCompanion/NWCFiveHourForecastConditionGlyphView.h>

@class NWMTemperatureFormatter;

__attribute__((visibility("hidden")))
@interface NWCFiveHourForecastTemperatureView : NWCFiveHourForecastConditionGlyphView
{
    NWMTemperatureFormatter *_formatter;
}

@property(retain, nonatomic) NWMTemperatureFormatter *formatter; // @synthesize formatter=_formatter;
// - (void).cxx_destruct;
- (id)dataFormatter;
- (Class)hourlyForecastViewClass;

@end

