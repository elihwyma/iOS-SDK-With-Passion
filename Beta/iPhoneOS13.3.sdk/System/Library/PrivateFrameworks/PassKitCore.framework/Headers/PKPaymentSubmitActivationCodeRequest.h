/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, PKPaymentPass;

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest

{
    PKPaymentPass *_pass;
    NSString *_verificationCode;
    NSData *_verificationData;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (copy, nonatomic) NSString *verificationCode;
@property (copy, nonatomic) NSData *verificationData;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
