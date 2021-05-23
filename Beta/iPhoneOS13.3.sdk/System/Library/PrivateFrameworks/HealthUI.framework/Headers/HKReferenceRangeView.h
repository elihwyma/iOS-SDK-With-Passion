/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKReferenceRangeDotView, HKReferenceRangeViewConfiguration, HKReferenceRangeViewData, NSString, UIFont, UILabel;

@interface HKReferenceRangeView : UIView

{
    double _lowValueXPosition;
    double _highValueXPosition;
    double _currentValueXPosition;
    long long _valueDirection;
    double _intrinsicHeight;
    _Bool _showOutOfRangeIndicator;
    HKReferenceRangeViewConfiguration *_configuration;
    NSString *_multiValueSeparator;
    HKReferenceRangeViewData *_data;
    UIView *_referenceRangeView;
    UIView *_referenceRangeContainerView;
    HKReferenceRangeDotView *_currentValueView;
    UILabel *_lowValueLabel;
    UILabel *_highValueLabel;
    UILabel *_currentValueLabel;
    UIFont *_dynamicTypeAnchorFont;
    UIFont *_valueFont;
    UIFont *_overriddenValueFont;
    UIFont *_unitFont;
    UILabel *_outOfRangeLabel;
}

@property (copy, nonatomic) HKReferenceRangeViewData *data;
@property (retain, nonatomic) UIView *referenceRangeView;
@property (retain, nonatomic) UIView *referenceRangeContainerView;
@property (retain, nonatomic) HKReferenceRangeDotView *currentValueView;
@property (retain, nonatomic) UILabel *lowValueLabel;
@property (retain, nonatomic) UILabel *highValueLabel;
@property (retain, nonatomic) UILabel *currentValueLabel;
@property (retain, nonatomic) UIFont *dynamicTypeAnchorFont;
@property (retain, nonatomic) UIFont *valueFont;
@property (retain, nonatomic) UIFont *overriddenValueFont;
@property (retain, nonatomic) UIFont *unitFont;
@property (retain, nonatomic) UILabel *outOfRangeLabel;
@property (nonatomic, readonly) HKReferenceRangeViewConfiguration *configuration;
@property (copy, nonatomic) NSString *multiValueSeparator;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)updateWithData:(id)arg1;
- (void)_setupSubviews;
- (id)valueLabelFont;
- (id)unitLabelFont;
- (_Bool)_hasReferenceRange;
- (id)_generateMultilineAttributedValueStringForOriginalString:(id)arg1;
- (void)_layoutFullReferenceRange;
- (void)_layoutCurrentValueOnly;
- (void)_applyNormalizedValuesToView;
- (void)_updateContainerBorderColors;
- (struct CGRect)_assureLabelFrameWithinBounds:(struct CGRect)arg1;
- (id)_outOfRangeColor;
- (void)_normalizeValuesIfNeeded;
- (id)_generateAttributedValueStringWithOverrideColor:(id)arg1;
- (id)_configuredPreferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;

@end
