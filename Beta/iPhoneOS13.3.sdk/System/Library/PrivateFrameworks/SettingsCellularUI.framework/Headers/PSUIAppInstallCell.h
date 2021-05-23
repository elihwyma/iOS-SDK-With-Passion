/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSTableCell.h>

@class NSLayoutConstraint, NSMutableArray, SKUIItemOfferButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PSUIAppInstallCell : PSTableCell

{
    int _installState;
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_publisherLabel;
    UILabel *_installedLabel;
    UIView *_labelContainerView;
    NSLayoutConstraint *_installedConstraint;
    NSLayoutConstraint *_availableConstraint;
    NSLayoutConstraint *_labelPaddingTop;
    NSLayoutConstraint *_labelPaddingBottom;
    SKUIItemOfferButton *_installButton;
    NSLayoutConstraint *_installButtonWidthConstraint;
    NSLayoutConstraint *_installButtonHeightConstraint;
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *publisherLabel;
@property (retain, nonatomic) UILabel *installedLabel;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) NSLayoutConstraint *installedConstraint;
@property (retain, nonatomic) NSLayoutConstraint *availableConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelPaddingTop;
@property (retain, nonatomic) NSLayoutConstraint *labelPaddingBottom;
@property (retain, nonatomic) SKUIItemOfferButton *installButton;
@property (retain, nonatomic) NSLayoutConstraint *installButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *installButtonHeightConstraint;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (nonatomic) int installState;

+ (id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3;

- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)_updateCellWithInstallState;

@end
