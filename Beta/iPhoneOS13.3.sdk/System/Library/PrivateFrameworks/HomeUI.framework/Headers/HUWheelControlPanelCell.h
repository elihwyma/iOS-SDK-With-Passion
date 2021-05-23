/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUControlPanelCell.h>

@class HUWheelControlView, NSArray, NSString, UILabel, UIView;

@interface HUWheelControlPanelCell : HUControlPanelCell

{
    _Bool _wheelViewVisible;
    HUWheelControlView *_wheelView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIView *_separatorView;
    NSArray *_staticConstraints;
    NSArray *_dynamicConstraints;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, readonly) UIView *separatorView;
@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSArray *dynamicConstraints;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic, readonly, getter=isDisabled) _Bool disabled;
@property (retain, nonatomic) HUWheelControlView *wheelView;
@property (nonatomic) _Bool wheelViewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)wheelControlView:(id)arg1 didUpdateValue:(id)arg2;
- (id)allControlViews;

@end
