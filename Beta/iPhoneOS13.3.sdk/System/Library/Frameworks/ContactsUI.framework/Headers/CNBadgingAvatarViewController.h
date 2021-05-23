/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNAvatarViewController, NSArray, NSString, UIImage, UIImageView, UIView;

@protocol CNUIObjectViewControllerDelegate;

@interface CNBadgingAvatarViewController : NSObject <Swift>

{
    id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
    CNAvatarViewController *_avatarViewController;
    UIView *_containerView;
    UIImageView *_badgeImageView;
}

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) UIImage *badgeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;
@property (weak, nonatomic) id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)descriptorForRequiredKeys;
- (id)hostingViewControllerForController:(id)arg1;
- (void)setupContainerViewIfNeeded;

@end
