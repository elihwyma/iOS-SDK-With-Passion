/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationSuccessStateParam : PKPaymentAuthorizationStateParam

{
    PKPeerPaymentTransactionMetadata *_peerPaymentTransactionMetadata;
}

@property (retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata;

+ (id)paramWithPeerPaymentTransactionMetadata:(id)arg1;

- (id)description;

@end
