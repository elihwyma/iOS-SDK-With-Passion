/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBIntentMetadata, _INPBPaymentAmountValue, _INPBString;

@interface _INPBPayBillIntent : PBCodable <Swift>

{
    struct {
        unsigned int billType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _billType;
    _INPBBillPayeeValue *_billPayee;
    _INPBDateTimeRange *_dueDate;
    _INPBFinancialAccountValue *_fromAccount;
    _INPBIntentMetadata *_intentMetadata;
    _INPBPaymentAmountValue *_transactionAmount;
    _INPBString *_transactionNote;
    _INPBDateTimeRange *_transactionScheduledDate;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (nonatomic, readonly) _Bool hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) _Bool hasBillType;
@property (retain, nonatomic) _INPBDateTimeRange *dueDate;
@property (nonatomic, readonly) _Bool hasDueDate;
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) _Bool hasFromAccount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
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
- (id)billTypeAsString:(int)arg1;
- (int)StringAsBillType:(id)arg1;

@end
