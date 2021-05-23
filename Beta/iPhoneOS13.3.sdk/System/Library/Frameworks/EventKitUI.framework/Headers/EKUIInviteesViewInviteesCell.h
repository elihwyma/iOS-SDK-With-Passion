/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class EKUILabeledAvatarView, NSArray, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface EKUIInviteesViewInviteesCell : UITableViewCell

{
    _Bool _hideStatus;
    _Bool _showSpinner;
    UILabel *_nameLabel;
    UILabel *_commentLabel;
    UILabel *_optionalInviteeLabel;
    UIImageView *_statusImageView;
    EKUILabeledAvatarView *_contactAvatarView;
    UIView *_textContainerView;
    NSArray *_persistentConstraints;
    NSArray *_removableConstraints;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UILabel *optionalInviteeLabel;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) EKUILabeledAvatarView *contactAvatarView;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (retain, nonatomic) NSArray *removableConstraints;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) _Bool showSpinner;
@property _Bool hideStatus;

+ (id)_nameLabelFont;
+ (id)_commentLabelFont;

- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithParticipantForSorting:(id)arg1;
- (id)_statusImageViewSymbolConfiguration;
- (void)updateCommonElements:(id)arg1 statusImage:(id)arg2;
- (void)updateWithParticipantForSorting:(id)arg1 availabilityType:(long long)arg2 showSpinner:(_Bool)arg3 animated:(_Bool)arg4;

@end
