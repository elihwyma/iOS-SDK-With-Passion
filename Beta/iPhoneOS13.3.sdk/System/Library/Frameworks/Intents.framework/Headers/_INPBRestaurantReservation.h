/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBInteger, _INPBLocation, _INPBReservation;

@interface _INPBRestaurantReservation : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBInteger *_partySize;
    _INPBReservation *_reservation;
    _INPBDateTimeRange *_reservationDuration;
    _INPBLocation *_restaurantLocation;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBInteger *partySize;
@property (nonatomic, readonly) _Bool hasPartySize;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (nonatomic, readonly) _Bool hasReservation;
@property (retain, nonatomic) _INPBDateTimeRange *reservationDuration;
@property (nonatomic, readonly) _Bool hasReservationDuration;
@property (retain, nonatomic) _INPBLocation *restaurantLocation;
@property (nonatomic, readonly) _Bool hasRestaurantLocation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
