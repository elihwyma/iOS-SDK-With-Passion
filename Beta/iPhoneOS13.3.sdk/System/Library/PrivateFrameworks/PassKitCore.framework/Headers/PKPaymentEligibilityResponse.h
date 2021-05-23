/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSURL;

@interface PKPaymentEligibilityResponse

{
    NSString *_identifier;
    long long _eligibilityStatus;
    long long _cardType;
    NSURL *_termsURL;
    NSString *_termsID;
    NSString *_applicationIdentifier;
    NSString *_region;
    NSString *_nonce;
    NSURL *_learnMoreURL;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long eligibilityStatus;
@property (nonatomic, readonly) long long cardType;
@property (copy, nonatomic, readonly) NSURL *termsURL;
@property (copy, nonatomic, readonly) NSString *termsID;
@property (copy, nonatomic, readonly) NSString *applicationIdentifier;
@property (copy, nonatomic, readonly) NSString *region;
@property (copy, nonatomic, readonly) NSString *nonce;
@property (copy, nonatomic, readonly) NSURL *learnMoreURL;

+ (_Bool)supportsSecureCoding;

- (id)initWithData:(id)arg1;

@end
