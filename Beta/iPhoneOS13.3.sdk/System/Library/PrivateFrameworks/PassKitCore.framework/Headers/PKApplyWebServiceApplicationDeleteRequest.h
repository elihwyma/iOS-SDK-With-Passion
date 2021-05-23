/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSURL;

@interface PKApplyWebServiceApplicationDeleteRequest : PKApplyWebServiceRequest

{
    NSString *_applicationIdentifier;
    NSURL *_baseURL;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSURL *baseURL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
