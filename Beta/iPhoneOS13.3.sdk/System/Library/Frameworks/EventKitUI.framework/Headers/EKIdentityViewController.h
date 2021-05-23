/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class CNContactStore, CNContactViewController;

@protocol EKEditItemViewControllerDelegate, EKIdentityProtocol;

@interface EKIdentityViewController : UIViewController

{
    id <EKIdentityProtocol> _identity;
    CNContactViewController *_personViewController;
    CNContactStore *_store;
}

@property (weak, nonatomic) id <EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) _Bool presentModally;
@property (nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) _Bool useCustomBackButton;

- (id)initWithIdentity:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)loadView;
- (Class)_CNContactStoreClass;
- (Class)_CNContactClass;
- (Class)_CNContactViewControllerClass;
- (id)contactForIdentity:(id)arg1;
- (void)updateControllerWithContact:(id)arg1 isNew:(_Bool)arg2;
- (id)CNContactPhoneNumbersKey;
- (id)CNContactEmailAddressesKey;
- (Class)_CNMutableContactClass;
- (Class)_CNLabeledValueClass;
- (id)CNLabelWork;

@end
