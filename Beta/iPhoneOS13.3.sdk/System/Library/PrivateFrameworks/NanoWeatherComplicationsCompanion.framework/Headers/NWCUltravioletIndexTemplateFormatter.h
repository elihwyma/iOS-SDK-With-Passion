/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <Foundation/NSObject.h>

@class NSNumberFormatter, NSString;

@interface NWCUltravioletIndexTemplateFormatter : NSObject

{
    NSNumberFormatter *_indexNumberFormatter;
}

@property (retain, nonatomic) NSNumberFormatter *indexNumberFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFormatter;

- (id)init;
- (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)switcherTemplateWithFamily:(long long)arg1;
- (id)graphicCircularTemplateForConditions:(id)arg1;
- (id)circularSmallTemplateForConditions:(id)arg1;
- (id)extraLargeTemplateForConditions:(id)arg1;
- (id)graphicCornerTemplateForConditions:(id)arg1;
- (id)modularSmallTemplateForConditions:(id)arg1;
- (id)utilitarianSmallTemplateForConditions:(id)arg1;
- (id)circularMediumTemplateForConditions:(id)arg1;
- (id)utilitarianLargeTemplateForConditions:(id)arg1;
- (id)_localizedIndexForConditions:(id)arg1;
- (id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(_Bool)arg2 conditions:(id)arg3;
- (id)_graphicRectangularTemplateWithTextProvider:(id)arg1 conditions:(id)arg2 sevenDayDailyForecastedConditions:(id)arg3 timeZone:(id)arg4;
- (id)graphicBezelTemplateForConditions:(id)arg1;
- (id)graphicRectangularTemplateForLocalLocation:(_Bool)arg1 timeZone:(id)arg2 conditions:(id)arg3 dailyForecastedConditions:(id)arg4;

@end
