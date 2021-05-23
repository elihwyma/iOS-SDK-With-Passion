/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKTravelEngineHypothesis.h>

@class NSDate, NSString;

@interface EKMutableTravelEngineHypothesis : EKTravelEngineHypothesis

@property (nonatomic) int transportType;
@property (copy, nonatomic) NSDate *conservativeDepartureDate;
@property (nonatomic) double conservativeTravelTime;
@property (copy, nonatomic) NSDate *suggestedDepartureDate;
@property (nonatomic) double estimatedTravelTime;
@property (copy, nonatomic) NSDate *aggressiveDepartureDate;
@property (nonatomic) double aggressiveTravelTime;
@property (copy, nonatomic) NSString *routeName;
@property (nonatomic) _Bool supportsLiveTraffic;
@property (nonatomic) unsigned long long currentTrafficDensity;
@property (copy, nonatomic) NSString *trafficDensityDescription;
@property (nonatomic) long long travelState;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
