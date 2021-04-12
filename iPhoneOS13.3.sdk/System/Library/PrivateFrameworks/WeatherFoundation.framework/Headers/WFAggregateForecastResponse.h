//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>


@class NSArray;

@interface WFAggregateForecastResponse : WFResponse <NSCopying, NSSecureCoding>
{
    BOOL _responseWasFromCache;
    NSArray *_forecasts;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL responseWasFromCache; // @synthesize responseWasFromCache=_responseWasFromCache;
@property(copy, nonatomic) NSArray *forecasts; // @synthesize forecasts=_forecasts;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

