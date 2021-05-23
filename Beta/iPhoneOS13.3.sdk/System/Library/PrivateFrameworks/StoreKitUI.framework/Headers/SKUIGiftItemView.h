/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIClientContext, SKUIGiftTheme, SKUIItem, SKUIItemArtworkContext, SKUIItemOfferButton, SKUIItemState, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftItemView : UIView

{
    NSString *_artistName;
    NSString *_categoryName;
    SKUIClientContext *_clientContext;
    SKUIItem *_item;
    UIImageView *_itemImageView;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemState *_itemState;
    long long _itemStyle;
    long long _numberOfUserRatings;
    NSString *_price;
    UIImageView *_starRatingImageView;
    UILabel *_subtitleLabel1;
    UILabel *_subtitleLabel2;
    SKUIGiftTheme *_theme;
    UILabel *_titleLabel;
    float _userRating;
    UILabel *_userRatingCountLabel;
    _Bool _leftToRight;
}

@property (nonatomic) _Bool leftToRight;
@property (nonatomic, readonly) long long giftItemStyle;
@property (nonatomic, readonly) SKUIItem *item;
@property (copy, nonatomic) SKUIGiftTheme *theme;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) float userRating;
@property (nonatomic, readonly) SKUIItemOfferButton *itemOfferButton;
@property (retain, nonatomic) SKUIItemState *itemState;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic, readonly) SKUIItemArtworkContext *artworkContext;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_newLabel;
- (struct UIEdgeInsets)_imageEdgeInsets;
- (struct CGSize)_imageSize;
- (id)_titleColor;
- (id)_subtitleColor;
- (void)_reloadUserRatingViews;
- (id)initWithStyle:(long long)arg1 item:(id)arg2 clientContext:(id)arg3;
- (void)_reloadItemState:(_Bool)arg1;
- (void)_itemOfferConfirmAction:(id)arg1;
- (void)_reloadSubtitles;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;
- (double)_paddingTrailing;
- (double)_paddingLeading;
- (void)_enumerateMetadataViewsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_userRatingColor;

@end
