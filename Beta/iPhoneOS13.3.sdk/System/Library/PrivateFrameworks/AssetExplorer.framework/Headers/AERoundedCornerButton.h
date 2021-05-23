/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface AERoundedCornerButton : UIControl

{
    long long __layoutStyle;
    long long __buttonType;
    UILabel *__label;
    UIImageView *__imageView;
}

@property (nonatomic, setter=_setLayoutStyle:) long long _layoutStyle;
@property (nonatomic, readonly) long long _buttonType;
@property (retain, nonatomic, setter=_setLabel:) UILabel *_label;
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;

+ (id)roundedCornerButtonWithStyle:(long long)arg1 buttonType:(long long)arg2;

- (void)layoutSubviews;
- (void)_commonAERoundedCornerButtonInitializationWithStyle:(long long)arg1 buttonType:(long long)arg2;
- (double)_interpolatedGlyphHorizontalInset;
- (double)_interpolatedGlyphTopInset;

@end
