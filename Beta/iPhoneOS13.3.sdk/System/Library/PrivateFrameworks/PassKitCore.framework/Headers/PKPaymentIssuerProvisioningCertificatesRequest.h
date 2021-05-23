/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentIssuerProvisioningCertificatesRequest : PKPaymentWebServiceRequest

{
    NSString *_encryptionScheme;
}

- (id)init;
- (id)initWithEncryptionScheme:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
