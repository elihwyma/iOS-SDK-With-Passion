/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentPass, PKVerificationChannel;

@interface PKPaymentVerificationUpdateRequest : PKPaymentWebServiceRequest

{
    NSString *_stepIdentifier;
    PKPaymentPass *_pass;
    PKVerificationChannel *_channel;
}

@property (copy, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKVerificationChannel *channel;

- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 deviceData:(id)arg4 webService:(id)arg5 certChain:(id)arg6 devSigned:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;

@end
