/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout

{
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    UIImageView *_iconHighlightImageView;
    UILabel *_itemCountLabel;
    struct CGSize _maxImageSize;
    UILabel *_priceLabel;
    UIColor *_primaryTextColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_videoHighlightImageView;
    UIImageView *_videoImageView;
    UIImageView *_videoPlayButtonImageView;
    struct CGSize _videoSize;
    unsigned long long _visibleFields;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *itemCountString;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CGSize videoSize;
@property (retain, nonatomic) UIImage *videoThumbnailImage;
@property (nonatomic) struct CGSize maxImageSize;
@property (nonatomic) unsigned long long visibleFields;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)_newDefaultLabel;
- (void)setItemOffer:(id)arg1;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)_reloadHighlight;
- (struct CGSize)cellSizeForImageOfSize:(struct CGSize)arg1;
- (void)_layoutFieldsHorizontal;
- (void)_layoutFieldsVertical;
- (void)_reloadPriceLabel;
- (void)_removeHighlightViews;

@end
