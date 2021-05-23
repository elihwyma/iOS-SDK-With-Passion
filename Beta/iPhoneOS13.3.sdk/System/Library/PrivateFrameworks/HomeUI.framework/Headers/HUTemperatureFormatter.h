/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSMeasurementFormatter.h>

@class NSNumber, NSString;

@interface HUTemperatureFormatter : NSMeasurementFormatter

{
    _Bool _inputIsCelsius;
    _Bool _outputIsCelsius;
    NSString *_fallbackTemperatureString;
    NSNumber *_stepValue;
}

@property (nonatomic) _Bool inputIsCelsius;
@property (nonatomic) _Bool outputIsCelsius;
@property (retain, nonatomic) NSNumber *stepValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *fallbackTemperatureString;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) unsigned long long minimumFractionDigits;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForObjectValue:(id)arg1;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(_Bool)arg2;

@end
