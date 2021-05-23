/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIClientContext, SKUILinkButton, SKUIRoundedRectButton, UIButton, UIControl, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsView : UIView

{
    UILabel *_accountCreditsLabel;
    SKUIRoundedRectButton *_appleIDButton;
    SKUIClientContext *_clientContext;
    SKUILinkButton *_ecommerceButton;
    SKUIRoundedRectButton *_giftingButton;
    UIButton *_termsAndConditionsButton;
    SKUIRoundedRectButton *_usernameButton;
    _Bool _ecommerceVisibilityHidden;
    _Bool _giftingVisibilityHidden;
    UIButton *_redeemButton;
}

@property (copy, nonatomic) NSString *accountCredits;
@property (nonatomic, readonly) UIButton *appleIDButton;
@property (nonatomic, readonly) UIButton *giftingButton;
@property (nonatomic, readonly) UIButton *redeemButton;
@property (nonatomic, readonly) UIButton *termsAndConditionsButton;
@property (nonatomic, readonly) UIControl *ECommerceButton;
@property (copy, nonatomic) NSString *ECommerceLinkTitle;
@property (nonatomic, getter=isGiftingHidden) _Bool giftingHidden;
@property (nonatomic, getter=isTermsAndConditionsHidden) _Bool termsAndConditionsHidden;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)initWithClientContext:(id)arg1;
- (void)_reloadFonts;
- (id)_newLinkButtonWithTitle:(id)arg1;
- (void)_layoutTwoRows;
- (void)_layoutOneRow;
- (_Bool)isEcommerceHidden;
- (_Bool)isRedeemHidden;

@end
