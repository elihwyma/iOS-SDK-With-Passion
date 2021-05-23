/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNMeCardSharingAvatarViewController, CNMeCardSharingPickerLayoutAttributes, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingHeaderViewController : UIViewController

{
    CNMeCardSharingAvatarViewController *_avatarViewController;
    NSString *_name;
    unsigned long long _mode;
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;
    UILabel *_nameLabel;
}

@property (retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) UILabel *nameLabel;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithAvatarViewController:(id)arg1 name:(id)arg2 layoutAttributes:(id)arg3;
- (double)desiredHeight;

@end
