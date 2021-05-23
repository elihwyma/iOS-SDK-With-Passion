/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface HKClinicalAuthorizationPrimaryChoiceFooterView : UIView

{
    UIButton *_primaryButton;
}

@property (nonatomic, readonly) UIButton *primaryButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_updateMetricsWithTraitCollection:(id)arg1;
- (double)_bottomMarginForTraitCollection:(id)arg1;

@end
