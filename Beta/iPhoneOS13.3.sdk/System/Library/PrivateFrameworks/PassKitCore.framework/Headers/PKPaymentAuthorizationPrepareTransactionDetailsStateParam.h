/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSDecimalNumber, NSString, PKPaymentMerchantSession;

@interface PKPaymentAuthorizationPrepareTransactionDetailsStateParam : PKPaymentAuthorizationStateParam

{
    PKPaymentMerchantSession *_merchantSession;
    NSString *_secureElementIdentifier;
    NSDecimalNumber *_transactionAmount;
    NSString *_currencyCode;
}

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (copy, nonatomic) NSString *currencyCode;

+ (id)paramWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 transactionAmount:(id)arg3 currencyCode:(id)arg4;

- (id)description;

@end
