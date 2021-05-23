/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBInteger, _INPBLocation, _INPBReservation;

@interface _INPBLodgingReservation : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBLocation *_lodgingBusinessLocation;
    _INPBInteger *_numberOfAdults;
    _INPBInteger *_numberOfChildren;
    _INPBReservation *_reservation;
    _INPBDateTimeRange *_reservationDuration;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBLocation *lodgingBusinessLocation;
@property (nonatomic, readonly) _Bool hasLodgingBusinessLocation;
@property (retain, nonatomic) _INPBInteger *numberOfAdults;
@property (nonatomic, readonly) _Bool hasNumberOfAdults;
@property (retain, nonatomic) _INPBInteger *numberOfChildren;
@property (nonatomic, readonly) _Bool hasNumberOfChildren;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (nonatomic, readonly) _Bool hasReservation;
@property (retain, nonatomic) _INPBDateTimeRange *reservationDuration;
@property (nonatomic, readonly) _Bool hasReservationDuration;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
