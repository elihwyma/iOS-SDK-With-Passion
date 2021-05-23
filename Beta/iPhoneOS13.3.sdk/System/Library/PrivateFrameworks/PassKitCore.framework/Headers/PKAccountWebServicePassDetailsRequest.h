/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKPaymentDeviceMetadata;

@interface PKAccountWebServicePassDetailsRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    PKPaymentDeviceMetadata *_deviceMetadata;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2;

@end
