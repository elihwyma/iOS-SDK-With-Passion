/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsCell.h>

@class CKAvatarView, CKLabel, CNContact, NSString, UIActivityIndicatorView, UIButton, UILabel;

@protocol CKDetailsContactsTableViewCellDelegate;

@interface CKDetailsContactsTableViewCell : CKDetailsCell

{
    _Bool _showsLocation;
    _Bool _showMessageButton;
    _Bool _showPhoneButton;
    _Bool _showFaceTimeVideoButton;
    _Bool _showInfoButton;
    CKAvatarView *_contactAvatarView;
    id <CKDetailsContactsTableViewCellDelegate> _delegate;
    CKLabel *_nameLabel;
    UILabel *_locationLabel;
    NSString *_entityName;
    NSString *_locationString;
    UIButton *_messageButton;
    UIButton *_phoneButton;
    UIButton *_facetimeVideoButton;
    CNContact *_contact;
    UIActivityIndicatorView *_updatingParticipantSpinner;
}

@property (retain, nonatomic) CKLabel *nameLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) CKAvatarView *contactAvatarView;
@property (copy, nonatomic) NSString *entityName;
@property (copy, nonatomic) NSString *locationString;
@property (nonatomic) _Bool showsLocation;
@property (nonatomic) _Bool showMessageButton;
@property (nonatomic) _Bool showPhoneButton;
@property (nonatomic) _Bool showFaceTimeVideoButton;
@property (nonatomic) _Bool showInfoButton;
@property (retain, nonatomic) UIButton *messageButton;
@property (retain, nonatomic) UIButton *phoneButton;
@property (retain, nonatomic) UIButton *facetimeVideoButton;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) UIActivityIndicatorView *updatingParticipantSpinner;
@property (weak, nonatomic) id <CKDetailsContactsTableViewCellDelegate> delegate;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (double)marginWidth;
+ (Class)cellClass;
+ (double)estimatedHeight;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (id)_ckSymbolImageNamed:(id)arg1 preferredContentSizeCategory:(id)arg2 preferredFontTextStyle:(id)arg3;
- (void)_configureButtonLayer:(id)arg1;
- (void)_updateVisibleButtons;
- (void)_handleCommunicationAction:(id)arg1;
- (void)_showUpdatingParticipantSpinner;
- (void)_dismissUpdatingParticipantSpinner;

@end
