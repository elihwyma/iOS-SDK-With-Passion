/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NWMTemperatureFormatter;

@interface NWCWeatherTemplateFormatter : NSObject

{
    NWMTemperatureFormatter *_temperatureFormatter;
}

@property (retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFormatter;

- (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)switcherTemplateWithFamily:(long long)arg1;
- (id)circularSmallTemplateForConditions:(id)arg1;
- (id)extraLargeTemplateForConditions:(id)arg1;
- (id)modularSmallTemplateForConditions:(id)arg1;
- (id)utilitarianSmallTemplateForConditions:(id)arg1;
- (id)circularMediumTemplateForConditions:(id)arg1;
- (id)graphicCircularTemplateForCurrentObservations:(id)arg1 dailyForecastedConditions:(id)arg2;
- (id)graphicBezelTemplateForCurrentObservations:(id)arg1 dailyForecastedConditions:(id)arg2;
- (id)graphicCornerTemplateForCurrentObservations:(id)arg1 dailyForecastedConditions:(id)arg2;
- (id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(_Bool)arg2 airQualityConditions:(id)arg3 conditions:(id)arg4 dailyForecastedConditions:(id)arg5;
- (id)utilitarianLargeTemplateForConditions:(id)arg1;

@end
