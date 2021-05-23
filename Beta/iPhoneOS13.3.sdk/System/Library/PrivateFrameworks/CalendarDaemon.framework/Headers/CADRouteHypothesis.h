/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface CADRouteHypothesis : NSObject

{
    _Bool _supportsLiveTraffic;
    int _transportType;
    NSDate *_conservativeDepartureDate;
    double _conservativeTravelTime;
    NSDate *_suggestedDepartureDate;
    double _estimatedTravelTime;
    NSDate *_aggressiveDepartureDate;
    double _aggressiveTravelTime;
    NSString *_routeName;
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

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransportType:(int)arg1 conservativeDepartureDate:(id)arg2 conservativeTravelTime:(double)arg3 suggestedDepartureDate:(id)arg4 estimatedTravelTime:(double)arg5 aggressiveDepartureDate:(id)arg6 aggressiveTravelTime:(double)arg7 routeName:(id)arg8 supportsLiveTraffic:(_Bool)arg9 currentTrafficDensity:(unsigned long long)arg10 trafficDensityDescription:(id)arg11 travelState:(long long)arg12;

@end
