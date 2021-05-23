/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam

{
    NSData *_credential;
    PKAuthenticatorEvaluationResponse *_evaluationResponse;
}

@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse;

+ (id)paramWithCredential:(id)arg1;
+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;

- (id)description;

@end
