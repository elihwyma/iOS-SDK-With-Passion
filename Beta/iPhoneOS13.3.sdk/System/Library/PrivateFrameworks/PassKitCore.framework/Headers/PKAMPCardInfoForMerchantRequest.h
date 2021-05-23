/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKAMPCardInfoForMerchantRequest : PKPaymentWebServiceRequest

{
    NSString *_merchantIdentifier;
}

@property (copy, nonatomic) NSString *merchantIdentifier;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithMerchantIdentifier:(id)arg1;

@end
