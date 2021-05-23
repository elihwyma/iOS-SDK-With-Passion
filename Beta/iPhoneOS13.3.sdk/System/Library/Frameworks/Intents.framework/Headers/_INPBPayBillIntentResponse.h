/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBBillDetailsValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue, _INPBString;

@interface _INPBPayBillIntentResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBBillDetailsValue *_billDetails;
    _INPBFinancialAccountValue *_fromAccount;
    _INPBPaymentAmountValue *_transactionAmount;
    _INPBString *_transactionNote;
    _INPBDateTimeRange *_transactionScheduledDate;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBBillDetailsValue *billDetails;
@property (nonatomic, readonly) _Bool hasBillDetails;
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) _Bool hasFromAccount;
@property (retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property (nonatomic, readonly) _Bool hasTransactionAmount;
@property (retain, nonatomic) _INPBString *transactionNote;
@property (nonatomic, readonly) _Bool hasTransactionNote;
@property (retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property (nonatomic, readonly) _Bool hasTransactionScheduledDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
