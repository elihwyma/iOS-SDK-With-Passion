/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKActivityEventTransaction.h>

@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction

{
    PKPaymentTransaction *_relatedTopUpFundingSourceWithdrawlTransaction;
    PKPaymentTransaction *_relatedTopUpPeerPaymentAccountDepositTransaction;
}

@property (nonatomic, readonly) PKPaymentTransaction *relatedTopUpFundingSourceWithdrawlTransaction;
@property (nonatomic, readonly) PKPaymentTransaction *relatedTopUpPeerPaymentAccountDepositTransaction;

- (unsigned long long)hash;
- (id)eventType;
- (_Bool)isEqualToActivityEvent:(id)arg1;
- (id)initWithTransaction:(id)arg1 relatedTopUpWithdrawlTransaction:(id)arg2 relatedTopUpDepositTransaction:(id)arg3 unread:(_Bool)arg4;

@end
