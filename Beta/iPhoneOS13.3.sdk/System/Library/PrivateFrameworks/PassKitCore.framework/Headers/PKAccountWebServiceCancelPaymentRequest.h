/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceCancelPaymentRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSString *_paymentReferenceIdentifier;
    NSURL *_baseURL;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *paymentReferenceIdentifier;
@property (retain, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
