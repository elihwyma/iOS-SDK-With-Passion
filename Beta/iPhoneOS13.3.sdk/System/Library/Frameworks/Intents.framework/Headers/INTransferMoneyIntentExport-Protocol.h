/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@protocol INTransferMoneyIntentExport <Swift>

@property (copy, nonatomic) INPaymentAccount *fromAccount;
@property (copy, nonatomic) INPaymentAccount *toAccount;
@property (copy, nonatomic) INPaymentAmount *transactionAmount;
@property (copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property (copy, nonatomic) NSString *transactionNote;

- (unsigned short)init;

@end
