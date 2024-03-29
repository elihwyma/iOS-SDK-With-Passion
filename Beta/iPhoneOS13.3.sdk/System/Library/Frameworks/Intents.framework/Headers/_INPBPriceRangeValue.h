/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBPriceRangeValue : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSString *_currencyCode;
    _INPBDecimalNumberValue *_maximumPrice;
    _INPBDecimalNumberValue *_minimumPrice;
    _INPBValueMetadata *_valueMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, readonly) _Bool hasCurrencyCode;
@property (retain, nonatomic) _INPBDecimalNumberValue *maximumPrice;
@property (nonatomic, readonly) _Bool hasMaximumPrice;
@property (retain, nonatomic) _INPBDecimalNumberValue *minimumPrice;
@property (nonatomic, readonly) _Bool hasMinimumPrice;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
