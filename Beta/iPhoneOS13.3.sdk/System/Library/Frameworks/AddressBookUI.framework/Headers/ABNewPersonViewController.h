/*
 Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UIKit/UIViewController.h>

@class CNContact, CNContactViewController, NSString;

@protocol ABNewPersonViewControllerDelegate;

@interface ABNewPersonViewController : UIViewController

{
    void *_addressBook;
    void *_displayedPerson;
    id <ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
    const void *_parentGroup;
    CNContactViewController *_cnContactViewController;
    void *_parentSource;
    CNContact *_mergeContact;
}

@property (retain, nonatomic) CNContactViewController *cnContactViewController;
@property (nonatomic) void *parentSource;
@property (retain, nonatomic) CNContact *mergeContact;
@property (nonatomic) _Bool showsCancelButton;
@property (nonatomic) id <ABNewPersonViewControllerDelegate> newPersonViewDelegate;
@property (nonatomic) const void *addressBook;
@property (nonatomic) const void *displayedPerson;
@property (nonatomic) const void *parentGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)save:(id)arg1;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (id)initWithStyle:(int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (void)loadContactViewController;
- (void)setSavesNewContactOnSuspend:(_Bool)arg1;
- (_Bool)savesNewContactOnSuspend;

@end
