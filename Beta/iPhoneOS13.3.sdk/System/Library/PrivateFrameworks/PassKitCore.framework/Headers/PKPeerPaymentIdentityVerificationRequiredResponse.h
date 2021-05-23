/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString;

@interface PKPeerPaymentIdentityVerificationRequiredResponse : PKPeerPaymentWebServiceResponse

{
    NSString *_prerequisiteIdentifier;
}

@property (copy, nonatomic, readonly) NSString *prerequisiteIdentifier;

- (id)initWithData:(id)arg1;

@end
