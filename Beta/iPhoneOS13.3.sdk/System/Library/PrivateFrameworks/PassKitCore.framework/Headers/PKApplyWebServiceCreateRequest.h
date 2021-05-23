/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSDecimalNumber, NSString;

@interface PKApplyWebServiceCreateRequest : PKApplyWebServiceRequest

{
    _Bool _isInstallment;
    unsigned long long _featureIdentifier;
    NSDecimalNumber *_installmentAmount;
    NSString *_installmentCurrencyCode;
}

@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic) _Bool isInstallment;
@property (retain, nonatomic) NSDecimalNumber *installmentAmount;
@property (copy, nonatomic) NSString *installmentCurrencyCode;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end
