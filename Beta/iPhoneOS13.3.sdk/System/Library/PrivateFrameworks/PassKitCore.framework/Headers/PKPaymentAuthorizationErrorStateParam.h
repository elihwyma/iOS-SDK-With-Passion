/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam

{
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;

+ (id)paramWithError:(id)arg1;

- (id)description;

@end
