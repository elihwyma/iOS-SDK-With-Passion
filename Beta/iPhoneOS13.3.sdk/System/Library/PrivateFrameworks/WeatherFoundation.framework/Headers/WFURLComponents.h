/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class CLLocation, NSLocale, NSString, NSURL;

@interface WFURLComponents : NSObject <Swift>

{
    _Bool _showHourlyWeatherOnly;
    _Bool _isLocalWeatherCity;
    unsigned long long _destination;
    CLLocation *_location;
    NSString *_locationName;
    unsigned long long _cityIndex;
    NSLocale *_locale;
    NSString *_platform;
}

@property _Bool isLocalWeatherCity;
@property unsigned long long cityIndex;
@property (retain) NSLocale *locale;
@property (retain) NSString *platform;
@property unsigned long long destination;
@property (copy) CLLocation *location;
@property (copy) NSString *locationName;
@property _Bool showHourlyWeatherOnly;
@property (copy, readonly) NSURL *URL;

+ (_Bool)supportsSecureCoding;
+ (id)componentsForURL:(id)arg1;
+ (void)locationForURLComponents:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)locationForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)componentsForLocation:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToComponents:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (_Bool)_canBuildURLWithProvidedComponents;

@end
