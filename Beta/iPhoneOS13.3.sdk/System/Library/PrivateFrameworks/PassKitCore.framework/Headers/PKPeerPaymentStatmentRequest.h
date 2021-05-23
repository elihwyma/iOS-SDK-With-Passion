/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentStatmentRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_emailAddress;
}

@property (copy, nonatomic) NSString *emailAddress;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end
