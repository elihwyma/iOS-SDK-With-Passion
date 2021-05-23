/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBSeat : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSString *_seatNumber;
    NSString *_seatRow;
    NSString *_seatSection;
    NSString *_seatingType;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *seatNumber;
@property (nonatomic, readonly) _Bool hasSeatNumber;
@property (copy, nonatomic) NSString *seatRow;
@property (nonatomic, readonly) _Bool hasSeatRow;
@property (copy, nonatomic) NSString *seatSection;
@property (nonatomic, readonly) _Bool hasSeatSection;
@property (copy, nonatomic) NSString *seatingType;
@property (nonatomic, readonly) _Bool hasSeatingType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
