/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCBundleSubscription;

@protocol FCEntitlementsOverrideProviderType;

@protocol FCBundleSubscriptionManagerType <Swift>

@property (nonatomic, readonly) FCBundleSubscription *cachedSubscription;
@property (retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshBundleSubscriptionWithCachePolicy:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)bundleSubscriptionLookupEntry;
- (unsigned short)renewalNoticeShownWithPurchaseID: /* Error: Ran out of types for this method. */;
- (unsigned short)prewarmBundleTagIDsWithPurchaseID: /* Error: Ran out of types for this method. */;
- (unsigned short)clearBundleSubscription;
- (unsigned short)forceExpireBundleSubscriptionBasedOnInternalSettings;

@end
