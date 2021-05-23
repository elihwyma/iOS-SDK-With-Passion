/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, PKPaymentCredential;

@interface PKPaymentEligibilityRequest : PKPaymentWebServiceRequest

{
    PKPaymentCredential *_paymentCredential;
    NSString *_productIdentifier;
    long long _cardholderNameInputMethod;
    long long _primaryAccountNumberInputMethod;
    long long _expirationInputMethod;
    NSString *_issuerIdentifier;
    NSString *_hostApplicationIdentifier;
    NSString *_hostApplicationVersion;
    NSData *_FPInfo;
    NSString *_encryptionVersion;
    NSString *_cardholderName;
    NSString *_primaryAccountNumber;
    NSString *_expiration;
    NSData *_encryptedCardData;
    NSData *_publicKeyHash;
    NSData *_ephemeralPublicKey;
    NSData *_wrappedKey;
    NSString *_nonce;
    long long _source;
    NSString *_referrerIdentifier;
    NSString *_passOwnershipToken;
}

@property (copy, nonatomic) NSString *passOwnershipToken;
@property (retain, nonatomic) PKPaymentCredential *paymentCredential;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) long long cardholderNameInputMethod;
@property (nonatomic) long long primaryAccountNumberInputMethod;
@property (nonatomic) long long expirationInputMethod;
@property (copy, nonatomic) NSString *issuerIdentifier;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (copy, nonatomic) NSString *hostApplicationVersion;
@property (copy, nonatomic) NSData *FPInfo;
@property (copy, nonatomic) NSString *encryptionVersion;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSData *encryptedCardData;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSData *wrappedKey;
@property (copy, nonatomic) NSString *nonce;
@property (nonatomic, readonly) long long source;
@property (copy, nonatomic) NSString *referrerIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(long long)arg1;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)initWithPaymentCredential:(id)arg1;
- (_Bool)requiresNonce;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(_Bool)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (unsigned long long)_requestHTTPMethod;

@end
