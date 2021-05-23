/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBTimestamp;

@interface _INPBReservation : PBCodable <Swift>

{
    struct {
        unsigned int reservationStatus:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _reservationStatus;
    NSArray *_actions;
    _INPBTimestamp *_bookingTime;
    _INPBDataString *_itemReference;
    NSString *_reservationHolderName;
    NSString *_reservationNumber;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic, readonly) unsigned long long actionsCount;
@property (retain, nonatomic) _INPBTimestamp *bookingTime;
@property (nonatomic, readonly) _Bool hasBookingTime;
@property (retain, nonatomic) _INPBDataString *itemReference;
@property (nonatomic, readonly) _Bool hasItemReference;
@property (copy, nonatomic) NSString *reservationHolderName;
@property (nonatomic, readonly) _Bool hasReservationHolderName;
@property (copy, nonatomic) NSString *reservationNumber;
@property (nonatomic, readonly) _Bool hasReservationNumber;
@property (nonatomic) int reservationStatus;
@property (nonatomic) _Bool hasReservationStatus;

+ (_Bool)supportsSecureCoding;
+ (Class)actionsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)actionsAtIndex:(unsigned long long)arg1;
- (void)clearActions;
- (void)addActions:(id)arg1;
- (id)reservationStatusAsString:(int)arg1;
- (int)StringAsReservationStatus:(id)arg1;

@end
