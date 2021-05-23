/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBBillPayeeValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBIntentMetadata, _INPBPaymentAmountValue, _INPBString;

@protocol _INPBPayBillIntent <Swift>

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

- (unsigned short)billTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsBillType: /* Error: Ran out of types for this method. */;

@end
