/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCPaymentTransactionObserver, NSMutableDictionary, NSString;

@protocol FCPaymentTransactionManagerDelegate;

@interface FCPaymentTransactionManager : NSObject

{
    id <FCPaymentTransactionManagerDelegate> delegate;
    FCPaymentTransactionObserver *_paymentTransactionObserver;
    NSMutableDictionary *_paymentQueueByProductID;
}

@property (retain, nonatomic) FCPaymentTransactionObserver *paymentTransactionObserver;
@property (retain, nonatomic) NSMutableDictionary *paymentQueueByProductID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FCPaymentTransactionManagerDelegate> delegate;

- (id)init;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1;
- (void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(_Bool)arg7 payment:(id)arg8;
- (id)createPaymentQueueWithProductID:(id)arg1 purchaseID:(id)arg2 webAccessOptIn:(_Bool)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5;
- (void)paymentTransactionObserver:(id)arg1 didFinishPurchaseTransactionWithProductID:(id)arg2;
- (void)paymentTransactionObserver:(id)arg1 didFailPurchaseTransactionWithTransaction:(id)arg2;

@end
