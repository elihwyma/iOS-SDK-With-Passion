/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentStatusRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_paymentIdentifier;
}

@property (copy, nonatomic) NSString *paymentIdentifier;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end
