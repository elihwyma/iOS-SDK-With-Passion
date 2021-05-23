/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSString, SKUIAttributedStringLayout, SKUIAttributedStringView, SKUIButtonBorderStyle, SKUIImageView, SKUIItemOfferButton, SKUIShapeView, UIImageView;

@protocol SKUIItemOfferButtonDelegate;

__attribute__((visibility("hidden")))
@interface SKUIStyledButton : UIControl

{
    SKUIAttributedStringView *_attributedStringView;
    struct UIEdgeInsets _bigHitInsets;
    SKUIButtonBorderStyle *_borderStyle;
    SKUIShapeView *_borderView;
    long long _buttonType;
    _Bool _didInitialHighlightForTouch;
    UIImageView *_disclosureImageView;
    double _imageTextPaddingInterior;
    SKUIImageView *_imageView;
    double _imageYAdjustment;
    SKUIItemOfferButton *_itemOfferButton;
    id <SKUIItemOfferButtonDelegate> _itemOfferDelegate;
    _Bool _useBigHitTarget;
    _Bool _usesTintColor;
    struct UIEdgeInsets _buttonPadding;
}

@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic) struct UIEdgeInsets bigHitInsets;
@property (nonatomic, readonly) double firstBaselineOffset;
@property (copy, nonatomic) SKUIButtonBorderStyle *borderStyle;
@property (nonatomic) struct UIEdgeInsets buttonPadding;
@property (nonatomic) long long buttonType;
@property (nonatomic) double imageTextPaddingInterior;
@property (nonatomic, readonly) SKUIImageView *imageView;
@property (nonatomic) double imageYAdjustment;
@property (retain, nonatomic) SKUIAttributedStringLayout *titleLayout;
@property (nonatomic) _Bool useBigHitTarget;
@property (nonatomic) _Bool usesTintColor;
@property (nonatomic, readonly, getter=isUsingItemOfferAppearance) _Bool usingItemOfferAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SKUIItemOfferButtonDelegate> itemOfferDelegate;

+ (struct CGSize)sizeForTextSize:(struct CGSize)arg1 buttonType:(long long)arg2 borderStyle:(id)arg3 interiorPadding:(double)arg4;
+ (_Bool)usesItemOfferAppearanceForButtonType:(long long)arg1 itemState:(id)arg2;
+ (long long)buttonTypeForElement:(id)arg1;
+ (struct CGSize)sizeForTextSize:(struct CGSize)arg1 buttonType:(long long)arg2;
+ (struct CGSize)sizeForTextSize:(struct CGSize)arg1 buttonType:(long long)arg2 borderStyle:(id)arg3;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)_textColor;
- (id)_borderColor;
- (struct CGRect)hitRect;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (_Bool)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(_Bool)arg4;
- (id)_textBackgroundColor;
- (void)_reloadImageView;
- (void)_reloadDisclosureImage;
- (void)setTitleLayout:(id)arg1 forceRefresh:(_Bool)arg2;
- (void)_reloadOverrideTextColor;
- (void)_itemOfferButtonAction:(id)arg1;
- (id)_borderFillColor;
- (_Bool)_usesTintColor;

@end
