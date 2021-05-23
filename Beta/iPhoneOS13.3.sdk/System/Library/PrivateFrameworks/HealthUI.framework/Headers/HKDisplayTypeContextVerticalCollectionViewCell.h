/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HKDisplayTypeContextItem, HKUIMetricColors, NSLayoutConstraint, UILabel, UIStackView;

@interface HKDisplayTypeContextVerticalCollectionViewCell : UICollectionViewCell

{
    HKDisplayTypeContextItem *_contextItem;
    long long _mode;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UILabel *_unitLabel;
    UIStackView *_contentStackView;
    HKUIMetricColors *_currentMetricColors;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_maxTitleWidthConstraint;
}

@property (retain, nonatomic) HKDisplayTypeContextItem *contextItem;
@property (nonatomic) long long mode;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) HKUIMetricColors *currentMetricColors;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *maxTitleWidthConstraint;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)_titleFont;
- (void)setSelected:(_Bool)arg1;
- (id)_labelWithFont:(id)arg1 allowsMultiline:(_Bool)arg2 supportsDyanmicType:(_Bool)arg3;
- (id)_valueAndUnitFont;
- (id)_stackViewWithArrangedSubviews:(id)arg1;
- (void)_configureForTraitCollection:(id)arg1;
- (void)_updateUI:(_Bool)arg1;
- (void)_configureForContextItem:(id)arg1;
- (id)_backgroundViewWithColor:(id)arg1;
- (void)updateWithContextItem:(id)arg1 mode:(long long)arg2;

@end
