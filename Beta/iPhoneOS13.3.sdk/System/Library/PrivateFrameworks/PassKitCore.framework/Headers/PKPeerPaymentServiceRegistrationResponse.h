/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse

{
    NSString *_deviceIdentifier;
    NSString *_peerPaymentServicesPushTopic;
    NSURL *_peerPaymentServiceURL;
}

@property (copy, nonatomic, readonly) NSString *deviceIdentifier;
@property (copy, nonatomic, readonly) NSString *peerPaymentServicesPushTopic;
@property (copy, nonatomic, readonly) NSURL *peerPaymentServiceURL;

- (id)initWithData:(id)arg1;

@end
