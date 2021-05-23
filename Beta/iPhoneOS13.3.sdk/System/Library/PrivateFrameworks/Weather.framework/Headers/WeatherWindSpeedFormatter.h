/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSFormatter.h>

@class NSDictionary, NSLocale;

@interface WeatherWindSpeedFormatter : NSFormatter

{
    NSLocale *_locale;
    NSDictionary *_directionSubstringAttributes;
}

@property (retain) NSLocale *locale;
@property (retain) NSDictionary *directionSubstringAttributes;

+ (id)convenienceFormatter;

- (id)init;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)formattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (double)speedByConvertingToUserUnit:(double)arg1;
- (id)templateStringForSpeed:(float)arg1 direction:(float)arg2;
- (id)stringForWindDirection:(float)arg1;
- (id)stringForWindSpeed:(float)arg1;
- (id)fallbackStringForWindSpeed:(float)arg1;
- (int)windSpeedUnit;
- (id)fallbackUnitString;
- (id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (id)speedStringByConvertingToUserUnits:(float)arg1;

@end
