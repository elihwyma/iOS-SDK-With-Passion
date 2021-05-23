/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemCellLayout.h>

@class SKUICellLayoutView, SKUIEditorialCellLayout, SKUILockupItemCellLayout, SKUITextBoxView, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout

{
    struct UIEdgeInsets _contentInsets;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
    double _editorialHeight;
    long long _layoutStyle;
    SKUILockupItemCellLayout *_lockupLayout;
    SKUICellLayoutView *_lockupView;
    UIColor *_offerNoticeTextColor;
    SKUITextBoxView *_textBoxView;
    unsigned long long _visibleFields;
}

@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) unsigned long long visibleFields;
@property (nonatomic, readonly) SKUILockupItemCellLayout *lockupCellLayout;
@property (nonatomic, readonly) SKUITextBoxView *textBoxView;

+ (double)editorialWidthForCellWidth:(double)arg1 lockupStyle:(struct SKUILockupStyle)arg2;
+ (double)_imagePaddingForArtworkSize:(long long)arg1;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)iconImageView;
- (id)itemState;
- (id)iconImage;
- (void)setRestricted:(_Bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)itemOffer;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setItemOffer:(id)arg1;
- (id)_lockupView;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2;
- (void)setIconImageHidden:(_Bool)arg1;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (_Bool)isIconImageHidden;
- (void)layoutForItemOfferChange;
- (id)itemOfferNoticeString;
- (void)setItemOfferNoticeString:(id)arg1;
- (id)_editorialContainerView;
- (id)_editorialCellLayout;
- (_Bool)_showsItemOfferUnderEditorial;
- (_Bool)_isItemOfferButtonHidden;

@end
