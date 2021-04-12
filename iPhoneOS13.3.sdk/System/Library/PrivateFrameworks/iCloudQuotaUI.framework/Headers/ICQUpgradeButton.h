//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class ICQLink, ICQOffer;

@interface ICQUpgradeButton : UIButton
{
    ICQOffer *_offer;
    ICQLink *_link;
}

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 buttonLinkAttributes:(id)arg3 links:(id)arg4;
+ (id)spaceArrowAttributedStringWithBaseAttributes:(id)arg1;
+ (id)upgradeButton;
+ (id)buttonWithType:(long long)arg1;
+ (BOOL)shouldShowForOffer:(id)arg1;
@property(readonly, nonatomic) ICQLink *link; // @synthesize link=_link;
// - (void).cxx_destruct;
- (id)buttonLinkAttributes;
- (id)buttonAttributes;
@property(retain, nonatomic) ICQOffer *offer;
- (id)initWithFrame:(CGRect)arg1;

@end

