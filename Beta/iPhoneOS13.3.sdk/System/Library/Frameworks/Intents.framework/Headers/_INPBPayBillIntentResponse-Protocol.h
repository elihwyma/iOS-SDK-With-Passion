/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBBillDetailsValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue, _INPBString;

@protocol _INPBPayBillIntentResponse <Swift>

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

@end
