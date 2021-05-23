/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class HKSplashScreenItem, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel;

@interface HKSplashScreenFeatureViewCell : UITableViewCell

{
    HKSplashScreenItem *_splashScreenItem;
    UILabel *_fullDescriptionLabel;
    UIImageView *_itemIconView;
    double _cellPadding;
    NSLayoutConstraint *_iconTopConstraint;
    UIImage *_icon;
    NSString *_title;
    NSString *_featureDescription;
}

@property (retain, nonatomic) NSLayoutConstraint *iconTopConstraint;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *featureDescription;
@property (retain, nonatomic) HKSplashScreenItem *splashScreenItem;
@property (retain, nonatomic) UILabel *fullDescriptionLabel;
@property (retain, nonatomic) UIImageView *itemIconView;
@property (readonly) double cellPadding;

+ (id)_titleFont;
+ (id)defaultReuseIdentifier;
+ (id)_descriptionFont;

- (void)traitCollectionDidChange:(id)arg1;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)createSubviews;
- (void)updateForFontOrTextChange;
- (void)setIcon:(id)arg1 title:(id)arg2 description:(id)arg3;

@end
