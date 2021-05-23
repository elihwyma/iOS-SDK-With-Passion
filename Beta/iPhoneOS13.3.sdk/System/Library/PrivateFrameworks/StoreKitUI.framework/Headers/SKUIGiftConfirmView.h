/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class SKUIGiftConfiguration, SKUIGiftConfirmLabeledValue, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfirmView : UIView

{
    SKUIGiftConfirmLabeledValue *_amountView;
    UILabel *_chargeDisclaimerLabel;
    UILabel *_confirmYourOrderLabel;
    SKUIGiftConfirmLabeledValue *_senderView;
    SKUIGiftConfiguration *_giftConfiguration;
    SKUIGiftConfirmLabeledValue *_itemView;
    SKUIGiftConfirmLabeledValue *_messageView;
    SKUIGiftConfirmLabeledValue *_recipientsView;
    UIView *_rule1;
    UIView *_rule2;
    UIView *_rule3;
    UIView *_rule4;
    UIView *_rule5;
    UIView *_rule6;
    SKUIGiftConfirmLabeledValue *_fromView;
    SKUIGiftConfirmLabeledValue *_sendOnView;
    UIButton *_termsButton;
    SKUIGiftConfirmLabeledValue *_themeNameView;
    UILabel *_totalLabel;
}

@property (nonatomic, readonly) UIButton *termsButton;

- (void)layoutSubviews;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (id)_newLightLabelWithSize:(double)arg1 alpha:(double)arg2;
- (id)_termsButton;
- (id)_newBoldLabelWithSize:(double)arg1;

@end
