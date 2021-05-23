/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSFormatter.h>

@class NSLocale, NSString;

@interface WFTemperatureFormatter : NSFormatter

{
    _Bool _includeDegreeSymbol;
    int _inputUnit;
    int _outputUnit;
    int _symbolType;
    struct UAMeasureFormat *_measureFormatter;
    NSLocale *_locale;
    NSString *_fallbackTemperatureString;
    unsigned long long _roundingMode;
    unsigned long long _maximumFractionDigits;
}

@property (nonatomic) struct UAMeasureFormat *measureFormatter;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *fallbackTemperatureString;
@property (nonatomic) int inputUnit;
@property (nonatomic) int outputUnit;
@property (nonatomic) unsigned long long roundingMode;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) int symbolType;
@property (nonatomic) _Bool includeDegreeSymbol;

+ (id)temperatureFormatterWithInputUnit:(int)arg1 outputUnit:(int)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (void)_localeDidChangeNotification:(id)arg1;
- (id)formattedTemperatureFromString:(id)arg1;
- (id)formattedStringFromTemperature:(id)arg1;
- (id)_formatTemperatureValue:(id)arg1 toUnit:(int)arg2;

@end
