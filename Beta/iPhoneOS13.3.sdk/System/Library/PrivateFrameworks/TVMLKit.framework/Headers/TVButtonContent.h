/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/_UIFloatingContentView.h>

@class IKViewElement, NSString, UIColor, UILabel, UIView, UIVisualEffectView, _TVImageView;

@interface TVButtonContent : _UIFloatingContentView

{
    UIColor *__backgroundColor;
    _Bool _focused;
    _Bool _blurEnabled;
    _Bool _disabled;
    _Bool _imageTrailsTextContent;
    double _cornerRadius;
    UIView *_overlayView;
    UIVisualEffectView *_backdropView;
    long long _backdropStyle;
    NSString *_groupName;
    double _focusSizeIncrease;
    _TVImageView *_imageView;
    UILabel *_textContentView;
    _TVImageView *_accessoryView;
    UIColor *_highlightColor;
    IKViewElement *_viewElement;
}

@property (nonatomic, readonly, getter=isFocused) _Bool focused;
@property (nonatomic, readonly) UIVisualEffectView *backdropView;
@property (nonatomic, readonly) UIView *overlayView;
@property (nonatomic, readonly) long long backdropStyle;
@property (nonatomic, readonly) _Bool blurEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) double focusSizeIncrease;
@property (nonatomic) _Bool imageTrailsTextContent;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) UILabel *textContentView;
@property (retain, nonatomic) _TVImageView *accessoryView;
@property (copy, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) IKViewElement *viewElement;

- (void)setEnabled:(_Bool)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;
- (void)_updateBackgroundColorForState:(unsigned long long)arg1;
- (void)_setFocused:(_Bool)arg1 animationCoordinator:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)_updateFocusStateWithCoordinator:(id)arg1;
- (double)_imageMarginFromText;
- (void)_updateFloaingViewFocusState:(_Bool)arg1 coordinator:(id)arg2;

@end
