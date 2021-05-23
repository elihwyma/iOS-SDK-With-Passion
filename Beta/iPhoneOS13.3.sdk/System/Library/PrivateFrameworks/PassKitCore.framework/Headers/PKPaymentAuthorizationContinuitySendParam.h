/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKRemotePaymentRequest;

@interface PKPaymentAuthorizationContinuitySendParam : PKPaymentAuthorizationStateParam

{
    PKRemotePaymentRequest *_remotePaymentRequest;
}

@property (retain, nonatomic) PKRemotePaymentRequest *remotePaymentRequest;

+ (id)paramWithRemotePaymentRequest:(id)arg1;

@end
