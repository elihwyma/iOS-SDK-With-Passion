/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INBillPayee, INDateComponentsRange;

@protocol INSearchForBillsIntentExport <Swift>

@property (copy, nonatomic) INBillPayee *billPayee;
@property (copy, nonatomic) INDateComponentsRange *paymentDateRange;
@property (nonatomic) long long billType;
@property (nonatomic) long long status;
@property (copy, nonatomic) INDateComponentsRange *dueDateRange;

- (unsigned short)init;

@end
