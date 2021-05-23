/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIControl.h>

@class IKViewElement, TVButtonContent, UIColor, UILabel, UIView, _TVImageView, _UIFloatingContentView;

@interface TVButton : UIControl

{
    TVButtonContent *_buttonContent;
    UIColor *_highlightColor;
    IKViewElement *_viewElement;
    CDUnknownBlockType _selectActionHandler;
    CDUnknownBlockType _playActionHandler;
}

@property (nonatomic, readonly) _UIFloatingContentView *floatingView;
@property (nonatomic, readonly) UIView *overlayView;
@property (nonatomic, readonly) long long backdropStyle;
@property (nonatomic, readonly) _Bool blurEnabled;
@property (nonatomic, readonly) TVButtonContent *buttonContent;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) double focusSizeIncrease;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) UILabel *textContentView;
@property (retain, nonatomic) _TVImageView *accessoryView;
@property (copy, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (copy, nonatomic) CDUnknownBlockType selectActionHandler;
@property (copy, nonatomic) CDUnknownBlockType playActionHandler;

+ (id)_buttonContentWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;

- (void)setEnabled:(_Bool)arg1;
- (void)setGroupName:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setContentMotionRotation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;
- (void)_selectButtonAction:(id)arg1;
- (void)tv_setLayout:(id)arg1;
- (void)_updateBackgroundColorForState:(unsigned long long)arg1;
- (void)setImageTrailsTextContent:(_Bool)arg1;
- (void)_setFocused:(_Bool)arg1 animationCoordinator:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)_updateFocusStateWithCoordinator:(id)arg1;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;
- (void)_playButtonAction:(id)arg1;

@end
