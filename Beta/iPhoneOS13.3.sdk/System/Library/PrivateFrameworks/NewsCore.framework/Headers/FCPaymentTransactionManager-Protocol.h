/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@protocol FCPaymentTransactionManagerDelegate;

@protocol FCPaymentTransactionManager

@property (weak, nonatomic) id <FCPaymentTransactionManagerDelegate> delegate;

- (unsigned short)registerOngoingPurchaseTransactionsWithEntry: /* Error: Ran out of types for this method. */;
- (unsigned short)startPurchaseWithTagID:productID:purchaseID:appAdamID:storeExternalVersion:price:webAccessOptIn:payment: /* Error: Ran out of types for this method. */;

@end
