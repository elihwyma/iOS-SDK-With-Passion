/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFResponse.h>

@class NSData, WFAirQualityConditions;

@interface WFAirQualityResponse : WFResponse

{
    _Bool _responseWasFromCache;
    WFAirQualityConditions *_airQualityConditions;
    NSData *_rawAPIData;
}

@property (nonatomic) _Bool responseWasFromCache;
@property (retain, nonatomic) NSData *rawAPIData;
@property (retain, nonatomic) WFAirQualityConditions *airQualityConditions;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
