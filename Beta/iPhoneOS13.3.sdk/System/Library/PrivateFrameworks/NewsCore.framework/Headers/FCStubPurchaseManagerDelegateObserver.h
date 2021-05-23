/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCStubPurchaseManagerDelegateObserver : NSObject

{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _failedWithInvalidReceiptBlock;
}

@property (copy, nonatomic) CDUnknownBlockType successBlock;
@property (copy, nonatomic) CDUnknownBlockType failedBlock;
@property (copy, nonatomic) CDUnknownBlockType failedWithInvalidReceiptBlock;

- (void)purchaseSuccessWithProductID:(id)arg1 purchaseReceipt:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4;
- (void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4;
- (void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2;
- (void)addPurchaseSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addPurchaseFailedBlock:(CDUnknownBlockType)arg1;
- (void)addPurchaseFailedWithInvalidReceiptBlock:(CDUnknownBlockType)arg1;

@end
