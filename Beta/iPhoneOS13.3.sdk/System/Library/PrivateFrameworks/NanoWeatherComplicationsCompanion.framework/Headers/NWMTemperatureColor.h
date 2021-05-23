/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWMTemperatureColor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)colorForTemperature:(id)arg1;
+ (void)colorSpectrumBetweenLow:(id)arg1 high:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)colorSpectrum;

@end
