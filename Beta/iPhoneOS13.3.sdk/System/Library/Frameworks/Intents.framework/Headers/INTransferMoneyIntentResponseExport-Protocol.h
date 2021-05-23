/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INCurrencyAmount, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@protocol INTransferMoneyIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) INPaymentAccount *fromAccount;
@property (copy, nonatomic) INPaymentAccount *toAccount;
@property (copy, nonatomic) INPaymentAmount *transactionAmount;
@property (copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property (copy, nonatomic) NSString *transactionNote;
@property (copy, nonatomic) INCurrencyAmount *transferFee;

@end
