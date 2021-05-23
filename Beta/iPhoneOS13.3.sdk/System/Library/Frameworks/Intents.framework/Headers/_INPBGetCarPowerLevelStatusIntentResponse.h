/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDistance, _INPBDouble, _INPBInteger;

@interface _INPBGetCarPowerLevelStatusIntentResponse : PBCodable <Swift>

{
    struct {
        unsigned int charging:1;
    } _has;
    _Bool _charging;
    _Bool __encodeLegacyGloryData;
    _INPBDouble *_chargePercentRemaining;
    _INPBDistance *_distanceRemaining;
    _INPBDouble *_fuelPercentRemaining;
    _INPBInteger *_minutesToFull;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDouble *chargePercentRemaining;
@property (nonatomic, readonly) _Bool hasChargePercentRemaining;
@property (nonatomic) _Bool charging;
@property (nonatomic) _Bool hasCharging;
@property (retain, nonatomic) _INPBDistance *distanceRemaining;
@property (nonatomic, readonly) _Bool hasDistanceRemaining;
@property (retain, nonatomic) _INPBDouble *fuelPercentRemaining;
@property (nonatomic, readonly) _Bool hasFuelPercentRemaining;
@property (retain, nonatomic) _INPBInteger *minutesToFull;
@property (nonatomic, readonly) _Bool hasMinutesToFull;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
