/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentAcceptTermsRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_termsIdentifier;
}

@property (copy, nonatomic) NSString *termsIdentifier;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3;

@end
