/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, SKUIClientContext, SKUICountdown, SKUICountdownView, UIColor, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIBrickCollectionViewCell : UICollectionViewCell

{
    NSString *_accessibilityLabel;
    SKUIClientContext *_clientContext;
    SKUICountdownView *_countdownView;
    _Bool _itemImageHidden;
    struct UIEdgeInsets _itemImageInsets;
    UIImageView *_itemImageView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_overlayImageView;
}

@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUICountdown *countdown;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic, getter=isItemImageHidden) _Bool itemImageHidden;
@property (nonatomic) struct UIEdgeInsets itemImageInsets;
@property (nonatomic, readonly) UIView *itemImageView;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)_reloadHighlight;
- (void)_removeOverlay;

@end
