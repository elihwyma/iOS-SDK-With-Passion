/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton;

@interface HKClinicalAuthorizationBinaryChoiceFooterView : UIView

{
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
    NSLayoutConstraint *_secondaryFirstBaselineToPrimaryBottomConstraint;
}

@property (nonatomic, readonly) NSLayoutConstraint *secondaryFirstBaselineToPrimaryBottomConstraint;
@property (nonatomic, readonly) UIButton *primaryButton;
@property (nonatomic, readonly) UIButton *secondaryButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (void)_setUpConstraints;
- (void)_setUpSubviews;

@end
