/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSArray, NSDecimalNumber, NSString, NSURL;

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest

{
    _Bool _isInstallment;
    NSString *_applicationIdentifier;
    unsigned long long _featureIdentifier;
    NSArray *_certificates;
    NSURL *_baseURL;
    NSString *_coreIDVNextStepToken;
    NSString *_previousContextIdentifier;
    NSString *_actionIdentifier;
    NSDecimalNumber *_installmentAmount;
    NSString *_installmentCurrencyCode;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *coreIDVNextStepToken;
@property (copy, nonatomic) NSString *previousContextIdentifier;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (nonatomic) _Bool isInstallment;
@property (retain, nonatomic) NSDecimalNumber *installmentAmount;
@property (copy, nonatomic) NSString *installmentCurrencyCode;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
