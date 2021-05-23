/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView;

@interface REUpNextImageView : UIView

{
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
    UIColor *_fallbackTintColor;
    UIImage *_overrideImage;
}

@property (retain, nonatomic) UIColor *fallbackTintColor;
@property (retain, nonatomic) UIImage *overrideImage;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)_updateColors;
- (_Bool)_hasMultipartImages;

@end
