/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, SFAirport;

@protocol SFFlightLeg <Swift>

@property (nonatomic) int status;
@property (copy, nonatomic) NSDate *departurePublishedTime;
@property (copy, nonatomic) NSDate *departureActualTime;
@property (copy, nonatomic) NSString *departureTerminal;
@property (copy, nonatomic) NSString *departureGate;
@property (retain, nonatomic) SFAirport *departureAirport;
@property (copy, nonatomic) NSDate *arrivalPublishedTime;
@property (copy, nonatomic) NSDate *arrivalActualTime;
@property (copy, nonatomic) NSString *arrivalTerminal;
@property (copy, nonatomic) NSString *arrivalGate;
@property (retain, nonatomic) SFAirport *arrivalAirport;
@property (retain, nonatomic) SFAirport *divertedAirport;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *baggageClaim;
@property (copy, nonatomic) NSDate *departureGateClosedTime;
@property (copy, nonatomic) NSDate *departureRunwayTime;
@property (copy, nonatomic) NSDate *arrivalRunwayTime;
@property (copy, nonatomic) NSDate *arrivalGateTime;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
