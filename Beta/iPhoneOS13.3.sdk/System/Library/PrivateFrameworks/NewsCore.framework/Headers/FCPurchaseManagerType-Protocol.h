/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@protocol FCPurchaseFlowOverrideProviderType, FCPurchaseManagerDelegate;

@protocol FCPurchaseManagerType

@property (weak, nonatomic) id <FCPurchaseManagerDelegate> delegate;
@property (retain, nonatomic) id <FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider;

- (unsigned short)fetchPurchaseMetadataForPurchaseID:restorePurcase: /* Error: Ran out of types for this method. */;
- (unsigned short)startBundlePurchaseWithPurchase:error: /* Error: Ran out of types for this method. */;
- (unsigned short)startPurchaseWithTagID:purchase:webAccessOptIn:error: /* Error: Ran out of types for this method. */;
- (unsigned short)simulateSuccessfulPurchaseWithProductID:tagID:purchaseID: /* Error: Ran out of types for this method. */;
- (unsigned short)simulateFailurePurchaseWithProductID:transactionState:error: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticateAppleIDWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)isPurchaseOngoingForTagID: /* Error: Ran out of types for this method. */;
- (unsigned short)anyOngoingPurchases;

@end
