/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSDecimalNumber, NSString, PKPaymentMerchantSession;

@interface PKPaymentPrepareTransactionDetailsRequest : PKPaymentWebServiceRequest

{
    PKPaymentMerchantSession *_merchantSession;
    NSString *_secureElementIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
}

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;

+ (id)serverSupportedLanguages;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4;

@end
