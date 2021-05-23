/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, FAFamilyMember, NSArray, NSPredicate, NSString, UIBarButtonItem, UINavigationController, _UIRemoteViewController;

@protocol CNContactPickerContentViewController, CNContactPickerDelegate;

@interface CNContactPickerViewController : UIViewController <Swift>

{
    _Bool _ignoreViewWillBePresented;
    _Bool _hidesSearchableSources;
    _Bool _onlyRealContacts;
    _Bool _ignoresParentalRestrictions;
    _Bool _allowsEditing;
    _Bool _allowsCancel;
    _Bool _allowsDeletion;
    _Bool _hidesPromptInLandscape;
    _Bool _defaultViewControllerVisible;
    _Bool _autocloses;
    NSArray *_displayedPropertyKeys;
    id <CNContactPickerDelegate> _delegate;
    NSPredicate *_predicateForEnablingContact;
    NSPredicate *_predicateForSelectionOfContact;
    NSPredicate *_predicateForSelectionOfProperty;
    UIViewController<CNContactPickerContentViewController> *_viewController;
    CNContact *_scrollContact;
    FAFamilyMember *_familyMember;
    long long _mode;
    long long _behavior;
    long long _cardActions;
    NSArray *_prohibitedPropertyKeys;
    NSString *_prompt;
    NSString *_bannerTitle;
    NSString *_bannerValue;
}

@property (retain, nonatomic) UIViewController<CNContactPickerContentViewController> *viewController;
@property (retain, nonatomic) CNContact *scrollContact;
@property (retain, nonatomic) FAFamilyMember *familyMember;
@property (nonatomic, readonly) UIBarButtonItem *addContactBarButtonItem;
@property (nonatomic) long long mode;
@property (nonatomic) long long behavior;
@property (nonatomic) long long cardActions;
@property (nonatomic) _Bool hidesSearchableSources;
@property (nonatomic) _Bool onlyRealContacts;
@property (nonatomic) _Bool ignoresParentalRestrictions;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) _Bool allowsCancel;
@property (nonatomic) _Bool allowsDeletion;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) _Bool hidesPromptInLandscape;
@property (copy, nonatomic) NSString *bannerTitle;
@property (copy, nonatomic) NSString *bannerValue;
@property (readonly, getter=isDefaultViewControllerVisible) _Bool defaultViewControllerVisible;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic) _Bool autocloses;
@property (copy, nonatomic) NSArray *displayedPropertyKeys;
@property (weak, nonatomic) id <CNContactPickerDelegate> delegate;
@property (copy, nonatomic) NSPredicate *predicateForEnablingContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)_isDelayingPresentation;
- (void)_endDelayingPresentation;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)pickerDidCancel;
- (id)_pickerPresentedViewController;
- (void)_checkConsistencyFromOptions:(id)arg1;
- (void)scrollToClosestContactMatching:(id)arg1;
- (void)invalidateSelectionAnimated:(_Bool)arg1;
- (void)_viewWillBePresented;
- (void)_setViewController:(id)arg1;
- (void)_setupViewController;
- (_Bool)_shouldBeOutOfProcess;
- (void)_prepareViewController;
- (void)closePickerIfNeeded;
- (void)notifyDelegateForCancellation;
- (void)popToDefaultViewController:(_Bool)arg1;

@end
