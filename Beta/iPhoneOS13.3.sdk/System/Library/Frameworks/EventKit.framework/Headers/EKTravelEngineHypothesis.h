/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface EKTravelEngineHypothesis : NSObject

{
    int _transportType;
    NSDate *_conservativeDepartureDate;
    double _conservativeTravelTime;
    NSDate *_suggestedDepartureDate;
    double _estimatedTravelTime;
    NSDate *_aggressiveDepartureDate;
    double _aggressiveTravelTime;
    NSString *_routeName;
    _Bool _supportsLiveTraffic;
    unsigned long long _currentTrafficDensity;
    NSString *_trafficDensityDescription;
    long long _travelState;
}

@property (nonatomic, readonly) int transportType;
@property (copy, nonatomic, readonly) NSDate *conservativeDepartureDate;
@property (nonatomic, readonly) double conservativeTravelTime;
@property (copy, nonatomic, readonly) NSDate *suggestedDepartureDate;
@property (nonatomic, readonly) double estimatedTravelTime;
@property (copy, nonatomic, readonly) NSDate *aggressiveDepartureDate;
@property (nonatomic, readonly) double aggressiveTravelTime;
@property (copy, nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) _Bool supportsLiveTraffic;
@property (nonatomic, readonly) unsigned long long currentTrafficDensity;
@property (copy, nonatomic, readonly) NSString *trafficDensityDescription;
@property (nonatomic, readonly) long long travelState;

+ (_Bool)supportsSecureCoding;
+ (id)syntheticHypothesisWithStartDate:(id)arg1 conservativeTravelTime:(double)arg2 estimatedTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToHypothesis:(id)arg1;
- (id)initWithTransportType:(int)arg1 conservativeDepartureDate:(id)arg2 conservativeTravelTime:(double)arg3 suggestedDepartureDate:(id)arg4 estimatedTravelTime:(double)arg5 aggressiveDepartureDate:(id)arg6 aggressiveTravelTime:(double)arg7 routeName:(id)arg8 supportsLiveTraffic:(_Bool)arg9 currentTrafficDensity:(unsigned long long)arg10 trafficDensityDescription:(id)arg11 travelState:(long long)arg12;

@end
