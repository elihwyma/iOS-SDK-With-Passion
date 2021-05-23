/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INBillDetails, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@protocol INPayBillIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) INPaymentAccount *fromAccount;
@property (copy, nonatomic) INBillDetails *billDetails;
@property (copy, nonatomic) INPaymentAmount *transactionAmount;
@property (copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property (copy, nonatomic) NSString *transactionNote;

@end
