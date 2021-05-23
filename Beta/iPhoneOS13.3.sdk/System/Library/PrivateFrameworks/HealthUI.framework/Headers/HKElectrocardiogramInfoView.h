/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIStackView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface HKElectrocardiogramInfoView : UIStackView

{
    UILabel *_heartRateLabel;
    UILabel *_bodyLabel;
    NSLayoutConstraint *_heartRateLabelLeadingConstraint;
    NSLayoutConstraint *_heartRateFirstBaselineConstraint;
    NSLayoutConstraint *_heartImageViewHeightConstraint;
}

@property (retain, nonatomic) UILabel *heartRateLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) NSLayoutConstraint *heartRateLabelLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heartRateFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heartImageViewHeightConstraint;
@property (retain, nonatomic) NSString *heartRateText;
@property (retain, nonatomic) NSString *bodyText;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)_bodyView;
- (void)_addSubviews;
- (id)_heartRateView;

@end
