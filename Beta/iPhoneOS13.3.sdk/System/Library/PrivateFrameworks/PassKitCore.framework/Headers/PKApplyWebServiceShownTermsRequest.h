/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSURL;

@interface PKApplyWebServiceShownTermsRequest : PKApplyWebServiceRequest

{
    NSString *_applicationIdentifier;
    NSString *_termsIdentifier;
    NSString *_termsType;
    NSURL *_baseURL;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *termsType;
@property (retain, nonatomic) NSURL *baseURL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
