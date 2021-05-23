/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class CNAvatarView, CNContact, NSArray, NSAttributedString, NSMutableArray, NSString, UILabel;

@interface HUContactView : UIView

{
    double _avatarDiameter;
    CNContact *_contact;
    long long _contactNameFormatStyle;
    unsigned long long _numberOfLinesForMessage;
    NSArray *_accounts;
    NSString *_contactNameFontTextStyle;
    CNAvatarView *_avatarView;
    NSMutableArray *_constraints;
    UILabel *_nameLabel;
    UILabel *_messageLabel;
    UILabel *_appleIDAccountLabel;
    UILabel *_appleMusicAccountLabel;
}

@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *appleIDAccountLabel;
@property (retain, nonatomic) UILabel *appleMusicAccountLabel;
@property (nonatomic) double avatarDiameter;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) long long contactNameFormatStyle;
@property (retain, nonatomic) NSAttributedString *message;
@property (nonatomic) unsigned long long numberOfLinesForMessage;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) NSString *contactNameFontTextStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateConstraints;
- (void)_setupViews;
- (_Bool)_isPhoneNumberOnlyAccount;
- (void)_updateNameLabelFont;

@end
