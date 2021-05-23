/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface HUQuickControlCircleButton : UIButton

{
    UIColor *_selectedColor;
    UIView *_backgroundView;
    UIColor *_standardBackgroundColor;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *standardBackgroundColor;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *selectedColor;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)_controlStateChanged;
- (void)_adjustTitleColor;

@end
