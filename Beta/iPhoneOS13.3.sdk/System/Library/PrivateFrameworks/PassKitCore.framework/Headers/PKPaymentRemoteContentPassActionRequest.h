/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest

{
    PKPaymentPass *_pass;
    PKPaymentPassAction *_action;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPaymentPassAction *action;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
