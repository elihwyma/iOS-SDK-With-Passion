/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class CNAvatarView, CNContact, HMIncomingHomeInvitation, HUPillButton, UIActivityIndicatorView, UILabel, UIView;

@protocol HUIncomingInvitationTableViewCellDelegate;

@interface HUIncomingInvitationTableViewCell : UITableViewCell

{
    _Bool _showSpinner;
    HMIncomingHomeInvitation *_invitation;
    id <HUIncomingInvitationTableViewCellDelegate> _delegate;
    CNContact *_contact;
    CNAvatarView *_avatarView;
    UIView *_containerView;
    UILabel *_homeNameLabel;
    UILabel *_infoLabel;
    HUPillButton *_declineButton;
    HUPillButton *_acceptButton;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *homeNameLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) HUPillButton *declineButton;
@property (retain, nonatomic) HUPillButton *acceptButton;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) HMIncomingHomeInvitation *invitation;
@property (nonatomic) _Bool showSpinner;
@property (weak, nonatomic) id <HUIncomingInvitationTableViewCellDelegate> delegate;

+ (id)_formatDate:(id)arg1;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)declineButtonPressed:(id)arg1;
- (void)acceptButtonPressed:(id)arg1;
- (void)_showInvitationSpinner;
- (void)_hideInvitationSpinner;

@end
