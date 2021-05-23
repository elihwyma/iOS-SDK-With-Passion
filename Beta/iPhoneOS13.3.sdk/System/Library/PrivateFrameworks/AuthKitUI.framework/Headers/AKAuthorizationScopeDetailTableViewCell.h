/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide;

@interface AKAuthorizationScopeDetailTableViewCell : UITableViewCell

{
    _Bool _internalChecked;
    UILabel *_scopeLabel;
    UILabel *_mainLabel;
    UILabel *_mainDetailLabel;
    UIImageView *_leadingCheckmarkView;
    UILayoutGuide *_mainGuide;
    UILayoutGuide *_mainLabelFirstLineGuide;
    UILayoutGuide *_scopeLabelFirstLineGuide;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_mainLabelLeadingConstraint;
    unsigned long long _internalCheckmarkStyle;
}

@property (retain, nonatomic) UIImageView *leadingCheckmarkView;
@property (nonatomic, readonly) UILayoutGuide *mainGuide;
@property (nonatomic, readonly) UILayoutGuide *mainLabelFirstLineGuide;
@property (nonatomic, readonly) UILayoutGuide *scopeLabelFirstLineGuide;
@property (nonatomic, readonly) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *mainLabelLeadingConstraint;
@property (nonatomic) unsigned long long internalCheckmarkStyle;
@property (nonatomic, getter=internalIsChecked) _Bool internalChecked;
@property (nonatomic) double minimumHeight;
@property (nonatomic) unsigned long long checkmarkStyle;
@property (nonatomic, getter=isChecked) _Bool checked;
@property (nonatomic, readonly) UILabel *scopeLabel;
@property (nonatomic, readonly) UILabel *mainLabel;
@property (nonatomic, readonly) UILabel *mainDetailLabel;

- (void)layoutSubviews;
- (id)_newLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_checkmarkImage;
- (void)_setupViews;
- (id)_checkmarkImageView;
- (void)_setSeparatorIndentToMainLabel;
- (id)_clearImage;
- (void)_setupLayout;
- (_Bool)_isLTR;
- (void)_setCheckMarkStyleLeadingChecked:(_Bool)arg1;
- (void)_setCheckmarkStyleTrailingChecked:(_Bool)arg1;
- (id)_checkmarkCircleImageViewChecked:(_Bool)arg1;
- (id)_selectedCheckmarkCircleImageView;
- (id)_unselectedCheckmarkCircleImageView;
- (id)_checkmarkCircleImage;
- (id)_circleImage;

@end
