/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, NSUUID;

@interface PKPeerPaymentSubmitDeviceScoreIdentifiersRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_paymentIdentifier;
    NSUUID *_requestDeviceScoreIdentifier;
    NSUUID *_sendDeviceScoreIdentifier;
}

@property (copy, nonatomic) NSString *paymentIdentifier;
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier;
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end
