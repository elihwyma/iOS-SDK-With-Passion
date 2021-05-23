/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBCurrencyAmountValue;

@interface _INPBPaymentAmountValue : PBCodable <Swift>

{
    struct {
        unsigned int amountType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _amountType;
    _INPBCurrencyAmountValue *_value;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int amountType;
@property (nonatomic) _Bool hasAmountType;
@property (retain, nonatomic) _INPBCurrencyAmountValue *value;
@property (nonatomic, readonly) _Bool hasValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)amountTypeAsString:(int)arg1;
- (int)StringAsAmountType:(id)arg1;

@end
