/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIGiftItemView, UIButton, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftResultView : UIView

{
    UIButton *_giftAgainButton;
    UIImageView *_imageView;
    SKUIGiftItemView *_itemView;
    UILabel *_titleLabel;
}

@property (nonatomic, readonly) UIButton *giftAgainButton;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SKUIGiftItemView *itemView;
@property (copy, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
