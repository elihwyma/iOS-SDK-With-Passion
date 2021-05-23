/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <NSObject.h>

@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject

{
    long long _status;
    double _duration;
    FUFlightStep *_departure;
    FUFlightStep *_arrival;
    NSString *_baggageClaim;
}

@property long long status;
@property double duration;
@property (readonly) double currentProgress;
@property (retain) FUFlightStep *departure;
@property (retain) FUFlightStep *arrival;
@property (retain) NSString *baggageClaim;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
