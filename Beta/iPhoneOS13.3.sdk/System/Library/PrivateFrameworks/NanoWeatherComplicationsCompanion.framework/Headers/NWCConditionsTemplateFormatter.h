/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <Foundation/NSObject.h>

@class CLKTextProvider, NSString, NWMTemperatureFormatter;

@interface NWCConditionsTemplateFormatter : NSObject

{
    NWMTemperatureFormatter *_temperatureFormatter;
    CLKTextProvider *_noDataTextProvider;
}

@property (retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter;
@property (retain, nonatomic) CLKTextProvider *noDataTextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFormatter;

- (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)switcherTemplateWithFamily:(long long)arg1;
- (id)graphicCircularTemplateForConditions:(id)arg1;
- (id)_graphicRectangularTemplateWithTextProvider:(id)arg1 hourlyForecastedConditions:(id)arg2 timeZone:(id)arg3;
- (id)circularSmallTemplateForConditions:(id)arg1;
- (id)extraLargeTemplateForConditions:(id)arg1;
- (id)graphicBezelTemplateForConditions:(id)arg1 dailyForecastedConditions:(id)arg2;
- (id)graphicCornerTemplateForConditions:(id)arg1;
- (id)graphicRectangularTemplateForLocalLocation:(_Bool)arg1 timeZone:(id)arg2 conditions:(id)arg3 dailyForecastedConditions:(id)arg4 hourlyForecastedConditions:(id)arg5;
- (id)modularSmallTemplateForConditions:(id)arg1;
- (id)utilitarianSmallTemplateForConditions:(id)arg1;
- (id)circularMediumTemplateForConditions:(id)arg1;

@end
