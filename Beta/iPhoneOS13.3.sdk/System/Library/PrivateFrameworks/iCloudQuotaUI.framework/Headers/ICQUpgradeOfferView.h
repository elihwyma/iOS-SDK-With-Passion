/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

#import <iCloudQuotaUI/ICQPageView.h>

#import <iCloudQuotaUI/Swift-Protocol.h>

@class ICQLink, NSArray, NSString, UIActivityIndicatorView, UIButton, UIColor, UIFont, UIImageView, UILabel, UILayoutGuide, UIScrollView, UIView, UIVisualEffectView, _ICQTextView, _ICQUpgradeOfferPageSpecification;

@protocol ICQPageDelegate;

@interface ICQUpgradeOfferView : ICQPageView <Swift>

{
    _ICQUpgradeOfferPageSpecification *_upgradeOfferPageSpecification;
    long long _upgradeMode;
    UIColor *_buttonTintColor;
    id <ICQPageDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    _ICQTextView *_messageView;
    _ICQTextView *_fineprintView;
    UIButton *_purchaseButton;
    UIButton *_purchase2Button;
    UIButton *_bottomButton;
    UIActivityIndicatorView *_spinner;
    ICQLink *_purchaseLink;
    ICQLink *_purchase2Link;
    ICQLink *_bottomLink;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_headerView;
    UIView *_footerView;
    UIView *_trayView;
    UIVisualEffectView *_blurBackdrop;
    UILayoutGuide *_scrollVisibleLayoutGuide;
    UILayoutGuide *_aboveSpinnerLayoutGuide;
    UILayoutGuide *_belowSpinnerLayoutGuide;
    NSArray *_activeConstraints;
}

@property (nonatomic, readonly) ICQLink *purchaseLink;
@property (nonatomic, readonly) ICQLink *purchase2Link;
@property (nonatomic, readonly) ICQLink *bottomLink;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic, readonly) UIView *footerView;
@property (nonatomic, readonly) UIView *trayView;
@property (nonatomic, readonly) UIVisualEffectView *blurBackdrop;
@property (nonatomic, readonly) UILayoutGuide *scrollVisibleLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *aboveSpinnerLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *belowSpinnerLayoutGuide;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, readonly) UIFont *messageFont;
@property (nonatomic, readonly) UIFont *purchaseButtonFont;
@property (nonatomic, readonly) UIFont *linkButtonFont;
@property (nonatomic, readonly) UIFont *fineprintFont;
@property (nonatomic, readonly) UIColor *fineprintColor;
@property (retain, nonatomic) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;
@property (copy, nonatomic) UIColor *buttonTintColor;
@property (nonatomic) long long upgradeMode;
@property (weak, nonatomic) id <ICQPageDelegate> delegate;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) _ICQTextView *messageView;
@property (retain, nonatomic) _ICQTextView *fineprintView;
@property (retain, nonatomic) UIButton *purchaseButton;
@property (retain, nonatomic) UIButton *purchase2Button;
@property (retain, nonatomic) UIButton *bottomButton;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)scrollViewDidScroll:(id)arg1;
- (id)_buttons;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)_updateTrayVisibility;
- (id)messageParagraphStyle;
- (id)defaultButtonColor;
- (id)horizontalConstraintsForView:(id)arg1 margin:(double)arg2;
- (long long)_styleOfView:(id)arg1;
- (id)_makePurchaseButton;
- (void)purchaseButtonTapped:(id)arg1;
- (id)_makeLinkButton;
- (void)purchase2ButtonTapped:(id)arg1;
- (void)bottomButtonTapped:(id)arg1;
- (void)_setButtonTintColor:(id)arg1;
- (void)_setButton:(id)arg1 backgroundColor:(id)arg2;
- (void)_setLinkTextColor:(id)arg1;
- (id)messageTextColor;
- (id)fineprintParagraphStyle;
- (id)_imageForGenericCloud;
- (id)_imageForBundleIdentifier:(id)arg1;
- (id)messageAttributes;
- (id)fineprintAttributes;
- (id)_constraintsForView:(id)arg1 equalToView:(id)arg2;
- (double)_marginForButton:(id)arg1;
- (id)_anchorForLowerView:(id)arg1;
- (id)_anchorForUpperView:(id)arg1;
- (double)_spacingFromUpperView:(id)arg1 toLowerView:(id)arg2;
- (void)flashScrollIndicatorsIfNeeded;

@end
