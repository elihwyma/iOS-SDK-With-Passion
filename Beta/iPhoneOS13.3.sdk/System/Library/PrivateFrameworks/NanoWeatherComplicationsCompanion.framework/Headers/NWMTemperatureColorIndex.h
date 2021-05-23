/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <NanoWeatherComplicationsCompanion/NWColorIndex.h>

@class NSString, WFTemperature;

__attribute__((visibility("hidden")))
@interface NWMTemperatureColorIndex : NWColorIndex

{
    WFTemperature *_temperature;
}

@property (nonatomic, readonly) WFTemperature *temperature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allIndices;
+ (id)indexWithTemperature:(id)arg1 color:(id)arg2;

- (id)initWithTemperature:(id)arg1 color:(id)arg2;

@end
