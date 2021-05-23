/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKWrappedPayment;

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam

{
    PKWrappedPayment *_wrappedPayment;
    NSData *_nonceData;
    NSData *_credential;
}

@property (retain, nonatomic) PKWrappedPayment *wrappedPayment;
@property (retain, nonatomic) NSData *nonceData;
@property (retain, nonatomic) NSData *credential;

+ (id)paramWithWrappedPayment:(id)arg1 nonce:(id)arg2 credential:(id)arg3;

- (id)description;

@end
