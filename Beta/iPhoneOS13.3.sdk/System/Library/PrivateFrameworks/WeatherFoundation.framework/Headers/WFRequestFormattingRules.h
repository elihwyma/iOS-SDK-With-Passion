/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@protocol WFSettings;

@interface WFRequestFormattingRules : NSObject

{
    id <WFSettings> _settings;
}

@property (nonatomic, readonly) id <WFSettings> settings;

+ (_Bool)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2;

- (id)initWithSettings:(id)arg1;
- (long long)locationNumDecimalsOfPrecision;
- (_Bool)aqiEnabledForCountryCode:(id)arg1;

@end
