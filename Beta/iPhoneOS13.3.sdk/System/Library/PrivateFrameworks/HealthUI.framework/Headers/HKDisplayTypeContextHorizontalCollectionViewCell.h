/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HKDisplayTypeContextItem, HKUIMetricColors, NSArray, UIButton, UILabel;

@protocol HKDisplayTypeContextHorizontalCollectionViewCellDelegate;

@interface HKDisplayTypeContextHorizontalCollectionViewCell : UICollectionViewCell

{
    UILabel *_titleLabel;
    UIButton *_infoButton;
    UILabel *_valueLabel;
    UILabel *_unitLabel;
    UILabel *_dateLabel;
    HKUIMetricColors *_currentMetricColors;
    NSArray *_horizontalConstraints;
    HKDisplayTypeContextItem *_contextItem;
    id <HKDisplayTypeContextHorizontalCollectionViewCellDelegate> _delegate;
}

@property (retain, nonatomic) HKDisplayTypeContextItem *contextItem;
@property (weak, nonatomic) id <HKDisplayTypeContextHorizontalCollectionViewCellDelegate> delegate;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)infoButtonTapped:(id)arg1;
- (id)_titleLabelFont;
- (void)updateUI:(_Bool)arg1;
- (id)_dateLabelFont;
- (id)_valueLabelFont;
- (id)_unitLabelFont;
- (id)_buildHorizontalConstraints;
- (void)_applyHorizontalDesign;
- (double)_titleLabelBaselineOffsetFromTop;
- (double)_valueLabelBaselineOffsetFromDateLabel;
- (double)_dateBaselineOffsetFromValue;
- (double)_bottomOffsetFromDateBaseline;
- (void)_setActiveForConstraints:(id)arg1 active:(_Bool)arg2;
- (void)updateMetricColors:(_Bool)arg1;
- (void)updateUIColors;
- (void)_unapplyHorizontalDesign;

@end
