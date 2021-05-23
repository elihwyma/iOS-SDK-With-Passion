/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

#import <UIKit/UIButton.h>

@class ICQLink, ICQOffer;

@interface ICQUpgradeButton : UIButton

{
    ICQOffer *_offer;
    ICQLink *_link;
}

@property (retain, nonatomic) ICQOffer *offer;
@property (nonatomic, readonly) ICQLink *link;

+ (id)buttonWithType:(long long)arg1;
+ (_Bool)shouldShowForOffer:(id)arg1;
+ (id)spaceArrowAttributedStringWithBaseAttributes:(id)arg1;
+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 buttonLinkAttributes:(id)arg3 links:(id)arg4;
+ (id)upgradeButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)buttonAttributes;
- (id)buttonLinkAttributes;

@end
