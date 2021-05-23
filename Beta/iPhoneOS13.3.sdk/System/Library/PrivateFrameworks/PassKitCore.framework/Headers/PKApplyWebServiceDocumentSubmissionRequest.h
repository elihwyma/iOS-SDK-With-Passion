/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSArray, NSData, NSString, NSURL;

@interface PKApplyWebServiceDocumentSubmissionRequest : PKApplyWebServiceRequest

{
    NSString *_applicationIdentifier;
    unsigned long long _featureIdentifier;
    NSURL *_baseURL;
    NSData *_frontImageData;
    NSData *_backImageData;
    NSString *_documentCountryCode;
    unsigned long long _documentType;
    NSArray *_certificates;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *frontImageData;
@property (copy, nonatomic) NSData *backImageData;
@property (copy, nonatomic) NSString *documentCountryCode;
@property (nonatomic) unsigned long long documentType;
@property (copy, nonatomic) NSArray *certificates;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
