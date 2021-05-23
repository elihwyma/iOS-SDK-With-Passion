/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPagePlaceholderView : UIView

{
    UIImageView *_imageView;
    UILabel *_label;
    UIColor *_textColor;
}

@property (retain, nonatomic) UIColor *textColor;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPlaceholderString:(id)arg1 isPad:(_Bool)arg2;

@end
