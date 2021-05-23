/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString;

@interface PKApplyWebServiceFeatureTermsDataRequest : PKApplyWebServiceRequest

{
    unsigned long long _featureIdentifier;
    NSString *_termsIdentifier;
    NSString *_termsDataFormat;
}

@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *termsDataFormat;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end
