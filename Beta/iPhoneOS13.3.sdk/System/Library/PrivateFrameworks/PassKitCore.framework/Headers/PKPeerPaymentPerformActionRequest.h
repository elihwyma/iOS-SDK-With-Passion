/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentPerformActionRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_paymentIdentifier;
    NSString *_action;
}

@property (copy, nonatomic) NSString *paymentIdentifier;
@property (copy, nonatomic) NSString *action;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end
