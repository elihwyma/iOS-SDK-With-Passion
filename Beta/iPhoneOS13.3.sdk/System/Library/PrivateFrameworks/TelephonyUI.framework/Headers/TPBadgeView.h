/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface TPBadgeView : TPView

{
    unsigned long long _sizeCategory;
    unsigned long long _theme;
    NSString *_title;
    UILabel *_titleLabel;
    double _titleLabelFontSize;
    double _layerCornerRadius;
    NSLayoutConstraint *_heightAnchorLayoutConstraint;
    NSLayoutConstraint *_widthAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelTrailingAnchorLayoutConstraint;
    double _heightAnchorLayoutConstraintConstantFontMultiplier;
    double _titleLabelLeadingAnchorLayoutConstraintConstant;
    double _titleLabelTrailingAnchorLayoutConstraintConstant;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double titleLabelFontSize;
@property (nonatomic) double layerCornerRadius;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *widthAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorLayoutConstraint;
@property (nonatomic) double heightAnchorLayoutConstraintConstantFontMultiplier;
@property (nonatomic) double titleLabelLeadingAnchorLayoutConstraintConstant;
@property (nonatomic) double titleLabelTrailingAnchorLayoutConstraintConstant;
@property (nonatomic) unsigned long long sizeCategory;
@property (nonatomic) unsigned long long theme;
@property (copy, nonatomic) NSString *title;

- (void)commonInit;
- (id)initWithTitle:(id)arg1;
- (void)updateFonts;
- (void)updateConstraintsConstants;
- (id)initWithTitle:(id)arg1 theme:(unsigned long long)arg2;
- (void)updateTheme;
- (void)updateSizeCategory;
- (double)scaledLayoutValueForBaseValue:(double)arg1;
- (void)loadConstraints;
- (double)scaledLayoutValueForBaseValue:(double)arg1 shouldLowerBound:(_Bool)arg2;
- (void)updateActiveHorizontalConstraints;
- (void)unloadConstraints;

@end
