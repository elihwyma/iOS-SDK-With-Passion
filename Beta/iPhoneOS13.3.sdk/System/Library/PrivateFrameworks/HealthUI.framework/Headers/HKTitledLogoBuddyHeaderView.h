/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTitledBuddyHeaderView.h>

@class NSLayoutConstraint, UIImage, UIImageView;

@interface HKTitledLogoBuddyHeaderView : HKTitledBuddyHeaderView

{
    UIImageView *_logoImageView;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchor;
}

@property (retain, nonatomic) UIImage *logoImage;

- (void)traitCollectionDidChange:(id)arg1;
- (double)bottomPadding;
- (void)_updateForCurrentSizeCategory;
- (id)logoImageView;
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;

@end
