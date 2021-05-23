/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UICollectionViewCell.h>

@class CNAvatarViewController, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface TPFavoritesEntryCell : UICollectionViewCell

{
    _Bool _contentViewLoaded;
    _Bool _contentViewLayoutConstraintsLoaded;
    UIView *_avatarContentView;
    UILabel *_contactNameLabel;
    UIImage *_transportImage;
    UILabel *_transportNameLabel;
    NSString *_actionType;
    CNAvatarViewController *_avatarViewController;
    UIImageView *_transportImageView;
    UIView *_transportView;
    UIVisualEffectView *_primaryVisualEffectView;
    UIVisualEffectView *_secondaryVisualEffectView;
    NSLayoutConstraint *_avatarContentViewHeightLayoutConstraint;
    NSLayoutConstraint *_contactNameLabelBaselineLayoutConstraint;
    NSLayoutConstraint *_transportNameLabelBaselineLayoutConstraint;
    NSLayoutConstraint *_transportNameLabelLeadingLayoutConstraint;
}

@property (retain, nonatomic) UILabel *contactNameLabel;
@property (retain, nonatomic) UIImageView *transportImageView;
@property (retain, nonatomic) UILabel *transportNameLabel;
@property (retain, nonatomic) UIView *transportView;
@property (retain, nonatomic) UIVisualEffectView *primaryVisualEffectView;
@property (retain, nonatomic) UIVisualEffectView *secondaryVisualEffectView;
@property (retain, nonatomic) NSLayoutConstraint *avatarContentViewHeightLayoutConstraint;
@property (nonatomic, readonly) double avatarContentViewHeightLayoutConstraintConstant;
@property (nonatomic, readonly) double contactNameLabelBaselineLayoutConstraintConstant;
@property (retain, nonatomic) NSLayoutConstraint *contactNameLabelBaselineLayoutConstraint;
@property (nonatomic, readonly) double transportNameLabelBaselineLayoutConstraintConstant;
@property (retain, nonatomic) NSLayoutConstraint *transportNameLabelBaselineLayoutConstraint;
@property (nonatomic, readonly) double transportNameLabelLeadingLayoutConstraintConstant;
@property (retain, nonatomic) NSLayoutConstraint *transportNameLabelLeadingLayoutConstraint;
@property (nonatomic, getter=isContentViewLoaded) _Bool contentViewLoaded;
@property (nonatomic, getter=isContentViewLayoutConstraintsLoaded) _Bool contentViewLayoutConstraintsLoaded;
@property (nonatomic, readonly) UIView *avatarContentView;
@property (retain, nonatomic) UIImage *transportImage;
@property (copy, nonatomic) NSString *actionType;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;
+ (id)imageForActionType:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)updateFonts;
- (void)loadContentView;
- (void)updateConstraintsConstants;
- (void)loadContentViewLayoutConstraints;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;

@end
