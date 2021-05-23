/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSLengthFormatter.h>

@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter

{
    NSLocale *_locale;
}

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (id)init;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDistance:(double)arg1 isDataMetric:(_Bool)arg2;
- (long long)precipitationUnit;
- (double)convertDistanceInMetric:(double)arg1 to:(long long)arg2;
- (double)convertDistanceInImperial:(double)arg1 to:(long long)arg2;
- (id)stringFromCentimeters:(double)arg1;
- (id)stringFromInches:(double)arg1;

@end
