/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBAirport, _SFPBDate;

@interface _SFPBFlightLeg : PBCodable <Swift>

{
    int _status;
    _SFPBDate *_departurePublishedTime;
    _SFPBDate *_departureActualTime;
    NSString *_departureTerminal;
    NSString *_departureGate;
    _SFPBAirport *_departureAirport;
    _SFPBDate *_arrivalPublishedTime;
    _SFPBDate *_arrivalActualTime;
    NSString *_arrivalTerminal;
    NSString *_arrivalGate;
    _SFPBAirport *_arrivalAirport;
    _SFPBAirport *_divertedAirport;
    NSString *_title;
    NSString *_baggageClaim;
    _SFPBDate *_departureGateClosedTime;
    _SFPBDate *_departureRunwayTime;
    _SFPBDate *_arrivalRunwayTime;
    _SFPBDate *_arrivalGateTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
