/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <NSObject.h>

@class FUAirline, FUFlightStep, NSArray, NSDate, NSString;

@interface FUFlight : NSObject

{
    NSString *_queriedAirlineTitle;
    FUAirline *_displayAirline;
    unsigned long long _displayFlightNumber;
    FUAirline *_airline;
    unsigned long long _flightNumber;
    NSString *_flightIdentifier;
    NSString *_cancellationMessage;
    NSArray *_legs;
    NSArray *_codeShares;
    NSArray *_allLegs;
    NSString *_identifier;
    unsigned long long _departureLegIndex;
    unsigned long long _arrivalLegIndex;
    NSDate *_expirationDate;
    NSString *_rawResponse;
}

@property (retain) NSArray *codeShares;
@property (retain) FUAirline *displayAirline;
@property (retain) NSString *queriedAirlineTitle;
@property unsigned long long displayFlightNumber;
@property (retain) FUAirline *airline;
@property unsigned long long flightNumber;
@property (retain) NSString *flightIdentifier;
@property (retain) NSString *cancellationMessage;
@property (retain, nonatomic) NSArray *allLegs;
@property (retain) NSArray *legs;
@property (retain, nonatomic) NSString *identifier;
@property unsigned long long departureLegIndex;
@property unsigned long long arrivalLegIndex;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *rawResponse;
@property (readonly) NSString *displayFlightCode;
@property (readonly) NSString *flightCode;
@property (readonly) long long status;
@property (readonly) FUFlightStep *departure;
@property (readonly) FUFlightStep *arrival;
@property (readonly) double duration;

+ (_Bool)supportsSecureCoding;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)timeFormatterForIdentifier;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDepartureLegIndex:(unsigned long long)arg1 arrivalLegIndex:(unsigned long long)arg2;
- (id)firstLeg;
- (id)lastLeg;
- (id)legsAsFlights;
- (id)relevantLeg;

@end
