/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@protocol FCPurchaseManagerDelegate

- (unsigned short)purchaseSuccessWithProductID:purchaseReceipt:chargeCurrencyCode:ongoingPurchaseEntry: /* Error: Ran out of types for this method. */;
- (unsigned short)purchaseFailedWithProductID:transactionState:transactionError:ongoingPurchaseEntry: /* Error: Ran out of types for this method. */;
- (unsigned short)purchaseFailedForInvalidPurchaseReceiptWithProductID:ongoingPurchaseEntry: /* Error: Ran out of types for this method. */;

@end
