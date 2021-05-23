/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INBillPayee, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@protocol INPayBillIntentExport <Swift>

@property (copy, nonatomic) INBillPayee *billPayee;
@property (copy, nonatomic) INPaymentAccount *fromAccount;
@property (copy, nonatomic) INPaymentAmount *transactionAmount;
@property (copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property (copy, nonatomic) NSString *transactionNote;
@property (nonatomic) long long billType;
@property (copy, nonatomic) INDateComponentsRange *dueDate;

- (unsigned short)init;

@end
