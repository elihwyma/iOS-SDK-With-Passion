//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

#import <PassKitCore/PKAccountWebServiceApplePayTrustProtocol-Protocol.h>

@class CNPostalAddress, NSData, NSDecimalNumber, NSString, NSURL, PKApplePayTrustHashResponse;

@interface PKAccountWebServiceInstallmentAuthorizationRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol>
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

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CNPostalAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(copy, nonatomic) NSString *installmentGroupIdentifier; // @synthesize installmentGroupIdentifier=_installmentGroupIdentifier;
@property(retain, nonatomic) NSDecimalNumber *authorizationAmount; // @synthesize authorizationAmount=_authorizationAmount;
@property(copy, nonatomic) NSString *bindToken; // @synthesize bindToken=_bindToken;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(retain, nonatomic) PKApplePayTrustHashResponse *hashResponse; // @synthesize hashResponse;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manifestHashWithReferenceIdentifier:(id)arg1;
- (Class)signatureResponseClass;
- (id)endpointComponents;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
