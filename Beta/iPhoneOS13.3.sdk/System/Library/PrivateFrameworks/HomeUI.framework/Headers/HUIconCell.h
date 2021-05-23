/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUIconCellContentMetrics, HUIconView, NSArray, NSString, UIColor, UILabel, UILayoutGuide, UIView;

@protocol HUResizableCellDelegate;

@interface HUIconCell : UITableViewCell <Swift>

{
    _Bool _disabled;
    _Bool _hideIcon;
    _Bool _iconForegroundColorFollowsTintColor;
    _Bool _iconTintColorFollowsDisabledState;
    _Bool _separatorInsetLinesUpWithText;
    HFItem *_item;
    UIColor *_iconForegroundColor;
    double _iconAlpha;
    HUIconCellContentMetrics *_contentMetrics;
    unsigned long long _iconDisplayStyle;
    NSArray *_staticConstraints;
    NSArray *_dynamicConstraints;
    NSArray *_iconSpacingConstraints;
    UIView *_containerView;
    HUIconView *_iconView;
    UILayoutGuide *_iconSpacingLayoutGuide;
}

@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSArray *dynamicConstraints;
@property (retain, nonatomic) NSArray *iconSpacingConstraints;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) UILayoutGuide *iconSpacingLayoutGuide;
@property (nonatomic) _Bool hideIcon;
@property (retain, nonatomic) UIColor *iconForegroundColor;
@property (nonatomic) _Bool iconForegroundColorFollowsTintColor;
@property (nonatomic) double iconAlpha;
@property (retain, nonatomic) HUIconCellContentMetrics *contentMetrics;
@property (nonatomic) unsigned long long iconDisplayStyle;
@property (nonatomic) _Bool iconTintColorFollowsDisabledState;
@property (nonatomic) _Bool separatorInsetLinesUpWithText;
@property (nonatomic) _Bool disableContinuousIconAnimation;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;

+ (_Bool)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateIcon;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_createIconView;
- (void)_invalidateDynamicConstraints;
- (id)_verticalConstraintsForContentSubview:(id)arg1;

@end
