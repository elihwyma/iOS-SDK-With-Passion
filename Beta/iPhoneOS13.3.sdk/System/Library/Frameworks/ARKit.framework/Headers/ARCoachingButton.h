/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <UIKit/UIControl.h>

@class ARCoachingControlBlurredBackgroundView, ARCoachingWrappedButton, NSString, UIColor, UIFont, UIImage;

@interface ARCoachingButton : UIControl

{
    UIFont *_regularFont;
    UIFont *_boldFont;
    long long _controlStyle;
    UIImage *_image;
    ARCoachingWrappedButton *_button;
    ARCoachingControlBlurredBackgroundView *_blurredBackgroundView;
    long long _buttonStyle;
    long long _textStyle;
    UIColor *_white35PercentColor;
    UIColor *_white100PercentColor;
    UIColor *_white70PercentColor;
    UIColor *_black35PercentColor;
    UIColor *_black70PercentColor;
    UIColor *_blue100PercentColor;
    UIColor *_blue50PercentColor;
    long long _currentStyle;
    UIColor *_white75PercentColor;
    UIColor *_white52PercentColor;
    UIColor *_white26PercentColor;
    struct UIEdgeInsets _largeImageInsets;
}

@property (retain, nonatomic) ARCoachingWrappedButton *button;
@property (retain, nonatomic) ARCoachingControlBlurredBackgroundView *blurredBackgroundView;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long textStyle;
@property (retain, nonatomic) UIFont *regularFont;
@property (retain, nonatomic) UIFont *boldFont;
@property (retain, nonatomic) UIColor *white35PercentColor;
@property (retain, nonatomic) UIColor *white100PercentColor;
@property (retain, nonatomic) UIColor *white70PercentColor;
@property (retain, nonatomic) UIColor *black35PercentColor;
@property (retain, nonatomic) UIColor *black70PercentColor;
@property (retain, nonatomic) UIColor *blue100PercentColor;
@property (retain, nonatomic) UIColor *blue50PercentColor;
@property (nonatomic) long long currentStyle;
@property (retain, nonatomic) UIColor *white75PercentColor;
@property (retain, nonatomic) UIColor *white52PercentColor;
@property (retain, nonatomic) UIColor *white26PercentColor;
@property (nonatomic) long long controlStyle;
@property (nonatomic) struct UIEdgeInsets contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets largeImageInsets;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;

- (void)setEnabled:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)setSelected:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 adjustsFontForContentSizeCategory:(_Bool)arg5;
- (void)_didUpdateDarkenColorsSetting:(id)arg1;
- (void)_didUpdateContentSizeCategory:(id)arg1;
- (id)initWithButton:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 largeImageInsets:(struct UIEdgeInsets)arg5;
- (void)_updateTitleStyleForButton:(id)arg1 withControlStyle:(long long)arg2;
- (id)_colorDarkenedIfNeededForColor:(id)arg1;
- (void)updateCurrentAppearanceIfNeeded;
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4;

@end
