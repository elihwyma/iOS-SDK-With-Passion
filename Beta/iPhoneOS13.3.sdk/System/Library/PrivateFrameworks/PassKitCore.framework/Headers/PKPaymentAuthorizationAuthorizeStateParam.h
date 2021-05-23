/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam

{
    PKAuthenticatorEvaluationResponse *_evaluationResponse;
    NSData *_nonceData;
    NSData *_credential;
}

@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse;
@property (retain, nonatomic) NSData *nonceData;

+ (id)paramWithCredential:(id)arg1;
+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;
+ (id)paramWithNonceParam:(id)arg1 nonce:(id)arg2;

- (id)description;

@end
