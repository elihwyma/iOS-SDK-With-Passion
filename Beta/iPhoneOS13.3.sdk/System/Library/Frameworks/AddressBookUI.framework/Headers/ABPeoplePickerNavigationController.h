/*
 Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UIKit/UINavigationController.h>

@class CNContactPickerViewController, NSArray, NSPredicate, NSString;

@protocol ABPeoplePickerNavigationControllerDelegate;

@interface ABPeoplePickerNavigationController : UINavigationController

{
    void *_addressBook;
    id _peoplePickerDelegate;
    CNContactPickerViewController *_contactPicker;
    _Bool _ignoreViewWillBePresented;
    NSArray *_displayedProperties;
    NSPredicate *_predicateForEnablingPerson;
    NSPredicate *_predicateForSelectionOfPerson;
    NSPredicate *_predicateForSelectionOfProperty;
}

@property (nonatomic) id <ABPeoplePickerNavigationControllerDelegate> peoplePickerDelegate;
@property (copy, nonatomic) NSArray *displayedProperties;
@property (nonatomic) const void *addressBook;
@property (copy, nonatomic) NSPredicate *predicateForEnablingPerson;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfPerson;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_isDelayingPresentation;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_allowsAutorotation;
- (void)_endDelayingPresentation;
- (id)contactStore;
- (id)initWithAddressBook:(void *)arg1;
- (void)setupViewControllers;
- (void)_viewWillBePresented;
- (id)displayedPropertyKeys;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (id)contactPickerPresentedViewController:(id)arg1;
- (void)contactPickerDidCancel:(id)arg1;
- (_Bool)_shouldPreventCancelButtonsFromShowing;
- (void)_setViewController:(id)arg1 animated:(_Bool)arg2;

@end
