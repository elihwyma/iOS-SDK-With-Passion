/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentProvisioningMethodMetadataRequest : PKPaymentWebServiceRequest

{
    NSString *_productIdentifier;
    NSString *_provisioningMethod;
}

@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *provisioningMethod;

- (id)initWithProductIdentifier:(id)arg1 provisioningMethod:(id)arg2;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
