/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class SKUIGift, SKUIGiftConfiguration, SKUIGiftItemView, SKUIGiftTheme, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell

{
    SKUIGiftConfiguration *_giftConfiguration;
    SKUIGift *_gift;
    UIImageView *_headerImageView;
    SKUIGiftItemView *_itemView;
    UILabel *_messageLabel;
    UILabel *_priceLabel;
    UILabel *_senderNameLabel;
    UILabel *_senderNameLabelLabel;
    SKUIGiftTheme *_theme;
}

@property (retain, nonatomic) SKUIGiftConfiguration *giftConfiguration;
@property (retain, nonatomic) SKUIGift *gift;
@property (retain, nonatomic) SKUIGiftTheme *theme;
@property (retain, nonatomic) UIImage *itemImage;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)_setMessage:(id)arg1;
- (id)_itemView;
- (void)_setPrice:(id)arg1;
- (void)reloadThemeHeaderImage;
- (void)_setHeaderImage:(id)arg1;
- (void)_setSenderName:(id)arg1;
- (void)_reloadItemView;

@end
