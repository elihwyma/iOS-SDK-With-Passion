/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSURL;

@interface PKApplyWebServiceTermsDataRequest : PKApplyWebServiceRequest

{
    NSURL *_baseURL;
    unsigned long long _featureIdentifier;
    NSString *_applicationIdentifier;
    NSString *_termsIdentifier;
    NSString *_termsDataFormat;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *termsDataFormat;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
