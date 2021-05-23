/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@protocol FCBundleSubscriptionProviderType, FCPurchaseProviderType;

@protocol FCPaidAccessCheckerType

@property (nonatomic, readonly) id <FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (nonatomic, readonly) id <FCPurchaseProviderType> purchaseProvider;

- (unsigned short)prepareForUseWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)canGetAccessToItemPaid:bundlePaid:channel: /* Error: Ran out of types for this method. */;
- (unsigned short)canGetSubscriptionToChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)canGetBundleSubscriptionToChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)isPreparedForUse;

@end
