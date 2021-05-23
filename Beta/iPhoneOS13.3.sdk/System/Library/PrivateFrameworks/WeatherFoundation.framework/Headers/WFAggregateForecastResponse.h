/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFResponse.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class NSArray;

@interface WFAggregateForecastResponse : WFResponse <Swift>

{
    _Bool _responseWasFromCache;
    NSArray *_forecasts;
}

@property (copy, nonatomic) NSArray *forecasts;
@property (nonatomic) _Bool responseWasFromCache;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
