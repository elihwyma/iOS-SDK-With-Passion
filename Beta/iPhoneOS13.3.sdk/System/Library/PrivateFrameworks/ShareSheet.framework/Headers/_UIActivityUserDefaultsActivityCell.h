/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView, _UIUserDefaultsActivityProxy;

@interface _UIActivityUserDefaultsActivityCell : UITableViewCell

{
    NSLayoutConstraint *_titleLabelHeightAnchor;
    unsigned long long _sequence;
    UIImageView *_activityImageView;
    UILabel *_activityTitleLabel;
    UIView *_activityImageSlotView;
    UIView *_activityTitleView;
    _UIUserDefaultsActivityProxy *_activityProxy;
    NSLayoutConstraint *_imageViewWidthConstraint;
    NSLayoutConstraint *_imageViewLeadingConstraint;
    NSLayoutConstraint *_labelLeadingConstraint;
}

@property (nonatomic) unsigned long long sequence;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UILabel *activityTitleLabel;
@property (retain, nonatomic) UIView *activityImageSlotView;
@property (retain, nonatomic) UIView *activityTitleView;
@property (retain, nonatomic) _UIUserDefaultsActivityProxy *activityProxy;
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;

+ (id)bodyShortFont;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
