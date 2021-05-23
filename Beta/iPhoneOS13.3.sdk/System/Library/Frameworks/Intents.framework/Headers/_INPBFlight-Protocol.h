/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBAirline, _INPBAirportGate, _INPBDateTimeRange;

@protocol _INPBFlight <Swift>

@property (retain, nonatomic) _INPBAirline *airline;
@property (nonatomic, readonly) _Bool hasAirline;
@property (retain, nonatomic) _INPBAirportGate *arrivalAirportGate;
@property (nonatomic, readonly) _Bool hasArrivalAirportGate;
@property (retain, nonatomic) _INPBDateTimeRange *boardingTime;
@property (nonatomic, readonly) _Bool hasBoardingTime;
@property (retain, nonatomic) _INPBAirportGate *departureAirportGate;
@property (nonatomic, readonly) _Bool hasDepartureAirportGate;
@property (retain, nonatomic) _INPBDateTimeRange *flightDuration;
@property (nonatomic, readonly) _Bool hasFlightDuration;
@property (copy, nonatomic) NSString *flightNumber;
@property (nonatomic, readonly) _Bool hasFlightNumber;

@end
