/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, SFAirport;

@interface SFFlightLeg : NSObject <Swift>

{
    struct {
        unsigned int status:1;
    } _has;
    int _status;
    NSDate *_departurePublishedTime;
    NSDate *_departureActualTime;
    NSString *_departureTerminal;
    NSString *_departureGate;
    SFAirport *_departureAirport;
    NSDate *_arrivalPublishedTime;
    NSDate *_arrivalActualTime;
    NSString *_arrivalTerminal;
    NSString *_arrivalGate;
    SFAirport *_arrivalAirport;
    SFAirport *_divertedAirport;
    NSString *_title;
    NSString *_baggageClaim;
    NSDate *_departureGateClosedTime;
    NSDate *_departureRunwayTime;
    NSDate *_arrivalRunwayTime;
    NSDate *_arrivalGateTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasStatus;
- (id)initWithProtobuf:(id)arg1;

@end
