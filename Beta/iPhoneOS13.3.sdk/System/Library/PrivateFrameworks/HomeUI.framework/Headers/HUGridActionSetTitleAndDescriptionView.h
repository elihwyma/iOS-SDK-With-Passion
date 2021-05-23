/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UILabel;

@interface HUGridActionSetTitleAndDescriptionView : UIView

{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    double _titleDescriptionLineSpacing;
    NSArray *_titleAndDescriptionConstraints;
    NSLayoutConstraint *_titleDescriptionSpacingConstraint;
}

@property (retain, nonatomic) NSArray *titleAndDescriptionConstraints;
@property (retain, nonatomic) NSLayoutConstraint *titleDescriptionSpacingConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) double titleDescriptionLineSpacing;

+ (_Bool)requiresConstraintBasedLayout;

- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 titleLabelSuperview:(id)arg2;
- (void)updateTitleText:(id)arg1 descriptionText:(id)arg2;

@end
