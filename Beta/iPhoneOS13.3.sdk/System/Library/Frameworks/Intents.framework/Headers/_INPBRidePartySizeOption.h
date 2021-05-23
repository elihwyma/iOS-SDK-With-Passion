/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBPriceRangeValue, _INPBRangeValue;

@interface _INPBRidePartySizeOption : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBRangeValue *_partySizeRange;
    _INPBPriceRangeValue *_priceRange;
    NSString *_sizeDescription;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBRangeValue *partySizeRange;
@property (nonatomic, readonly) _Bool hasPartySizeRange;
@property (retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property (nonatomic, readonly) _Bool hasPriceRange;
@property (copy, nonatomic) NSString *sizeDescription;
@property (nonatomic, readonly) _Bool hasSizeDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
