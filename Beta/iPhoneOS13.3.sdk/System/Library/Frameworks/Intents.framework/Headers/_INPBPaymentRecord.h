/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContact, _INPBCurrencyAmount, _INPBPaymentMethodValue, _INPBString;

@interface _INPBPaymentRecord : PBCodable <Swift>

{
    struct {
        unsigned int status:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _status;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBCurrencyAmount *_feeAmount;
    _INPBString *_note;
    _INPBContact *_payee;
    _INPBContact *_payer;
    _INPBPaymentMethodValue *_paymentMethod;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@property (nonatomic, readonly) _Bool hasCurrencyAmount;
@property (retain, nonatomic) _INPBCurrencyAmount *feeAmount;
@property (nonatomic, readonly) _Bool hasFeeAmount;
@property (retain, nonatomic) _INPBString *note;
@property (nonatomic, readonly) _Bool hasNote;
@property (retain, nonatomic) _INPBContact *payee;
@property (nonatomic, readonly) _Bool hasPayee;
@property (retain, nonatomic) _INPBContact *payer;
@property (nonatomic, readonly) _Bool hasPayer;
@property (retain, nonatomic) _INPBPaymentMethodValue *paymentMethod;
@property (nonatomic, readonly) _Bool hasPaymentMethod;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;

@end
