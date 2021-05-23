/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@protocol FCBundleSubscriptionProviderType, FCCoreConfigurationManager, FCPurchaseProviderType;

@interface FCPaidAccessChecker : NSObject

{
    id <FCPurchaseProviderType> _purchaseProvider;
    id <FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property (nonatomic, readonly) id <FCCoreConfigurationManager> configurationManager;
@property (nonatomic, readonly) id <FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (nonatomic, readonly) id <FCPurchaseProviderType> purchaseProvider;

- (void)prepareForUseWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPurchaseProvider:(id)arg1 bundleSubscriptionProvider:(id)arg2 configurationManager:(id)arg3;
- (_Bool)canGetAccessToItemPaid:(_Bool)arg1 bundlePaid:(_Bool)arg2 channel:(id)arg3;
- (_Bool)_canGetALaCarteSubscriptionToChannel:(id)arg1;
- (_Bool)_canGetBundleSubscriptionToChannel:(id)arg1;
- (_Bool)canGetSubscriptionToChannel:(id)arg1;
- (_Bool)canGetBundleSubscriptionToChannel:(id)arg1;
- (_Bool)isPreparedForUse;

@end
