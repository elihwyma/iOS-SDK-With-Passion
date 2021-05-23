/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

#import <iCloudQuotaUI/ICQViewController.h>

@class _ICQUpgradeOfferPageSpecification;

@interface ICQUpgradeOfferViewController : ICQViewController

@property (nonatomic, readonly) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;
@property (nonatomic, getter=isCancelEnabled) _Bool cancelEnabled;

+ (_Bool)supportsPageClassIdentifier:(id)arg1;

- (void)loadView;
- (void)cancel:(id)arg1;
- (id)initWithPageSpecification:(id)arg1;
- (id)initWithUpgradeOfferPageSpecification:(id)arg1;

@end
