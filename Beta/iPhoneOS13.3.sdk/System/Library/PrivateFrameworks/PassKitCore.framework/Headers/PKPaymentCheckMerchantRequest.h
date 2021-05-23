/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentCheckMerchantRequest : PKPaymentWebServiceRequest

{
    NSString *_merchantIdentifier;
    NSString *_domainName;
}

@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *domainName;

- (id)initWithMerchantIdentifier:(id)arg1 domainName:(id)arg2;
- (id)_urlRequestWithServiceURL:(id)arg1;

@end
