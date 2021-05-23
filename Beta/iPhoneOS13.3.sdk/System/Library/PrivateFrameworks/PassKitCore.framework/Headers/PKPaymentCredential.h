/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, PKPaymentEligibilityResponse, PKPaymentRequirementsResponse;

@interface PKPaymentCredential : NSObject <Swift>

{
    long long _credentialType;
    NSString *_sanitizedPrimaryAccountNumber;
    NSString *_expiration;
    NSString *_longDescription;
    long long _cardType;
    PKPaymentRequirementsResponse *_requirementsResponse;
    PKPaymentEligibilityResponse *_eligibilityResponse;
}

@property (nonatomic) long long credentialType;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSString *longDescription;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;

+ (_Bool)supportsSecureCoding;
+ (id)fakeRemoteCredentials;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)remoteCredential;
- (_Bool)isRemoteCredential;
- (_Bool)isLocalPassCredential;
- (_Bool)isPeerPaymentCredential;
- (_Bool)isContactlessProductCredential;
- (_Bool)isDigitalIssuanceProductCredential;
- (_Bool)isPurchasedProductCredential;
- (_Bool)isAccountCredential;
- (id)localPassCredential;
- (id)peerPaymentCredential;
- (id)contactlessProductCredential;
- (id)digitalIssuanceProductCredential;
- (id)purchasedProductCredential;
- (id)accountCredential;

@end
