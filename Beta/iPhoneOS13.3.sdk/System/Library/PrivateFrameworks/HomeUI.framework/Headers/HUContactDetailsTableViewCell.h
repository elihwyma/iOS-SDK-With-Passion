/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class CNAvatarView, CNContact, NSArray, NSString, UIImage, UIImageView, UILabel, UIView;

@interface HUContactDetailsTableViewCell : UITableViewCell

{
    CNAvatarView *_avatarView;
    UIImageView *_photoView;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSArray *_constraints;
}

@property (nonatomic, readonly) CNAvatarView *avatarView;
@property (nonatomic, readonly) UIImageView *photoView;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) UIImage *photo;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
