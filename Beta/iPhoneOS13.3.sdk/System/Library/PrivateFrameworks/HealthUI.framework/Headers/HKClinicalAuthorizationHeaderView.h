/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface HKClinicalAuthorizationHeaderView : UIView

{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    NSLayoutConstraint *_imageToTitleConstraint;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) NSLayoutConstraint *imageToTitleConstraint;
@property (copy, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (void)_setUpConstraints;
- (void)_setUpSubviews;

@end
