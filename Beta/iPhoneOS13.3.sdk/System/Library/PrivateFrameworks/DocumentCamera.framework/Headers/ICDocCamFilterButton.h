/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIButton.h>

@class NSLayoutConstraint, UIColor, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface ICDocCamFilterButton : UIButton

{
    short _filterType;
    NSLayoutConstraint *_labelVerticalSpacingConstraint;
    UILabel *_filterNameLabel;
    UIImageView *_filterIconView;
    UIView *_backgroundView;
    NSLayoutConstraint *_iconSizeConstraint;
}

@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) NSLayoutConstraint *iconSizeConstraint;
@property (nonatomic, readonly) UIColor *inactiveBackgroundViewColor;
@property (nonatomic, readonly) UIColor *inactiveTextColor;
@property (nonatomic, readonly) UIColor *activeBackgroundViewColor;
@property (nonatomic) short filterType;
@property (nonatomic) double iconSize;
@property (weak, nonatomic) NSLayoutConstraint *labelVerticalSpacingConstraint;
@property (weak, nonatomic) UILabel *filterNameLabel;
@property (weak, nonatomic) UIImageView *filterIconView;

+ (id)filterButtonWithType:(short)arg1;

- (void)dealloc;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;
- (void)updateForAccessibilityDarkerSystemColors:(id)arg1;
- (id)imageForFilterType:(short)arg1;

@end
