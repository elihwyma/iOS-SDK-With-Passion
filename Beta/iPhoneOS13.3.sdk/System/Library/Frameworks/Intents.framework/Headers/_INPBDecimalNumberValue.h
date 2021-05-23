/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBDecimalNumberValue : PBCodable <Swift>

{
    struct {
        unsigned int exponent:1;
        unsigned int isNegative:1;
        unsigned int mantissa:1;
    } _has;
    _Bool _isNegative;
    _Bool __encodeLegacyGloryData;
    int _exponent;
    unsigned long long _mantissa;
    _INPBValueMetadata *_valueMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int exponent;
@property (nonatomic) _Bool hasExponent;
@property (nonatomic) _Bool isNegative;
@property (nonatomic) _Bool hasIsNegative;
@property (nonatomic) unsigned long long mantissa;
@property (nonatomic) _Bool hasMantissa;
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
