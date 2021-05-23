/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBLocationValue, _INPBRentalCar, _INPBReservation;

@interface _INPBRentalCarReservation : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBLocationValue *_dropOffLocation;
    _INPBLocationValue *_pickupLocation;
    _INPBRentalCar *_rentalCar;
    _INPBDateTimeRange *_rentalDuration;
    _INPBReservation *_reservation;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBLocationValue *dropOffLocation;
@property (nonatomic, readonly) _Bool hasDropOffLocation;
@property (retain, nonatomic) _INPBLocationValue *pickupLocation;
@property (nonatomic, readonly) _Bool hasPickupLocation;
@property (retain, nonatomic) _INPBRentalCar *rentalCar;
@property (nonatomic, readonly) _Bool hasRentalCar;
@property (retain, nonatomic) _INPBDateTimeRange *rentalDuration;
@property (nonatomic, readonly) _Bool hasRentalDuration;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (nonatomic, readonly) _Bool hasReservation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
