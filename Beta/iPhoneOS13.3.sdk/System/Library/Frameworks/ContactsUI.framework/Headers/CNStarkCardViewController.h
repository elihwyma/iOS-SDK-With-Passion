/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNAvatarViewController, CNContact, CNStarkActionsController, CNStarkNameViewController, NSArray, NSString;

@interface CNStarkCardViewController : UIViewController

{
    CNAvatarViewController *_avatarViewController;
    CNStarkNameViewController *_nameViewController;
    CNStarkActionsController *_actionsController;
    CNContact *_contact;
    NSArray *_displayedContactProperties;
    NSArray *_layoutConstraints;
}

@property (nonatomic, readonly) CNAvatarViewController *avatarViewController;
@property (nonatomic, readonly) CNStarkNameViewController *nameViewController;
@property (nonatomic, readonly) CNStarkActionsController *actionsController;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSArray *displayedContactProperties;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)starkCardControllerForCalendarEventWithContact:(id)arg1;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (id)initWithContact:(id)arg1 displayedContactProperties:(id)arg2;
- (void)setupViewControllers;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)updateViewControllers;
- (void)updateNavigationItems;
- (void)showMore:(id)arg1;

@end
