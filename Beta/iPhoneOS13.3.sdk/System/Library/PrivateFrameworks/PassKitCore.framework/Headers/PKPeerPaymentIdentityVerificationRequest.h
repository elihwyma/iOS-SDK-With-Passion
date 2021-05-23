/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSArray, NSString;

@interface PKPeerPaymentIdentityVerificationRequest : PKPeerPaymentWebServiceRequest

{
    _Bool _devSigned;
    NSArray *_certificates;
    NSString *_prerequisiteIdentifier;
}

@property (copy, nonatomic) NSArray *certificates;
@property (nonatomic) _Bool devSigned;
@property (copy, nonatomic) NSString *prerequisiteIdentifier;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end
