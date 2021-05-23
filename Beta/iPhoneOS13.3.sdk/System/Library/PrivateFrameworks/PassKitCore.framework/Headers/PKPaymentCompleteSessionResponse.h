/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentRewrapResponseBase.h>

@class NSString;

@interface PKPaymentCompleteSessionResponse : PKPaymentRewrapResponseBase

{
    NSString *_retryNonce;
}

@property (copy, nonatomic, readonly) NSString *retryNonce;

@end
