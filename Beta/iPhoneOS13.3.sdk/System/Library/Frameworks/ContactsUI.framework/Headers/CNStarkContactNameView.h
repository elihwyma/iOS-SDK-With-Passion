/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNAvatarViewController, CNContact, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkContactNameView : UIView

{
    CNContact *_contact;
    UILabel *_nameLabel;
    CNAvatarViewController *_avatarViewController;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, readonly) CNAvatarViewController *avatarViewController;

- (id)initWithName:(id)arg1;
- (void)setupConstraints;
- (void)setupNameLabel;
- (void)setupAvatar;

@end
