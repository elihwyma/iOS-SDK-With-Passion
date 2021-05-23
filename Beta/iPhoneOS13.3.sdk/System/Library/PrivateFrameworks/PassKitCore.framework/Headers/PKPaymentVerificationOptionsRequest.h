/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentPass;

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest

{
    NSString *_stepIdentifier;
    PKPaymentPass *_pass;
}

@property (copy, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) PKPaymentPass *pass;

+ (id)requestWithPass:(id)arg1;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
