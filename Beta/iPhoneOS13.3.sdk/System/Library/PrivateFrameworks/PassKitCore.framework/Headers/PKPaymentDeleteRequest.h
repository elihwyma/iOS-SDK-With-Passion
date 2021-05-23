/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass;

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest

{
    PKPaymentPass *_pass;
}

@property (retain, nonatomic) PKPaymentPass *pass;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPaymentPass:(id)arg1;

@end
