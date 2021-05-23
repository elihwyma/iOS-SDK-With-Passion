/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBCurrencyAmountValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue;

@interface _INPBTransferMoneyIntentResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBFinancialAccountValue *_fromAccount;
    _INPBFinancialAccountValue *_toAccount;
    _INPBPaymentAmountValue *_transactionAmount;
    NSString *_transactionNote;
    _INPBDateTimeRange *_transactionScheduledDate;
    _INPBCurrencyAmountValue *_transferFee;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) _Bool hasFromAccount;
@property (retain, nonatomic) _INPBFinancialAccountValue *toAccount;
@property (nonatomic, readonly) _Bool hasToAccount;
@property (retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property (nonatomic, readonly) _Bool hasTransactionAmount;
@property (copy, nonatomic) NSString *transactionNote;
@property (nonatomic, readonly) _Bool hasTransactionNote;
@property (retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property (nonatomic, readonly) _Bool hasTransactionScheduledDate;
@property (retain, nonatomic) _INPBCurrencyAmountValue *transferFee;
@property (nonatomic, readonly) _Bool hasTransferFee;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
