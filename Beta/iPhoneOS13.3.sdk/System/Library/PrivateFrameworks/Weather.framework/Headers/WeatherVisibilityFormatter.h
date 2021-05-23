/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSLengthFormatter.h>

@class NSLocale;

@interface WeatherVisibilityFormatter : NSLengthFormatter

{
    NSLocale *_locale;
}

@property (retain, nonatomic) NSLocale *locale;

+ (id)convenienceFormatter;

- (id)init;
- (id)stringFromDistance:(double)arg1 isDataMetric:(_Bool)arg2;
- (id)stringFromKilometers:(double)arg1;
- (id)stringFromMiles:(double)arg1;

@end
