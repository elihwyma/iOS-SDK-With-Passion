/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKGradient, HKGradientView, NSArray, NSLayoutConstraint, NSString, UIColor, UIImage, UIImageView, UILabel;

@interface HKRoundedHeaderView : UIView

{
    HKGradient *_gradient;
    UIColor *_color;
    UIImage *_image;
    NSString *_text;
    UIColor *_textColor;
    UIColor *_chevronColor;
    UIColor *_detailTextColor;
    NSString *_detailTextCompositingFilter;
    HKGradientView *_gradientView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_chevronRightImageView;
    NSLayoutConstraint *_textLeadingConstraintToView;
    NSLayoutConstraint *_textLeadingConstraintToImageView;
    NSLayoutConstraint *_textLabelFirstBaselineConstraint;
    NSLayoutConstraint *_textLabelWidthConstraint;
    NSLayoutConstraint *_textLabelBottomConstraint;
    NSLayoutConstraint *_detailTextLabelFirstBaselineConstraint;
    NSLayoutConstraint *_detailTextLabelWidthConstraint;
    NSLayoutConstraint *_detailTextLabelBottomConstraint;
    NSLayoutConstraint *_largeTextChevronCenterYConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}

@property (retain, nonatomic) HKGradientView *gradientView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) UIImageView *chevronRightImageView;
@property (retain, nonatomic) NSLayoutConstraint *textLeadingConstraintToView;
@property (retain, nonatomic) NSLayoutConstraint *textLeadingConstraintToImageView;
@property (retain, nonatomic) NSLayoutConstraint *textLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLabelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLabelBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *detailTextLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *detailTextLabelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *detailTextLabelBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *largeTextChevronCenterYConstraint;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) HKGradient *gradient;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *chevronColor;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (nonatomic) NSString *detailTextCompositingFilter;
@property (nonatomic, readonly) double textHorizontalInset;

+ (id)_textFont;
+ (double)estimatedHeight;
+ (id)_accessibilityContentSizeCategory;
+ (double)_topToTextFirstBaseline;
+ (double)_textLastBaselineToBottom;
+ (id)_detailTextFont;
+ (double)_detailTextLastBaselineToBottom;

- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateUI;
- (void)_updateForCurrentSizeCategory;
- (id)initWithGradient:(id)arg1;
- (void)_setupConstraints;
- (void)_setupUI;
- (void)_updateTextLabel;
- (_Bool)_isLayingOutForAccessibility;
- (void)_updateTextConstraints;
- (_Bool)_isTextLabelTruncated;

@end
