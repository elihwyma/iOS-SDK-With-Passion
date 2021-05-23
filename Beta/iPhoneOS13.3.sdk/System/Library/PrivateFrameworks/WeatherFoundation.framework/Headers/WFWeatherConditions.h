/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class NSMutableDictionary, WFLocation;

@interface WFWeatherConditions : NSObject <Swift>

{
    _Bool _nightForecast;
    struct os_unfair_lock_s _componentsLock;
    NSMutableDictionary *_components;
    WFLocation *_location;
}

@property (retain, nonatomic) NSMutableDictionary *components;
@property (nonatomic) struct os_unfair_lock_s componentsLock;
@property (retain) WFLocation *location;
@property (getter=isNightForecast) _Bool nightForecast;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setValue:(id)arg1 forComponent:(id)arg2;
- (id)valueForComponent:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)dictionaryRepresentation;
- (void)_commonInit;
- (id)valueForComponentSync:(id)arg1;
- (void)_retrieveSunrise:(id *)arg1 sunset:(id *)arg2;
- (void)setValueSync:(id)arg1 forComponent:(id)arg2;
- (_Bool)wf_isDayIfSunrise:(id)arg1 sunset:(id)arg2;
- (id)allComponents;
- (_Bool)wf_isDay;

@end
