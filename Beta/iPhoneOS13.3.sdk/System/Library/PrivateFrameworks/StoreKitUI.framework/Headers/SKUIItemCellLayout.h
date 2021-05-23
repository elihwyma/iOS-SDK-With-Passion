/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICellLayout.h>

@class NSString, SKUICellImageView, SKUIItemOffer, SKUIItemOfferButton, SKUIItemOfferButtonAppearance, SKUIItemState, UIImage, UILabel, UIView;

@interface SKUIItemCellLayout : SKUICellLayout

{
    _Bool _iconImageHidden;
    _Bool _hidesItemOfferButton;
    _Bool _highlighted;
    SKUICellImageView *_iconImageView;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    UILabel *_itemOfferNoticeLabel;
    SKUIItemState *_itemState;
    _Bool _restricted;
    _Bool _selected;
    UIView *_removeControlView;
}

@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic, getter=isIconImageHidden) _Bool iconImageHidden;
@property (nonatomic) _Bool displaysItemOfferButton;
@property (nonatomic, getter=isRestricted) _Bool restricted;
@property (retain, nonatomic) SKUIItemOffer *itemOffer;
@property (retain, nonatomic) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property (copy, nonatomic) NSString *itemOfferNoticeString;
@property (copy, nonatomic) SKUIItemState *itemState;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, readonly) UIView *iconImageView;
@property (nonatomic, readonly) SKUIItemOfferButton *itemOfferButton;
@property (nonatomic, readonly) UILabel *itemOfferNoticeLabel;
@property (nonatomic, readonly) UIView *removeControlView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)resetLayout;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)_itemOfferConfirmAction:(id)arg1;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;
- (void)_reloadItemOfferButton:(_Bool)arg1;
- (void)_reloadItemOfferVisibility;
- (_Bool)_canShowItemOfferNotice;
- (void)layoutForItemOfferChange;
- (void)_getParentTableView:(id *)arg1 collectionView:(id *)arg2;
- (id)_parentCollectionViewCell;
- (void)_cancelItemOfferConfirmationAction:(id)arg1;
- (void)_showItemOfferConfirmationAction:(id)arg1;
- (_Bool)_useCloudButtonForItemState:(id)arg1;

@end
