/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <NSObject.h>

@class FUAirline;

__attribute__((visibility("hidden")))
@interface FUFlightCodeShare : NSObject

{
    FUAirline *_airline;
    unsigned long long _flightNumber;
}

@property (retain) FUAirline *airline;
@property unsigned long long flightNumber;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
