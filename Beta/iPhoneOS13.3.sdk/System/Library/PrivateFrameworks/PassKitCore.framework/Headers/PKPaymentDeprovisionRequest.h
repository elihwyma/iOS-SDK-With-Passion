/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass;

@interface PKPaymentDeprovisionRequest : PKPaymentWebServiceRequest

{
    PKPaymentPass *_pass;
}

@property (retain, nonatomic) PKPaymentPass *pass;

- (id)initWithPaymentPass:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
