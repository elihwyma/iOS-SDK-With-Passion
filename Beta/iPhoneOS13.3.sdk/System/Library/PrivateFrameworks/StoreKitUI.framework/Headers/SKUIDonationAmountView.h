/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, SKUIGiftAmount, SKUIGiftCharity, UIImage, UIImageView, UILabel, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUIDonationAmountView : UIView

{
    NSArray *_amountButtons;
    UILabel *_amountDisclaimerLabel;
    SKUIGiftCharity *_charity;
    UILabel *_descriptionLabel;
    UILabel *_legalTextLabel;
    UILabel *_legalText2Label;
    UIImageView *_logoImageView;
    long long _selectedAmountIndex;
    UIView *_separatorView;
    UIScrollView *_scrollView;
}

@property (nonatomic, readonly) SKUIGiftCharity *charity;
@property (retain, nonatomic) UIImage *logoImage;
@property (nonatomic, readonly) SKUIGiftAmount *selectedAmount;

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithCharity:(id)arg1;
- (void)_amountButtonDown:(id)arg1;
- (void)_amountButtonUpInside:(id)arg1;
- (void)_amountButtonUpOutside:(id)arg1;

@end
