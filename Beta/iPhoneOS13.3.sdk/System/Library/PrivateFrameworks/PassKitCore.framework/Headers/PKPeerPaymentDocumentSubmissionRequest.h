/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSArray, NSData, NSString;

@interface PKPeerPaymentDocumentSubmissionRequest : PKPeerPaymentWebServiceRequest

{
    _Bool _devSigned;
    NSData *_frontImageData;
    NSData *_backImageData;
    NSString *_documentCountryCode;
    unsigned long long _documentType;
    NSArray *_certificates;
}

@property (copy, nonatomic) NSData *frontImageData;
@property (copy, nonatomic) NSData *backImageData;
@property (copy, nonatomic) NSString *documentCountryCode;
@property (nonatomic) unsigned long long documentType;
@property (copy, nonatomic) NSArray *certificates;
@property (nonatomic) _Bool devSigned;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end
