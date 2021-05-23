/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBFlightReservation, _INPBLodgingReservation, _INPBRentalCarReservation, _INPBRestaurantReservation, _INPBTicketedEventReservation, _INPBTrainReservation;

@interface _INPBReservationWrapper : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBFlightReservation *_flightReservation;
    _INPBLodgingReservation *_lodgingReservation;
    _INPBRentalCarReservation *_rentalCarReservation;
    _INPBRestaurantReservation *_restaurantReservation;
    _INPBTicketedEventReservation *_ticketedEventReservation;
    _INPBTrainReservation *_trainReservation;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBFlightReservation *flightReservation;
@property (nonatomic, readonly) _Bool hasFlightReservation;
@property (retain, nonatomic) _INPBLodgingReservation *lodgingReservation;
@property (nonatomic, readonly) _Bool hasLodgingReservation;
@property (retain, nonatomic) _INPBRentalCarReservation *rentalCarReservation;
@property (nonatomic, readonly) _Bool hasRentalCarReservation;
@property (retain, nonatomic) _INPBRestaurantReservation *restaurantReservation;
@property (nonatomic, readonly) _Bool hasRestaurantReservation;
@property (retain, nonatomic) _INPBTicketedEventReservation *ticketedEventReservation;
@property (nonatomic, readonly) _Bool hasTicketedEventReservation;
@property (retain, nonatomic) _INPBTrainReservation *trainReservation;
@property (nonatomic, readonly) _Bool hasTrainReservation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
