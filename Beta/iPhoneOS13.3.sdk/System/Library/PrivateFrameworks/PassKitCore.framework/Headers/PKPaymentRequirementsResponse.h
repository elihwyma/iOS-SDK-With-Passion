/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSString, NSURL;

@interface PKPaymentRequirementsResponse

{
    long long _status;
    NSArray *_requiredPaymentSetupFields;
    NSString *_productIdentifier;
    NSArray *_possibleProducts;
    NSURL *_learnMoreURL;
    NSString *_nonce;
}

@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, readonly) NSArray *requiredPaymentSetupFields;
@property (copy, nonatomic, readonly) NSString *productIdentifier;
@property (copy, nonatomic, readonly) NSArray *possibleProducts;
@property (copy, nonatomic, readonly) NSURL *learnMoreURL;
@property (copy, nonatomic, readonly) NSString *nonce;

+ (_Bool)supportsSecureCoding;

- (id)initWithData:(id)arg1;
- (id)initWithProduct:(id)arg1;
- (id)initWithProvisioningMethodMetadata:(id)arg1;
- (id)initWithRemoteCredential:(id)arg1;

@end
