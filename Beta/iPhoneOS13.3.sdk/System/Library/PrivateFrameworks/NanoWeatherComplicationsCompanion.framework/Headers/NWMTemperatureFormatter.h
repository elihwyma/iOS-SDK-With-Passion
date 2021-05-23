/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSMeasurement, NSMeasurementFormatter, NSNumberFormatter, NSString;

@protocol OS_dispatch_queue;

@interface NWMTemperatureFormatter : NSObject

{
    _Bool _isCelsiusPreferred;
    _Bool _shouldAvoidDegreeSymbolOnly;
    NSLocale *_referenceLocale;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumberFormatter *_noUnitFormatter;
    NSMeasurementFormatter *_degreeSymbolOnlyFormatter;
    NSMeasurementFormatter *_unitFormatter;
    NSMeasurement *_noMeasurement;
    NSString *_formattedStaleTemperatureWithDegreeSymbol;
    NSString *_formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
    NSString *_formattedStaleTemperatureWithUnit;
    NSString *_formattedStaleTemperatureWithUnitRoundedVariant;
    NSString *_formattedStaleTemperatureWithoutUnit;
    NSString *_formattedStaleTemperatureWithoutUnitRoundedVariant;
}

@property (retain, nonatomic) NSLocale *referenceLocale;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSNumberFormatter *noUnitFormatter;
@property (retain, nonatomic) NSMeasurementFormatter *degreeSymbolOnlyFormatter;
@property (retain, nonatomic) NSMeasurementFormatter *unitFormatter;
@property (retain, nonatomic) NSMeasurement *noMeasurement;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithDegreeSymbol;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithUnit;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithUnitRoundedVariant;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithoutUnit;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithoutUnitRoundedVariant;
@property (readonly) _Bool isCelsiusPreferred;
@property (readonly) _Bool shouldAvoidDegreeSymbolOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFormatter;

- (id)init;
- (double)value:(id)arg1;
- (id)formattedWithDegreeSymbol:(id)arg1 style:(unsigned long long)arg2 fallbackStyle:(unsigned long long)arg3;
- (id)formattedWithDegreeSymbol:(id)arg1 fallbackStyle:(unsigned long long)arg2;
- (id)formattedWithoutUnit:(id)arg1;
- (id)formattedWithoutUnit:(id)arg1 style:(unsigned long long)arg2;
- (void)_locked_updateStaleTemperatureWithUnit;
- (id)_locked_degreeSymbolOnlyFormatter;
- (id)_locked_noUnitFormatter;
- (id)formattedWithUnit:(id)arg1;
- (id)_localizedMeasurementForTemperature:(id)arg1;
- (id)_formattedStaleTemperatureWithDegreeSymbol:(unsigned long long)arg1;
- (id)formattedWithUnit:(id)arg1 style:(unsigned long long)arg2;
- (id)_formattedStaleTemperatureWithUnit:(unsigned long long)arg1;
- (id)_formattedStaleTemperatureWithoutUnit:(unsigned long long)arg1;
- (id)_locked_unitFormatter;

@end
