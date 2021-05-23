/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface _HKDisplayTypeSectionedHeaderView : UICollectionReusableView

{
    UIView *_contentView;
    NSString *_title;
    NSLayoutConstraint *_maxTitleWidthConstraint;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSLayoutConstraint *maxTitleWidthConstraint;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updatePreferredTitleFont;

@end
