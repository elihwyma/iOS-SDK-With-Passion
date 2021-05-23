/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBAirport, _SFPBDate;

@protocol _SFPBFlightLeg <Swift>

@property (nonatomic) int status;
@property (retain, nonatomic) _SFPBDate *departurePublishedTime;
@property (retain, nonatomic) _SFPBDate *departureActualTime;
@property (copy, nonatomic) NSString *departureTerminal;
@property (copy, nonatomic) NSString *departureGate;
@property (retain, nonatomic) _SFPBAirport *departureAirport;
@property (retain, nonatomic) _SFPBDate *arrivalPublishedTime;
@property (retain, nonatomic) _SFPBDate *arrivalActualTime;
@property (copy, nonatomic) NSString *arrivalTerminal;
@property (copy, nonatomic) NSString *arrivalGate;
@property (retain, nonatomic) _SFPBAirport *arrivalAirport;
@property (retain, nonatomic) _SFPBAirport *divertedAirport;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *baggageClaim;
@property (retain, nonatomic) _SFPBDate *departureGateClosedTime;
@property (retain, nonatomic) _SFPBDate *departureRunwayTime;
@property (retain, nonatomic) _SFPBDate *arrivalRunwayTime;
@property (retain, nonatomic) _SFPBDate *arrivalGateTime;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
