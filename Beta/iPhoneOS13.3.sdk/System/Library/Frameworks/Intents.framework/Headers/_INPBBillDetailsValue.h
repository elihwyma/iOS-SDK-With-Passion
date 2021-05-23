/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata;

@interface _INPBBillDetailsValue : PBCodable <Swift>

{
    CDStruct_c8e9def3 _has;
    _Bool __encodeLegacyGloryData;
    int _billType;
    int _status;
    _INPBCurrencyAmountValue *_amountDue;
    _INPBBillPayeeValue *_billPayee;
    _INPBDateTime *_dueDate;
    _INPBCurrencyAmountValue *_lateFee;
    _INPBCurrencyAmountValue *_minimumDue;
    _INPBDateTime *_paymentDate;
    _INPBValueMetadata *_valueMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBCurrencyAmountValue *amountDue;
@property (nonatomic, readonly) _Bool hasAmountDue;
@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (nonatomic, readonly) _Bool hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) _Bool hasBillType;
@property (retain, nonatomic) _INPBDateTime *dueDate;
@property (nonatomic, readonly) _Bool hasDueDate;
@property (retain, nonatomic) _INPBCurrencyAmountValue *lateFee;
@property (nonatomic, readonly) _Bool hasLateFee;
@property (retain, nonatomic) _INPBCurrencyAmountValue *minimumDue;
@property (nonatomic, readonly) _Bool hasMinimumDue;
@property (retain, nonatomic) _INPBDateTime *paymentDate;
@property (nonatomic, readonly) _Bool hasPaymentDate;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;
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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)billTypeAsString:(int)arg1;
- (int)StringAsBillType:(id)arg1;

@end
