/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBCurrencyAmountValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue;

@protocol _INPBTransferMoneyIntentResponse <Swift>

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

@end
