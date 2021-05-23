/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBAirline, _INPBAirportGate, _INPBDateTimeRange;

@interface _INPBFlight : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBAirline *_airline;
    _INPBAirportGate *_arrivalAirportGate;
    _INPBDateTimeRange *_boardingTime;
    _INPBAirportGate *_departureAirportGate;
    _INPBDateTimeRange *_flightDuration;
    NSString *_flightNumber;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
