/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIColorScheme, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageFeatureView : UIView

{
    UIImageView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    SKUIColorScheme *_colorScheme;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
