/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@protocol WFSettings;

@interface WFResponseParsingRules : NSObject

{
    id <WFSettings> _settings;
}

@property (nonatomic, readonly) id <WFSettings> settings;

+ (_Bool)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2;

- (id)initWithSettings:(id)arg1;
- (_Bool)aqiEnabledForCountryCode:(id)arg1;

@end
