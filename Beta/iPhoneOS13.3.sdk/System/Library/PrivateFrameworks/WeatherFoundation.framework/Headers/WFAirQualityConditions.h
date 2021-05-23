/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class NSArray, NSDate, NSLocale, NSString, WFAQIScaleCategory, WFAirPollutant, WFLocation;

@interface WFAirQualityConditions : NSObject <Swift>

{
    WFLocation *_location;
    NSDate *_date;
    NSDate *_expirationDate;
    NSString *_provider;
    NSString *_localizedDisclaimer;
    unsigned long long _localizedAirQualityIndex;
    WFAQIScaleCategory *_localizedAirQualityScaleCategory;
    NSArray *_pollutants;
    WFAirPollutant *_primaryPollutant;
    unsigned long long _category;
    NSLocale *_locale;
    NSString *_localizedAirQualityCategory;
    NSString *_airQualityScale;
}

@property (retain, nonatomic) WFLocation *location;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *provider;
@property (retain, nonatomic) NSString *localizedDisclaimer;
@property (retain, nonatomic) NSArray *pollutants;
@property (retain, nonatomic) WFAirPollutant *primaryPollutant;
@property (nonatomic) unsigned long long localizedAirQualityIndex;
@property (retain, nonatomic) WFAQIScaleCategory *localizedAirQualityScaleCategory;
@property (nonatomic) unsigned long long category;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *localizedAirQualityCategory;
@property (copy, nonatomic) NSString *airQualityScale;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)airQualityIndex;

@end
