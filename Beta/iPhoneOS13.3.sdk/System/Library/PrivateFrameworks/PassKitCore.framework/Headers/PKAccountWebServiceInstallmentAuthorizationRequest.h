/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class CNPostalAddress, NSData, NSDecimalNumber, NSString, NSURL, PKApplePayTrustHashResponse;

@interface PKAccountWebServiceInstallmentAuthorizationRequest : PKAccountWebServiceRequest

{
    NSURL *baseURL;
    PKApplePayTrustHashResponse *hashResponse;
    NSData *_publicKeyHash;
    NSString *_accountIdentifier;
    NSString *_bindToken;
    NSDecimalNumber *_authorizationAmount;
    NSString *_installmentGroupIdentifier;
    CNPostalAddress *_shippingAddress;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *bindToken;
@property (retain, nonatomic) NSDecimalNumber *authorizationAmount;
@property (copy, nonatomic) NSString *installmentGroupIdentifier;
@property (retain, nonatomic) CNPostalAddress *shippingAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *publicKeyHash;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)manifestHashWithReferenceIdentifier:(id)arg1;
- (Class)signatureResponseClass;
- (id)endpointComponents;

@end
