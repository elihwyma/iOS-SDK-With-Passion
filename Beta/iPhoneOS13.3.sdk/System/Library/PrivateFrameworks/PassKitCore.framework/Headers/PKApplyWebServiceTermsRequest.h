/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceRequest.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber, NSString, NSURL, PKPaymentDeviceMetadata;

@interface PKApplyWebServiceTermsRequest : PKApplyWebServiceRequest <Swift>

{
    _Bool _termsAccepted;
    _Bool _isInstallment;
    NSString *_applicationIdentifier;
    NSString *_applicationTermsIdentifier;
    NSString *_offerTermsIdentifier;
    NSURL *_baseURL;
    PKPaymentDeviceMetadata *_deviceMetadata;
    NSDecimalNumber *_installmentAmount;
    NSString *_installmentCurrencyCode;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *applicationTermsIdentifier;
@property (copy, nonatomic) NSString *offerTermsIdentifier;
@property (nonatomic) _Bool termsAccepted;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic) _Bool isInstallment;
@property (retain, nonatomic) NSDecimalNumber *installmentAmount;
@property (copy, nonatomic) NSString *installmentCurrencyCode;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
