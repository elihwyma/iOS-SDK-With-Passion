/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIControl.h>

@class UIColor, UIImageView, UILabel, UIView;

@interface CKCanvasBackButtonView : UIControl

{
    _Bool _shouldShowTitlePaddingView;
    UIImageView *_backButtonView;
    UILabel *_titleLabel;
    UIView *_titlePaddingView;
    UIColor *_titleLabelColor;
}

@property (retain, nonatomic) UIImageView *backButtonView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titlePaddingView;
@property (nonatomic) _Bool shouldShowTitlePaddingView;
@property (retain, nonatomic) UIColor *titleLabelColor;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)setBackButtonTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showPaddingTitleView:(_Bool)arg2;
- (void)_setVisuallyHighlighted:(_Bool)arg1;
- (struct CGSize)_titlePaddingViewSizeForTitle;

@end
